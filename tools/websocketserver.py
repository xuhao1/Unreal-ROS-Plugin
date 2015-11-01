__author__ = 'hao'
import tornado.ioloop
import tornado.web
import tornado.websocket

clients = []

class IndexHandler(tornado.web.RequestHandler):
  @tornado.web.asynchronous
  def get(request):
    request.render("index.html")

class WebSocketChatHandler(tornado.websocket.WebSocketHandler):
  def open(self, *args):
    print("open", "WebSocketChatHandler")
    clients.append(self)

  def on_message(self, message):
    print message
    for client in clients:
  		client.write_message("Fuckkkkk")

  def on_close(self):
  	clients.remove(self)

app = tornado.web.Application([(r'/chat', WebSocketChatHandler), (r'/', IndexHandler)])

app.listen(8080)
tornado.ioloop.IOLoop.instance().start()
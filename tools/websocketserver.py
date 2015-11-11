__author__ = 'hao'
import tornado.ioloop
import tornado.web
import tornado.websocket

clients = []
from time import sleep
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

from twisted.internet.protocol import DatagramProtocol
from twisted.internet import reactor

class Helloer(DatagramProtocol):

    def startProtocol(self):
        #host = "192.168.1.1"
        #port = 1234
        #
        #self.transport.connect(host, port)
        #print "now we can only send to host %s port %d" % (host, port)
        #self.transport.write("hello") # no need for address
        pass
        print "connect"
        #self.transport.write("fuck")

    def datagramReceived(self, data, (host, port)):
        print "received %r from %s:%d" % (data, host, port)
        self.transport.write(data,(host,port))


    # Possibly invoked if there is no server listening on the
    # address to which we are sending.
    def connectionRefused(self):
        print "No one listening"

# 0 means any port, we don't care in this case
reactor.listenUDP(9095, Helloer())
reactor.run()

#app.listen(8080)
#tornado.ioloop.IOLoop.instance().start()
import socket

sock = socket.socket()
host = socket.gethostname()
port = 54321

sock.connect((host, port))

print (sock.recv(1025))

sock.close()

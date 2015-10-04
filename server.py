import socket

sock = socket.socket()
host = socket.gethostname()
port = 54321

sock.bind((host, port))

sock.listen(10)

while True:
	conn, addr = sock.accept()
	print('I just got a connection from', addr)
	conn.send(b' you have been connected to our server')


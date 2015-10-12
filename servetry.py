
import socket
from socket import *

sock = socket(AF_INET,SOCK_STREAM)
host = ''
port = 54321



print "buffsize =" ,sock.getsockopt(SOL_SOCKET,SO_SNDBUF)
print "REUSEADDR BEFORE SET =" ,sock.getsockopt(SOL_SOCKET,SO_REUSEADDR)
sock.setsockopt(SOL_SOCKET,SO_REUSEADDR ,1)
print "reuse addr AFTER SET =" ,sock.getsockopt(SOL_SOCKET,SO_REUSEADDR)



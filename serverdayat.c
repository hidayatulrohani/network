
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   /* Variables */
   int sock;
   struct sockaddr_in server;
   int mysock;
   char buff[1024];
   int rval;
   int value;
   int bytesize;

    /* Create Socket */
    sock = socket(AF_INET, SOCK_STREAM, 0);


      server.sin_family = AF_INET;
      server.sin_addr.s_addr = INADDR_ANY;
      server.sin_port = htons(5000);



             getsockopt(sock, SOL_SOCKET, SO_SNDBUF,&value,&bytesize);
             if(value == 0)
             {
                   printf("UNABLE TO GET\n",value);
             }
	     else
            	 printf("GET SO_SNDBUF : %d\n", value);
             //value = 1;
             setsockopt(sock, SOL_SOCKET, SO_SNDBUF, &value, sizeof 1);
             printf("ALREADY SET \n");
             getsockopt(sock, SOL_SOCKET, SO_SNDBUF, &value, &bytesize);
             if(value == 0)
	     {
                  printf("UNABLE TO GET \n");}
             else
                  printf("get new SO_SNDBUF : %d\n",value);

             
}

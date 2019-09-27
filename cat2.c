#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char* argv[]){
    int fd,n;
    char buf[32];
   if(argc<2){
   printf("Usage : cat2 filename\n");
  exit(1);
}
   fd=open(argv[1],O_RDONLY);
  if(fd==-1){
   perror("open");
   exit(1);
  }
  while(1){
  n=read(fd,buf,32);
  if(n<=0)
    break;
  write(1,buf,n);
 }

   close(fd);
   return 0;
}



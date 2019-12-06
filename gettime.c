
#include <sys/time.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main(void){
  struct timeval starttime,endtime,geptime;
  gettimeofday(&starttime,NULL);
  sleep(1);
  gettimeofday(&endtime,NULL);

 geptime.tv_sec=endtime.tv_sec-starttime.tv_sec;
 geptime.tv_usec=endtime.tv_usec-starttime.tv_usec;

 if(geptime.tv_usec<0){
  geptime.tv_sec=geptime.tv_sec-1;
  geptime.tv_usec=geptime.tv_sec+1000000;
 }
  printf("ellapsed Time[%02ld.%02ld] second\n",geptime.tv_sec,geptime.tv_usec);
 return 0;
}


















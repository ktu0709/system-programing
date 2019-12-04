
#include <pwd.h>
#include <unistd.h>
#include <stdio.h>

int main(void){
 struct passwd *pw;
 int n;
 while(1){
  pw=getpwent();
  if(pw==NULL)
     break;
  printf(" UID : %d, LoginName : %s\n",(int)pw->pw_uid,pw->pw_name);
  }
 return 0;
 }




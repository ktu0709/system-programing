

#include <pwd.h>
#include <unistd.h>
#include <stdio.h>

int main(void){
 struct passwd *pw;
 char name[9];

 printf("Enter User Name: ");
 scanf("%s",name);
 pw=getpwnam(name);
 printf("UID : %d\n",(int)pw->pw_uid);
 printf("Home Directory : %s\n",pw->pw_dir);
 printf("Shell : %s\n",pw->pw_shell);

 return 0;
 }


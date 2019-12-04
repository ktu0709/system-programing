
#include <pwd.h>
#include <unistd.h>
#include <stdio.h>

int main(void){
 struct passwd *pw;
 pw=getpwuid(getuid());

 printf("UID : %d\n",(int)pw->pw_uid);
 printf("GID : %d\n",(int)pw->pw_gid);
 printf("Login Name : %s\n",pw->pw_name);
 printf("Password : %s\n",pw->pw_passwd);
 printf("Gecos : %s\n",pw->pw_gecos);
 printf("DIR : %s\n",pw->pw_dir);
 printf("Shell : %s\n",pw->pw_shell);

 return 0;
 }


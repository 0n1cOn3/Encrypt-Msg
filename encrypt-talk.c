#include <stdio.h>

void art(){
  printf(" _____                             _     __  __\n| ____|_ __   ___ _ __ _   _ _ __ | |_  |  \\/  |___  __ _\n|  _| | '_ \\ / __| '__| | | | '_ \\| __| | |\\/| / __|/ _` |\n| |___| | | | (__| |  | |_| | |_) | |_  | |  | \__ \ (_| |\n|_____|_| |_|\\___|_|   \\__, | .__/ \\__| |_|  |_|___/\\__, |\n                       |___/|_|                     |___/\n");
}

void nc(char *a){
char *nc=a;
while(*nc!='\0'){
*nc=*nc + 5;
nc++;
 }
 }
void enc(char *b){
  char *enc=b;
   while(*enc!='\0'){
   *enc=*enc - 5;
  enc++;
 }
  }
 int main ()
 {
  art();
 char u[1000]="";
 int t;                                                                   
 printf ("\033[0;35m ● Welcome to encrypt talk tool....\n");
 printf ("\033[0;32m ● Do not use spaces while writing.\n");
 printf ("\033[0;31m ● 1)Encrypt\n");
 printf ("\033[0;31m ● 2)Decrypt\n");
 printf ("\033[0;37m Select any option:");
 scanf ("%d",&t);
 if (t==1){
 printf ("\033[0;34m ● Enter what you want to encrypt:");
 scanf("%s",u);
 nc (u);
 printf ("\033[0;33m --> Encrypted text:%s\n",u);}
else if (t==2){
printf ("\033[0;34m ● Enter what you want to decrypt:");
scanf ("%s",u);
enc(u);
printf ("\033[0;33m --> Decrypted text:%s\n",u);
}
else {
printf ("Wrong input!!!\n");





}

 } 

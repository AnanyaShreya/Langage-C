//Printing Hello world
#include<stdio.h>

int main()
{
   printf("Hello world");
}
//other ways of printing hello world
//using character array
#include<stdio.h>
int main() {
 char arr[12] = {'H','e','l','l','o',' ','W','o','r','l','d'};
 printf("%s\n",arr);
 return 0;
}
//using strings
#include<stdio.h>
int main() {
 char arr[15] = "Hello World";
 printf("%s\n",arr);
 return 0;
}
//using character variable
#include<stdio.h>
int main() {
 char a = 'H', b = 'e', c = 'l', d = 'l', e = 'o',f = 'W',g = 'o',h = 'r',i = 'l',j = 'd';
 printf("%c%c%c%c%c %c%c%c%c%c\n",a,b,c,d,e,f,g,h,i,j);
 return 0;
}
//using puts()
#include<stdio.h>
int main() {
 puts("Hello World\n");
 return 0;
}
//using system()?
#include<stdio.h>
int main() {
 system("echo Hello World\n");
 return 0;
}
 //using pointers?
#include<stdio.h>
int main() {
 char *s = "Hello World";
 printf("%s",s);
 return 0;
}
//using pointers
#include<stdio.h>
int main() {
 char *s = "Hello World";
 printf("%s",s);
 return 0;
}

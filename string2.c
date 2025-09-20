#include<stdio.h>
#include<string.h>

int main(){

 int mystr(char s[],char a[]){
    int i = 0;
    while(s[i] && a[i]){
      if ( s[i] != a[i]){
        break;
      }
      i++;
    }
    return (s[i]-a[i]);
 }

    char s[] = "geek";
    char a[] = "gee";
    int val;
    val = mystr(s,a);
    printf("The return value of comparing two string is: %d\n\n",val);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){

FILE *fptr = fopen("sudhin.txt","w");
fprintf(fptr,"Content to be written\n");
fclose(fptr);
puts("Values have been added to the file\n");

return 0;
}
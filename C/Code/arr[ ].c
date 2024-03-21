#include <stdio.h>
#include <stdlib.h>

int main(){
    char arr[] = "hello,world!\n";
    printf("%s",arr);
    
    arr[5] = 0;
    printf("%s\n",arr);
    system("pause");
    return 0;
}
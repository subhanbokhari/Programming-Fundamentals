include<stdio.h>
#include<string.h>
#define key 3
int main()
{
void encrypted_program(char string[]){
    int length=strlength(string);
    for(int i=0;i<length;i++){
        printf("%c",string[i];)
    }
}

void decrypted_program(char string1[])
{
    int length=strlength(string1);
    encrypted_program(string1);
    for(int i=0;i<length;i++);{
        string1[i]=((string1[i]-'a'-key+26));
    }
    printf("Program has been decrypted");
    
    for(int i=0;i<length;i++){
        printf("%c",string1[i]);
    }
}

int main()
{
char arr[50];

printf("Enter a string");
gets(arr);
decrypted_program(arr);


    return 0;
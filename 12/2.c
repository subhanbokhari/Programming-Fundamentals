#include<stdio.h>
#include<string.h>

int main ()
{
    char arr[100]; char str2[100];
    int count=0;
    char i;
    int vowel=0;
    int con=0;
    int visited=0;

    printf("Please Input a string without spaces\n");
    scanf("%s",arr);
    int length= strlen(arr);

    do
    {
        printf("A-Number of Vowels\n B-Vowels and Cosonants\n C-Most Frequent Character\n D- Concatenate another string\n E-Exit");
        scanf(" %c",i);

        if(i=='A')
        {
            for(int i=0;i<length;i++)
            {
                if (arr[i] == 'a'|| arr[i] == 'A'|| arr[i] == 'e'|| arr[i] == 'E'|| arr[i] == 'i'|| arr[i] == 'I'||arr[i] == 'o'||arr[i] == 'O'||arr[i] == 'u'||arr[i] == 'U')
                {
                    vowel++;
                }
            }
            printf("Number of vowels are %d",vowel);
        }
        if(i=='B')
        {
             for(int j=0;j<length;j++)
            {
                if (arr[i] == 'a'|| arr[i] == 'A'|| arr[i] == 'e'|| arr[i] == 'E'|| arr[i] == 'i'|| arr[i] == 'I'||arr[i] == 'o'||arr[i] == 'O'||arr[i] == 'u'||arr[i] == 'U')
                {
                    vowel++;
                }
                else
                {
                    con++;
                }
            }
            printf("Number of vowels are %d",vowel);
            printf("Number of consonants are %d",con);
        }
        if(i=='C')
        {
            int count[26];
	int length=strlen(arr);
	int chr;
	for(int i=0;i<26;i++){
		count[i]=0;
	}
	for(int i=0;i<length;i++){
		chr=arr[i];
		chr=chr-97;
		for(int j=0;j<26;j++){
			if(chr==j){
				count[j]++;
			}
		}
	}
	int max=count[0];
	int maxi;
	for(int i=0;i<26;i++){
		if(count[i]>max){
			max=count[i];
			maxi=i;
		}
	}
	    maxi=maxi+97;
        printf("The Most repreated Character is %c",maxi);    
    }
        if(i=='D')
        {
		printf("Enter another word:");
		scanf("%s",&str2);
		strcat(arr,str2);
		printf("\nThe concatenated string is %s",arr);
        }                        
    }
    while(i=='E');
    
    return 0;
}
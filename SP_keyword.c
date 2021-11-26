#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int Mujahid;
char string[31];
int count=0,i;
printf("Enter the String: ");
gets(string);

 char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;


   int flag=0;
   for(i = 0; i < 32; i++) {
      if(strcmp(string,keyword[i])==0) {
         flag=1;
      }
   }

   if(flag==1)
      printf("(%s is a keyword) ",string);

   else if ((string[0]>='a'&&string[0]<='z') || (string[0]>='A'&&string[0]<='Z') || (string[0]=='_') || (string[0]=='$'))
    {
        for(i=1;i<=strlen(string);i++)
            {
                if((string[i]>='a'&& string[i]<='z') || (string[i]>='A' && string[i]<='Z') || (string[i]>='0'&& string[i]<='9') || (string[i]=='_'))
                    {
                        count++;
                    }

            }
    }

     else{
      printf("(%s is not a keyword) ",string);

      }

                if(count==(strlen(string)-1))
                    {
                        printf("Input string is a valid identifier");
                    }

                else
                    {
                        printf("Input string is not a valid identifier");
                    }

                    return 0;



}

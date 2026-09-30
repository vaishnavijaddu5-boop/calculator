#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	/*char s[100],i;
	printf("enter the string");
	fgets(s,sizeof(s),stdin);
	for(i=0;s[i]!='\0';i++)
	{
		if(islower(s[i]))
		{
			s[i]=toupper(s[i]);

		}
		else if(isupper(s[i]))
		{
			s[i]=tolower(s[i]);
		}
	
	}
printf("the string is %s",s);
*/
//program to findalphabets and digts in a string
/*
char s[100];
int i,v=0,c=0,d=0;
printf("entre the string");
fgets(s,sizeof(s),stdin);
for(i=0;s[i]!=0;i++)
{
	if(isalpha(s[i]))
	{
	  if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
		  v++;
			}
	else
		c++;
		

	}
	else if(isdigit(s[i]))
	{
	  d++;
		}	
}
printf("no.of vowels is %d\n no.of digits is %d\n no.of consonants is %d\n",v,d,c);
*/
//program without using functions
/*char s[100];
int i,v=0,c=0,d=0;
printf("entre the string");
fgets(s,sizeof(s),stdin);
for(i=0;s[i]!=0;i++)
{
	if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
	{
	  if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
		  v++;
			}
	else
		c++;
		

	}
	else if(s[i]>='0'&&s[i]<='9')
	{
	  d++;
		}	
}
printf("no.of vowels is %d\n no.of digits is %d\n no.of consonants is %d\n",v,d,c);
*/
//program to check whether the string is palindrome or not
/*
char s[100];
int i,length,found;
printf("entre the string");
fgets(s,sizeof(s),stdin);
length=strlen(s);
for(i=0;i<length/2;i++)
{
	if(s[i]!=s[length-1-i])
	{
		found=0;
		break;
	}

}
if(found==1)
{
	printf("it is a palindrome");
}
else
	printf("its not a palindrome");
*/
//program to sort the characters in the string
/*
//not giving any output
char s[100],temp;
int i,j,len;
len=strlen(s);
printf("enter the string");
//fgets(s,sizeof(s),stdin);
scanf("%s",s);
for(i=0;i<len-1;i++)
{
	for(j=0;j<len-i-1;j++)
	{
		if(s[j]>s[j+1])
		{
			temp=s[j];
			s[j]=s[j+1];
			s[j+1]=temp;
		}
	}
}
printf("the sorted string is %s",s);
*/

//program to find strings starting with c and a
char a[2][100];
int i,j;
for(i=0;i<2;i++)
{
   for(j=0;j<100;j++)
   {
	scanf("%s",a[i]);
    }
} 
for(i=0;i<2;i++)
{
   for(j=0;j<100;j++)
   {
	printf("%s",a[i]);
    }
} 
for(i=0;i<2;i++)
{
   for(j=0;j<100;j++)
   {
	if(a[i][0]=='a'||a[i][0]=='A'||a[i][0]=='c'||a[i][0]=='C')
         {
		printf("the string is %s/t starting with %c",a[i],a[i][0]);
	   }
    }
} 
return 0;

}

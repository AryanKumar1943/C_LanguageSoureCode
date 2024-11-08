int slength(char *s)
{
int i=0,len=0;
while(s[i]!='\0')
{
len=len+1;
i=i+1;
}



return len;
}
void palindromeCheck(char *s,char *rev)
 {
 if(strcmp(s,rev)==0)
 {
 printf("Palindrome");
 }
 else
 {
 printf("not");
 }

}

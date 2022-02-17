https://www.codechef.com/problems/ALPHABET

#include<stdio.h>
#include <string.h>
char str[27];
int len=0;
int main()
{
    scanf("%s",str);
    len=strlen(str);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str1[27];
        int count=0;
        scanf("%s",&str1);
        for(int i=0;str[i]!='\0';i++)
        {
            int j=0;
            while(str1[j]!='\0')
            {
                if(str[i]==str1[j])
                {
                    count++;
                    break;
                }
                j++;
            }
        }
        if(count==len)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

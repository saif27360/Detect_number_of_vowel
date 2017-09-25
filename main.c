 #include <stdio.h>


int main()
{

    char string1[]
    int g=0,x,b=0,c=0,d=0,h=0,tv=0,tc;

    printf("please input a text or word \n");
    scanf("%s",string1);

    for(x=0;string1[x]!='\0';x++)
    {
        if (string1[x]=='a')
            {
            g=g+1;
            }
            else if (string1[x]=='e')
            {
                b=b+1;
            }
            else if (string1[x]=='i')
            {
                c=c+1;
            }
            else if (string1[x]=='o')
            {
                d=d+1;
            }
            else if (string1[x]=='u')
            {
                h=h+1;
      }

    }
     tv=tv+g+b+c+d+h;
     tc=10-tv;
    printf("Number of vowel is: %d\n",tv);
    printf("Number of consonant is: %d",tc);
    return 0;
}

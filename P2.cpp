#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char s[100];
    cout<<"Enter string- ";
    cin.getline(s,100);
    char* p=s;
    int v,c;
    while(*p!='\0')
    {
        if(isalpha(*p))
        {
            if(*p=='a' || *p=='e' || *p=='i'|| *p=='o' || *p=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        *p++;
    }
    cout<<"No. of vovels- "<<v<<endl;
    cout<<"No. of consonants- "<<c<<endl;
    
}
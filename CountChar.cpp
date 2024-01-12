#include<iostream>
using namespace std;
int main()
{
    int vowel=0,consonant=0,i=0;
    char str[8];
    cout<<"Enter a Word:";
    cin>>str;
    cout<<str<<endl;
    while(str[i]!='\0')
    {
        if(str[i]=='a'|| str[i]=='A'||str[i]=='e'|| str[i]=='E'|| str[i]=='i'|| str[i]=='I'|| str[i]=='o'|| str[i]=='O'|| str[i]=='u'|| str[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
        i++;
    }
    cout<<"Vowel="<<vowel<<endl;
    cout<<"Consonant="<<consonant;
    return 0;
}
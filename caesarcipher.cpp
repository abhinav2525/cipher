#include<iostream>
#include<string.h>
using namespace std;

void caesar(char pt[], int ks);

int  main()
{

char plaintext[30];
int keyshift;
cout<<"\n[~]Enter the plain text:";cin>>plaintext;
cout<<"\n[~]Enter the number of keyshift:";cin>>keyshift;
caesar(plaintext,keyshift);

return 0;
}

void caesar(char pt[], int ks)
{
 string  result;
 for(int i=0;i<strlen(pt);i++)
    { if(isupper(pt[i]))
        result += char(int(pt[i]+ks-65) % 26 + 65);
        else
        result += char(int(pt[i]+ks-97) % 26 + 97);
     }
 cout<<"[*]\nCaesar ciphertext:"<<result;
}


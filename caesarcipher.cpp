#include<iostream>
#include<string.h>

void caesar(char pt[], int ks);

int  main()
{

char plaintext[30];
int keyshift;
std::cout<<"\n[~]Enter the plain text:"<<plaintext;
std::cout<<"\n[~]Enter the number of keyshift:"<<keyshift;
caesar(plaintext,keyshift);

return 0;
}

void caesar(char pt[], int ks)
{
 std::string  result;
 for(int i=0;i<strlen(pt);i++)
    { if(isupper(pt[i]))
        result += char(int(pt[i]+ks-65) % 26 + 65);
        else
        result += char(int(pt[i]+ks-97) % 26 + 97);
     }
 std::cout<<"[*]\nCaesar ciphertext:"<<result;
}


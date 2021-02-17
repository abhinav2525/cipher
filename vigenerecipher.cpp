#include<iostream>
#include<string>
#include<vector>
using namespace std;

string a,b,c,d;

string gk();
string encrypt();
string decrypt();
int main()
{
 cout<<"[*]enter the plain text:";
 cin>>a;
 cout<<"\n[*]enter key text:";
 cin>>b;
 cout<<"[~]The generated key:"<<gk()<<endl;
 cout<<"[~]The encrypted text:"<<encrypt()<<endl;
 cout<<"[*]The decrypted text:"<<decrypt()<<endl;
 return 0;
 }

 string gk()
 {
  int x = b.length();
  
  for(int i=0;;i++)
     {
       if (x == i)
          i= 0;
       if(a.length() == b.length())
          break;
       b.push_back(b[i]);

 }return b;
}

 string encrypt()
 {
   for (int i = 0;i<a.length();i++ )
     {  char x = ((a[i]+b[i]) % 26);
             x += 'A';
        c.push_back(x);
      }
     return c;
  }


        
string decrypt()
 {
   for (int i = 0;i<a.length();i++ )
     {  char x = ((c[i]-b[i] + 26) % 26);
             x += 'A';
        d.push_back(x);
      }
     return d;
  }
      

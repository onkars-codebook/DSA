//----------------------Linear Probing--------------------
#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter size of hash table"<<endl;
cin>>n;
 int ht[n];
 int key;
 int hkey;
 
 for(int i=0 ; i < n ; i++)
{
    ht[i]=-1;
}
for(int i=0 ; i < n ; i++)
{
    cout<<"  "<<ht[i]<<endl;
}
  
  for(int i=0;i<n;i++)
  {
      cout<<"enter  key value"<<endl;
      cin>>key;
      
      hkey=key%n;
      if(ht[hkey]==-1)
      {
          cout<<"key stored at index "<<hkey<<endl;
          ht[hkey]=key;
          for(int i=0 ; i < n ; i++)
{
    cout<<"  "<<ht[i]<<endl;
}
      }
      else
      {
          for(int i=1;i<n;i++)
          {
             int m=hkey+i;
             int s=m%n;
              if(ht[s]==-1)
              {
                  ht[s]=key;
                  cout<<"key stored at index "<<s<<endl;
                  for(int i=0 ; i < n ; i++)
{
    cout<<"  "<<ht[i]<<endl;
}
                  break;
              }
          }
          
      }
  }
 
  
  
  
  
  
  
    return 0;
}
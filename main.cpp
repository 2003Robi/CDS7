#include <iostream>

using namespace std;
void afisare(int x,int y, int k){
  int i,c=0;
  for(i=x ; i<=y ; i++)
  {
      c++;
      if(c%k!=0)
        cout<<i<<" ";
      else
        cout<<i<<" * ";
  }
  if(c%k!=0)
    cout<<"*";
}
int main()
{
    afisare(11,21,4);
    return 0;
}

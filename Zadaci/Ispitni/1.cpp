#include <iostream>
#include <cmath>
#include<cctype>
#include <cstring>
using namespace std;

bool palindrom(char niza[],int start, int end)
{
    if(start>=end)
    {
        return true;

    }
    else
    {
        if(niza[start]==niza[end])
        {
            return palindrom(niza,start+1,end-1);
        }
        else
        {
            return false;
        }
    }
}
bool specijalenZnak(char niza[])
{
    for(int i=0; i< strlen(niza);i++)
    {
        if(!isalnum(niza[i]))
        {
            return true;
        }
    }
    return false;
}
int main() {
  int n;
  cin>>n;
  cin.ignore();
  char longest[1000];
  longest[0]='\0';
  for(int i=0;i<n;i++)
  {
      char niza[1000];
      cin.getline(niza,1000);
      int dolzhina=strlen(niza);
      if(palindrom(niza,0,dolzhina-1) && specijalenZnak(niza))
      {
            if(dolzhina> strlen(longest))
                strcpy(longest,niza);
      }
  }
  if(longest[0]=='\0')
  {
      cout<<"Nema!"<<endl;
  }
  else
  {
      cout<<longest<<endl;
  }
}


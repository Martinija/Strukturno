#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char matrica[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrica[i][j];
        }
    }
    cin.ignore();
    char zbor[100];
    cin.getline(zbor,100);
    int f1,f2,s1,s2;
    f1=f2=s1=s2=-1;
    int dolz= strlen(zbor);
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrica[i][j]==zbor[0])
            {
                f1=s1=i;
                f2=s2=j;
                if(s1+1>=dolz)//uslov za nagore
                {
                    for(int k=0;k<dolz;k++)
                    {
                        if(matrica[f1--][f2]!=zbor[k])
                        {
                            break;
                        }
                        if(k==dolz-1)
                        {
                            cout<<s1<<", "<<s2<<" -> "<<f1+1<<", "<<f2;
                            return 0;
                        }
                    }
                    f1=s1;
                }
                if(s2+1>=dolz)// uslov za levo
                {
                    for(int k=0; k<dolz;k++)
                    {
                        if(matrica[f1][f2--]!=zbor[k])
                        {
                            break;
                        }
                        if(k==dolz-1)
                        {
                            cout<<s1<<", "<<s2<<" -> "<<f1<<", "<<f2-1;
                            return 0;
                        }
                    }
                    f2=s2;
                }
                if(n-s1>=dolz)// uslov za dole
                {
                    for(int k=0;k<dolz;k++)
                    {
                        if(matrica[f1++][f2]!=zbor[k])
                        {
                            break;
                        }
                        if(k==dolz-1)
                        {
                            cout<<s1<<", "<<s2<<" -> "<<f1-1<<", "<<f2;
                            return 0;
                        }
                    }
                    f1=s1;
                }
                if(n-s2>=dolz) //desno
                {
                    for(int k=0;k<dolz;k++)
                    {
                        if(matrica[f1][f2++]!=zbor[k])
                        {
                            break;
                        }
                        if(k==dolz-1)
                        {
                            cout<<s1<<", "<<s2<<" -> "<<f1<<", "<<f2-1;
                            return 0;
                        }
                    }
                    f2=s2;
                }
            }

        }
    }
    cout<<"Not Found"<<endl;
    return 0;

}

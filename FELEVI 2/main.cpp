#include <iostream>

using namespace std;

int main()
{
    int n,i,oszto,b,szamjegy,P=0;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<=n;n++)
        {
            cout<<"b=";
            cin>>b;
            while(b>0)
                {
                  szamjegy=b%10;
                  b=b/10;
                  if(szamjegy%4!=0)
                    {
                        P=P+szamjegy;
                    }
                }
        }
cout<<P;

    return 0;
}

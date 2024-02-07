#include <iostream>

using namespace std;

int main()
{

{
   int n,i,c,oszto,s;
   cout<<"n=";
   cin>>n;
   for(i=0;i<n;i++)
    {
        cout<<"c=";
        cin>>c;
        for(int oszto=2;oszto<c/2+1;oszto++)
            {
                if(c%2==0)
                    {
                        if(oszto%2!=0)
                            {
                                s=s*oszto;
                            }

                    }
            }
    }
    cout<<s;
    }
    return 0;
}

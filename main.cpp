#include <iostream>


using namespace std;

int main()
{
   int max,x,n,k=1;
   float bil[10];
   float mod[10];
   int total[10];

   x=0;
   cout<<"Banyak Data yang ingin di input : ";cin>>n;
   for(int c=0;c<n;c++)
   {
            cout<<"Data Ke- "<<(c+1)<<" : ";cin>>bil[c];
   }
   cout<<endl;

   for(int c=0;c<n;c++)
   {
    for(int i=(n-1);i>=0;i--)
    {
    if(bil[i]<bil[i-1])
    {
    int temp;
    temp=bil[i];
    bil[i]=bil[i-1];
    bil[i-1]=temp;
    }
    }
    }

    for(int c=0;c<n;c++)
    {total[c]=0;
    for(int i=0;i<n;i++)
    {
    if(bil[c]==bil[i])
    {
    total[c]++;
    }}}

    for(int c=0;c<n;c++)
    {
    if(total[c]>k)
    {k=total[c];}
    }

    for(int c=0;c<n;c++)
    {
    if(x==0)
    mod[x]=0;
    else
    mod[x]=mod[x-1];
    if(total[c]==k)
    {if(bil[c]!=mod[x])
    {mod[x]=bil[c];
    x++;}
    }
    }

    int z=0;
    for(int c=0;c<n;c++)
    {if(total[c]==k){z++;}
    }

    if(z==n){x=0;}

    if (x==0)
    cout<<"Tidak Ada Modus!"<<endl;
   else
   {cout<<" Nilai Modus : ";
    for(int c=0;c<x;c++)
    {cout<<mod[c]<<" ";}
    }

    cout<<endl;

    max=0;
    max = bil[0];
    for(int c=0;c<n;c++)
    {
    if (max < bil[c])
    {max=bil[c];}
    }
    cout<<"\n Nilai terbesar : " << max;

return 0;
}



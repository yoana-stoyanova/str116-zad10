//Програмата извежда колко пъти 'а' се среща в масив от символи
#include <iostream>
using namespace std;
int main ()
{
   int n;
   cout<<"br. elementi = "; cin>>n;
   char arr[n];
   int br=0;
   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
       if(arr[i]=='a') br++;
   }
   cout<<"br = "<<br;


    return 0;
}

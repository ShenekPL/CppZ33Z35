#include <cstdlib> 
#include <iostream> 

using namespace std; 

int main(int argc, char argv[]) 
{ 
     int a[5]; 
          for(int i=1;i<=5;i++) 
     { 
          cout<<"podaj A["<<i<<"]="; 
          cin>>a[i];
     } 
          int iloczyn=1;
for(int i=1;i<=5;i++) 
     {
            iloczyn=a[i];
   //       cout<<"w komorce A["<<i<<"]="<<a[i]<<"\n";
     }
     cout<<"iloczyn= "<<iloczyn<<endl;
system("PAUSE"); 
return EXIT_SUCCESS; 
}
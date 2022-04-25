#include <cstdlib> 
#include <iostream> 

using namespace std; 

int main(int argc, char *argv[]) 
{ 
     int a[8]; 
          for(int i=1;i<=8;i++) 
     { 
          cout<<"podaj A["<<i<<"]="; 
          cin>>a[i];
     } 
          int L_mniejsze=0;
          int L_wieksze=0;
          int L_rowne=0;
for(int i=1;i<=8;i++) 
     {
          if(a[i]>0)
          {
          L_wieksze=L_wieksze+1;
          }
          if(a[i]==0)
          {
          L_rowne=L_rowne+1;
          }
          if(a[i]<0)
          {
          L_mniejsze=L_mniejsze+1;
          }
   //       cout<<"w komorce A["<<i<<"]="<<a[i]<<"\n";
     }
     cout<<"wieksze= "<<L_wieksze<<endl;
     cout<<"rowne= "<<L_rowne<<endl;
     cout<<"mniejsze= "<<L_mniejsze<<endl;
system("PAUSE"); 
return EXIT_SUCCESS; 
}
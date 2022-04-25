#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char argv[])
{
  int a[7];
    for(int i=0;i<=6;i++)
  {
      cout<<"podaj A["<<i<<"]=";
      cin>>a[i];
  }
    int suma=0;
    float srednia;
    int licznik;
 for(int i=0;i<=6;i++)
 {
     suma=suma+a[i];
     licznik=i;
//          cout<<"w komorce A["<<i<<"]="<<a[i]<<"\n";

    }
    cout<<" suma="<<suma<<endl;
    srednia = suma / (licznik*1.0);
    cout<<" srednia="<<srednia<<endl; 
 system("PAUSE");
 return EXIT_SUCCESS;
}

#include<iostream>
#include <math.h>
#include<complex>
std::complex<double> iota(0,1); 

using namespace std; 
typedef struct BlochSphere { 
int psi; 
int phi; 
int theta;
}Bloch;
int main()
{
double real=0;
double imag=1;
 
  Bloch rotationparameters;
  rotationparameters.psi=180;
   rotationparameters.phi=90;
    rotationparameters.theta=90;
    cout<<rotationparameters.psi<<endl;
    std::complex<double> input[1][2]={{1,2}};
    std::complex<double> output[1][2];
  std::complex<double> PauliXGate[2][2]={{0,1},{1,0}};
  for (std::complex<double> firstrow:PauliXGate[0])
  cout<<firstrow<<endl;
  for (std::complex<double> secondrow:PauliXGate[1])
  cout<<secondrow<<endl;
  int i,j,k;
cout<<"The input vector is"<<endl;
for(std::complex<double> result:input[0])
{
  cout<<result<<endl;
}
for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
  {
  output[0][i]+=input[0][j]*PauliXGate[j][i];
  }

}
cout<<"The Output co ordinates are"<<endl;
for(std::complex<double> result:output[0])
{
  cout<<result<<endl;
}
}
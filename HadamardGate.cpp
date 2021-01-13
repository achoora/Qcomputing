#include<iostream>
#include <math.h>
using namespace std; 
typedef struct BlochSphere { 
int psi; 
int phi; 
int theta;
}Bloch;
int main()
{
  Bloch rotationparameters;
  rotationparameters.psi=180;
   rotationparameters.phi=90;
    rotationparameters.theta=90;
    cout<<rotationparameters.psi<<endl;
    double input[1][2]={{1,2}};
    double output[1][2];
  double HGate[2][2]={{(1/sqrt(2)),(1/sqrt(2))},{(1/sqrt(2)),(1/sqrt(2))}};
  for (double firstrow:HGate[0])
  cout<<firstrow<<endl;
  for ( double secondrow:HGate[1])
  cout<<secondrow<<endl;
  int i,j,k;

for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
  {
  output[0][i]=input[0][j]*HGate[j][i];
  }

}
for(double result:output[0])
{
  cout<<result<<endl;
}
}
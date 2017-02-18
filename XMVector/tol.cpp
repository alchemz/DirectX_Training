#include <windows.h>
#include <xnamath.h>
#include <iostream>
using namespace std;

int main()
{
  cout.precision(8);
  
  //check support
  if(!XMVerifyCPUSupport())
  {
    cout<<"xna math not supported"<<endl;
    return 0;
  }
  
  XMVECTOR u = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);
  XMVECTOR n = XMVector3Normalize(u);
  
  float LU = XMVectorGetX(XMVector3Length(n));
  
  //Mathematically, the length should be 1
  cout << LU << endl;
  if(LU==1.0f)
    cout<<"Length 1"<<endl;
   else
    cout<<"Length not 1""<<endl;
    
    //raising 1 to any answer
    float powLU = powf(LU, 1.0e6f);
    cout<<"LU^(10^6="<<powLU <<endl;
}

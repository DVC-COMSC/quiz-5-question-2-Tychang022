#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   do{
      cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
      cin >> N >> M;
      if ( !(0 < N < 10) || !(1 <= M <= 10))
      cout << "Error, Please try again\n";
   }while (!(0 < N < 10) || !(1 <= M <= 10));
   
   int nthPower = 1;
	
	
	if (N >= 0){
		for(int i = 0; i < N; ++i)
		{
		nthPower *= M;
		}
	}
	else{
		for(int i=0; i > N; --i){
		nthPower /= M;
		}
	}
								
	
	cout << "M to Power " << N << " is " << nthPower << endl;

  
}

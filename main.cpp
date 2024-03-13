#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   do{
      cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
      cin >> N >> M;
      if ( !(0 < N && N < 10) || !(1 <= M && M <= 10))
      cout << "Error, Please try again\n";
   }while (!(0 < N && N < 10) || !(1 <= M && M <= 10));
   
   int nthPowerResult = 1;
	
	cout <<  N << " to Power " << M << " is " << endl;
	
		for(int i = 0; i <= M; ++i)
		{
		cout << nthPowerResult << " ";
		nthPowerResult *= N;
		}

		cout << endl;
		return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
void PF(double);
int main() {
	struct goo {
		double num[4] = { 0,0,0,0 };
		
   };
	goo dex;
	cout << "Enter number : ";
		cin >> dex.num[0];
		PF(dex.num[0]);
		return 0;
			
}

void PF(double x)
	{
	int i=0,t=0;
	 if(x>0&&x<100000){
		 i=sqrt(x);
		 t = i * i;
	 if(x== t){
		 cout << x << " is PREFECT SQUARE ROOT."<<endl;
	 }
	 else if (x != t) {
		 cout << x << " is NON PREFECT SQUARE ROOT." << endl;
	 }
	 
	 }else{

		 cout << "ERROR" << endl;
	 }

	}

#include <iostream>
#include <math.h>

using namespace std;
void conti(int,int,int,int,double);
int main()
{
	struct cpp {
		int num[4];
		double numto;
	
		
};
	
	
		cpp dex;
		dex.num[0] = 1;
		dex.num[1] = 1;
		dex.num[2] = 1;
		dex.num[3] = 0;
		cout << "ENTER NUMBER 1000 : ";
		cin >>dex.num[3];
		conti(dex.num[3],dex.num[0],dex.num[1],dex.num[2],dex.numto);

	
}

void conti(int x,int w,int a,int s,double d) {
	if (x == 1000) {
		for (; w < 1000; w++)
		{
			for (a = w + 1; a < 1000; a++)
			{
				d = pow(w, 2) + pow(a, 2);
				d = sqrt(d);

				if (fmod(d, 1) == 0)
				{
					s = (int)d;
					if (s > a && a > w)
					{
						if (w + a + s == 1000)
						{
							cout << "a:  " << w << endl;
							cout << "b:  " << a << endl;
							cout << "c:  " << s << endl;
							cout << "abc:  " << a * w * s << endl;

							
						}
						if (w + a + s > 1000) a = 2000;
					}
				}
			}
		}
	
	
	
	}
	else { cout << "|||+++Not working+++|||" << endl; }
}
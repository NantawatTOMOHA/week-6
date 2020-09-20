#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	struct cpp {
		int num[4];
		double numto;
		char nam;
		
};
	
	
		cpp dex;
		dex.num[0] = 1;
		dex.num[1] = 1;
		dex.num[2] = 1;
		dex.num[3] = 0;
		
		


	for (; dex.num[0] < 1000; dex.num[0]++)
	{
		for (dex.num[1] = dex.num[0] + 1; dex.num[1] < 1000; dex.num[1]++)
		{
			dex.numto = pow(dex.num[0], 2) + pow(dex.num[1], 2);
			dex.numto = sqrt(dex.numto);

			if (fmod(dex.numto, 1) == 0)
			{
				dex.num[2] = (int)dex.numto;
				if (dex.num[2] > dex.num[1] && dex.num[1] > dex.num[0])
				{
					if (dex.num[0] + dex.num[1] + dex.num[2] == 1000)
					{
						cout << "a:  " << dex.num[0] << endl;
						cout << "b:  " << dex.num[1] << endl;
						cout << "c:  " << dex.num[2] << endl;
						cout << "abc:  " << dex.num[1] * dex.num[0] * dex.num[2] << endl;

						return 0;
					}
					if (dex.num[0] + dex.num[1] + dex.num[2] > 1000) dex.num[1] = 2000;
				}
			}
		}
	}

	cout << "Not Found." << endl;

	return 1;
}
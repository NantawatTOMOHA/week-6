#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;
void calculate(int, int, int);
int main() {
    struct foo {

        char a[50];
        char b[30];
        char d[30];
        char trash[30];
        int low[3] = { 0,0,0 };
        int sum[1] = { 0};
        int up[2] = { 0,0 };
    };
    foo dex;
   
    cin >> dex.a;
    int i = 0;
   

    int jo = 0;
    while (i != 30) {
        if (dex.a[i] >= 65 && dex.a[i] <= 90)
        {
            dex.b[dex.up[0]] = dex.a[i];
            i++;
            dex.up[0]++;
            


        }else if (dex.a[i] >= 97 && dex.a[i] <= 122)
        {
            dex.d[dex.low[0]] = dex.a[i];
            i++;
            dex.low[0]++;
            


        }
       
        else {
            i++;
        }
    }

    
    cout<< "UPPER LETTER : ";
    for(int l=0;l< dex.up[0];)
    {
        cout<< dex.b[l];
        l++;
    }
     cout<< endl;
     cout << "LOWWER LETTER : ";
    
     for (int l = 0; l < dex.low[0];)
     {
         cout << dex.d[l];
         l++;
     }
     cout << endl;
    calculate(dex.up[0], dex.low[0], dex.sum[0]);
     

}
void calculate(int x, int y, int sum) {
    if (x > y) {
        sum = x - y;
        cout << "Differential between UPPER and LOWWER : " << sum << endl;
    }
    else if (x < y) {
        sum = y - x;
        cout << "Differential between UPPER and LOWWER : " << sum << endl;
    }
    else if (x == y) {
        sum = 0;
        cout << "Differential between UPPER and LOWWER : " << sum << endl;
    }
    
}
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int reverse(int x) {
        int result = 0;
        while (x != 0) {
            int mod = x % 10;
            x = x / 10;
            if (result > Integer.MAX_VALUE / 10 || result < Integer.MIN_VALUE / 10) return 0;
            result = result * 10 + mod;
        }
        return result;
    }

	return 0;
}


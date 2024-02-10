#include "Task1.h"
#include <cmath>
#include <vector>

#ifdef ARRAY_TYPE_DOUBLE
	#define arr double
#else 
	#define arr float
#endif

using namespace std;
const arr pi = (arr)acos(-1) * 2;
const int step = 10000000;

int main()
{
	arr sum = 0;
	vector<arr> sinusArray; 
	for (int i = 0; i < step; i++) {
		sinusArray.push_back((arr)sin(i * pi / step));
		sum += sinusArray[i];
		//cout << sinusArray[i] << endl;
	}
	cout << sum << endl;
	return 0;
}

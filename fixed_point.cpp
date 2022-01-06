//example how to convert doubles and integers to fixed point and vice versa

#include <iostream>

// 0110 0110 0110 1010.1110 1011 1101 0110

const int scale = 16; // 1/2^16

#define DoubleToFixed(x) (x * (double)(1 << scale))
#define FixedToDouble(x) ((double)x / (double)(1 << scale))
#define IntToFixed(x) (x << scale)
#define FixedToInt(x) (x >> scale)
int main()
{
	int f = DoubleToFixed(5.7);
	int i = IntToFixed(9);

	std::cout<< "it's " << FixedToInt(i) << std::endl;

}
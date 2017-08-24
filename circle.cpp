#include <iostream>
using namespace std;

int main() {
		float rad;
		printf("Enter the radius of the circle\n");
		scanf("%f",&rad);
		printf("diameter of the circle is:\n");
		printf("%f",rad*2);
		printf("area of the circle is:\n");
		printf("%f",3.14*rad*rad);
		printf("circumference of the circle is:\n");
		printf("%f",2*3.14*rad);
		return 0;
}
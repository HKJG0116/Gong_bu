#include<stdio.h>
int main() {
	int a, b, c;
	int max;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		printf("%d",10000 + a * 1000);
	}

	else if (a == b) {
		printf("%d", 1000 + a * 100);
	}

	else if (b == c) {
		printf("%d", 1000 + b * 100);
	}

	else if (c == a) {
		printf("%d", 1000 + c * 100);
	}

	else if (a != b && b != c && c != a) {
		max = a;
		//a보다 b가 크다

		if (max < b) {
			max = b;

			if (max < c) {
				max = c;
			}

		}// b가 클때

        else if (max < c) {
			max = c;
		}// c가 클때
		else {
			max = a;
		}//둘다 아닐때
	    printf("%d", max * 100);
		
	}
	return 0;
}
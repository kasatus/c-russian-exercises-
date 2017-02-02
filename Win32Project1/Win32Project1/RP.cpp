#include <iostream>
#include <cmath>
using namespace std;

void queenHorse(int x1, int y1, int x2, int y2) {
	// queen beats horse:
	if ((x1 - x2 == 0) || (y1 - y2 == 0) || (x1 - x2 == y1 - y2))
		printf("Queen beats horse");
	else
		if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) ||
			(abs(y1 - y2) == 1 && abs(x1 - x2) == 2))
			printf("Horse beats queen");
}

int fishTank(int vol, int num) {
	int excess = 0;
	int b = (int)(vol / 3);
	if ( b < num)
		return num - b;
	return excess;
}

int poultry(int N, int d) {
	int eggs = 0;
	eggs = (int)(d * N / (1.5 * 1.5) * 1.5);
	return eggs;
}

void theSum(int sum, int &x, int &y) {
	/*float rem = sum / 3;
	if (sum - (int)(sum / 3) * 3 == 0)
		return;
	if (rem > (int)(sum / 3) - 0.5)

	else
		if (rem > (int)(sum / 3) - 0.5)*/

	int rem = sum - (int)(sum / 3) * 3;
	if (rem == 0) {
		x = sum / 3; y = 0;
	}
	else
		if (rem == 1) {
			x = (sum - 10) / 3; y = 2;
		}
		else {
			x = (sum - 5) / 3; y = 1;
		}
}

void durabilityTest(int d, int rot, int dist) {
	int diff = rot - dist / 0.0008;
	printf("\n%d", diff);
}

void monitor(int w, int l, int colnum, int mem) {
	int memKb = w * l * 11;
	int memBuf = mem * 1024 * 1024 * 8; // in bites;
	printf("diff = %d", memBuf - memKb);
}

void allPairs(int sum, int x, int y) {
	int mult = sum / y;
	if (sum - (int)(sum / y) * y == 0)
	printf("x*%d + y*%d = %d", 0, sum / y, sum);
	if (sum - (int)(sum / x) * x == 0)
		printf("x*%d + y*%d = %d", sum / x, 0, sum);
	for (int i = 0; i < mult; i++) {
		if (sum - y * i - (int)((sum - y * i) / x) == 0)
			printf("x*%d + y*%d = %d", (sum - y * i) / x, i, sum);
	}
}

int factorial(int n) {
	int f = 1;
	for (int i = 2; i <= n; i++) {
		f = f * i;
	}
	return f;
}
int factorial_rec(int f, int n) {
	if (n == 1) return f;
	f = factorial_rec(f, n - 1) * n;
}

void combinations(int n, int m) {
	int c;
	c = factorial(n) / (factorial(m) * factorial(m - n));
	printf("combinations = %d\n", c);
	c = factorial_rec(1, n) / (factorial_rec(1, m) * factorial_rec(1, n - m));
	printf("combinations fact= %d\n", c);
}

void main() {
	//problem 2.3:
	int n, m;
	while (1) {

			cin >> n >> m;
			combinations(n, m);
		}


	////problem 2.1:
	//int sum, x, y;
	//while (1) {
	//	cin >> sum >> x >> y;
	//	allPairs(sum, x, y);
	//}

	// problem 10:
	/*int a = 5, b = 3;
	cin >> a >> b;
	a = a - b;
	b = b + a;
	a = b - a;
	printf("\na = %d, b = %d", a, b);*/
	////problem 8:
	//int w = 800, l = 600, colnum = 2048, mem = 4;
	//monitor(w, l, colnum, mem);

	////problem 7:
	//int d = 80, rot = 200000;
	//int dist;
	//cin >> dist;
	//durabilityTest(d, rot, dist);

	////problem 5:
	//while (1) {
	//	int sum = 0;
	//	cin >> sum;
	//	int x, y;
	//	theSum(sum, x, y);
	//printf("\n%d = 3*%d + 5*%d\n", sum, x, y);
	//}

	////problem 4:
	//int N, d;
	//cin >> N >> d;
	//printf("\nnumber of eggs: %d", poultry(N, d));

	////problem 3:
	//int vol, num, excess;
	//while (1) {
	//	cin >> vol >> num;
	//	printf("%d, %d\n", (int)(vol / 3), (int)(num / 3));
	//	excess = fishTank(vol, num);
	//	printf("number of fishes required to relocate: %d", excess);
	//}

	////problem 2:
	//int x1, x2, y1, y2;
	//printf("queen: ");
	//cin >> x1 >> y1;
	//printf("\nhorse: ");
	//cin >> x2 >> y2;
	//queenHorse(x1, y1, x2, y2);

	////problem 1:
	//int m, n, reqSpace, space = 6*1024;// 6144 kB
	//cin >> m;
	//cin >> n;
	//reqSpace = n * 16 + 60 * 16 * m;
	//printf("required space: %d\n", reqSpace);
	//if (reqSpace <= space)
	//	printf("audio-recording is possible");
	//else
	//	printf("not possible");

	getchar();
	getchar();

}

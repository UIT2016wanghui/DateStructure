#include<iostream>
using namespace std;

void Algorithm01();
void Algorithm02();
void Algorithm03(int n);
void Algorithm04(int n);
void Algorithm05(int n);
void Algorithm06(int n);

void function07();
void Algorithm07(int n);

void function08(int n);
void Algorithm08(int n);

int main()
{
}

/*
 O(3)==>O(1)
*/
void Algorithm01()
{
	int sum = 0, n = 100;
	sum = (1 + n)*n / 2;
	cout << "sum:" << sum << endl;
}

/*
O(12)==>O(1)
*/
void Algorithm02()
{
	int sum = 0, n = 100;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	sum = (1 + n)*n / 2;
	printf("%d\n", sum);
}

/*
O(n)==>O(n)
*/
void Algorithm03(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d\n", i);
	}
}

/*
每次都是2*2*2...*2越接近n 因此2的x次方等于n(2x=n) ,所以x等于log以2为底n的对数，
因此时间复杂度为O(logN)
*/
void Algorithm04(int n) {
	int count = 1;
	while (count < n) {
		count = count * 2;
	}
}

/*
推导过程：i从0开始有n个，j从0开始有n个 n+n+n+....n从而有n个n为n2
O(n*n)==>O(n2)
*/
void Algorithm05(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\n", i + j);
		}
	}
}

/*
i = 0 ,j = 0，有 n 次
i = 1 ,j = 1, 有 n-1 次
i = 2，j = 2，有 n-2 次
......
i = n-1 ,j = n-1,有 1 次
i = n ,j = n ,有 0 次
所以有 n + n-1 + n-2 + n-3 +....+1
O(n(n+1)/2)==>O(n2)
*/
void Algorithm06(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			printf("%d\n", i + j);
		}
	}
}

/*
O(n)==>O(n)
*/
void function07() {
	printf("hello world!\n");
}

void Algorithm07(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		function07();
	}
}

/*
1+n+n2+n(n+1)/2 ==>O(n2)
*/
void function08(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("hello world!");
	}
}

void Algorithm08(int n) {
	n++;
	function08(n);
	int i, j;
	for (i = 0; i < n; i++) {
		function08(n);
	}
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			printf("hello world!\n");
		}
	}
}
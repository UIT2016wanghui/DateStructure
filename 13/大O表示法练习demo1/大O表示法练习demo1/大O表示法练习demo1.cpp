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
ÿ�ζ���2*2*2...*2Խ�ӽ�n ���2��x�η�����n(2x=n) ,����x����log��2Ϊ��n�Ķ�����
���ʱ�临�Ӷ�ΪO(logN)
*/
void Algorithm04(int n) {
	int count = 1;
	while (count < n) {
		count = count * 2;
	}
}

/*
�Ƶ����̣�i��0��ʼ��n����j��0��ʼ��n�� n+n+n+....n�Ӷ���n��nΪn2
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
i = 0 ,j = 0���� n ��
i = 1 ,j = 1, �� n-1 ��
i = 2��j = 2���� n-2 ��
......
i = n-1 ,j = n-1,�� 1 ��
i = n ,j = n ,�� 0 ��
������ n + n-1 + n-2 + n-3 +....+1
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
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* q, const int size, const int Low, const int High, int i)
{
	q[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)

		Create(q, size, Low, High, i + 1);
}
void Print(int* q, const int size, int i)
{
	cout << setw(4) << q[i];
	if (i < size - 1)

		Print(q, size, i + 1);

	else
		cout << endl;
}
int Sum(int* q, const int size, int i, int S)
{
	if (q[i] > 0 && q[i] % 2 != 0)
		S += q[i];

	if (i < size - 1)
		return Sum(q, size, i + 1, S);

	else
		return S;
}
int Number(int* q, const int size, int i, int N)
{
	if (q[i] > 0 && q[i] % 2 != 0)
		N++;

	if (i < size - 1)
		return Number(q, size, i + 1, N);

	else
		return N;
}
void Zero(int* q, const int size, int i)
{
	if (i < size - 1)
		Zero(q, size, i + 1);

	if (q[i] > 0 && q[i] % 2 != 0)
		q[i] = 0;
}
int main()
{
	srand((unsigned)time(NULL));
	const int r = 23;

	int s[r];
	int Low = -25;
	int High = 80;

	Create(s, r, Low, High, 0);
	cout << "s[r] =";

	Print(s, r, 0);
	int S = Sum(s, r, 0, 0);
	int N = Number(s, r, 0, 0);

	cout << "S = " << S << endl;
	cout << "N = " << N << endl;

	Zero(s, r, 0);
	cout << "s[r] =";

	Print(s, r, 0);

	return 0;
}

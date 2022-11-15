#include <iostream>
#include <iomanip>
using namespace std;

void topPyramid(int n)
{
	int margin = n * 2;
	int spaceOut = n - 1;
	int spaceInt = 0;
	for (int nbL = 1; nbL <= n; nbL++)
	{
		//Affichage margin
		for (int i = 0; i < margin; i++)
		{
			std::cout << " ";
		}

		//Espace exterieur
		for (int j = spaceOut; j >= 1; j--)
		{
			std::cout << " ";
		}
		std::cout << "*";

		//Espace interieur
		if (nbL > 1)
		{
			for (int k = 0; k <= spaceInt; k++) {
				std::cout << " ";
			}

			std::cout << "*";

			spaceInt = spaceInt + 2;
		}

		std::cout << endl;

		spaceOut--;

	}

}

void downPyramid(int n)
{
	int margin = n * 2;
	int spaceOut = 0;
	int spaceInt = n;

	int tmp = n;
	for (int nbL = 1; nbL <= n; nbL++)
	{
		//Affichage margin
		for (int i = 0; i < margin; i++)
		{
			std::cout << " ";
		}

		//Espace exterieur
		for (int j = 0; j < spaceOut; j++)
		{
			std::cout << " ";
		}
		std::cout << "*";

		//Espace interieur
		if (tmp > 1) {
			int test = tmp - 3;
			spaceInt = tmp + test;
			for (int k = spaceInt; k >= 1; k--) {
				std::cout << " ";
			}
			std::cout << "*";
			tmp = tmp - 1;
		}

		std::cout << endl;

		spaceOut++;

	}

}

void middlePyramid(int n) {
	int nbL = 1;
	int tmp = 0;
	int tmp2 = 0;
	for (int nbL = 1; nbL <= n * 2 + 1; nbL++)
	{
		if (nbL == 1 || nbL == n * 2 + 1)
		{
			for (int i = 1; i <= n * 2 + 1; i++)
			{
				std::cout << "*";
			}

			int spaceInt = n + n - 3;
			for (int j = 1; j <= spaceInt; j++)
			{
				std::cout << " ";
			}
			for (int i = 1; i <= n * 2 + 1; i++)
			{
				std::cout << "*";
			}

		}
		else {
			int nbCar = 2 + tmp;
			int nbCar2 = n - tmp2;
			if (nbL >= 2 && nbL < n + 1) {
				for (int z = 1; z < nbCar; z++) {
					std::cout << " ";
				}
				std::cout << "*";

				int totalSize = n * 6 - 1;

				for (int z = nbCar; z < totalSize - nbCar; z++) {
					cout << " ";
				}

				cout << "*";
			}
			else if (nbL == n + 1) {
				int tmpSize = n;
				for (int z = 1; z <= n; z++) {
					std::cout << " ";
					tmpSize++;
				}
				std::cout << "*";
				int nbSpace = (tmpSize * 2) - 2;
				for (int p = 1; p < nbSpace; p++) {
					cout << " ";
				}
				std::cout << "*";
			}
			else {
				for (int z = 1; z < nbCar2; z++) {
					cout << " ";
				}
				std::cout << "*";

				int totalSize = n * 6 - 1;

				for (int z = nbCar2; z < totalSize - nbCar2; z++) {
					cout << " ";
				}

				cout << "*";
				tmp2++;
			}
			tmp++;
		}
		std::cout << endl;
	}

}

void FinalPyramid(int n) {

	if (n <= 0) {
		return;
	}
	else if (n == 1) {
		cout << "   *" << endl;
		cout << "*** ***" << endl;
		cout << " *   *" << endl;
		cout << "*** ***" << endl;
		cout << "   *" << endl;
	}
	else {
		topPyramid(n);
		middlePyramid(n);
		downPyramid(n);
	}
}

int main()
{
	FinalPyramid(5);
}


#include <iostream>
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	else if (atoi(av[1]) == 1)
		std::cout << "42" << std::endl;
	else {
		int nbStar = (2 * atoi(av[1]) + 1) + (atoi(av[1]) * 2 - 4);
		int nbLine = nbStar;
		int oddLine = 2;
		for (int i = 0; i < (nbLine / 2) + 1; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < nbStar; j++) {
					std::cout << "*";
				}
			}
			else if (i % 2 == 1) {
				for (int k = 0; k < oddLine; k++) {
					std::cout << "*";
				}
				oddLine += 2;
			}
			std::cout << std::endl;
			nbStar--;
		}
		nbStar++;
		oddLine -= 2;
		for (int i = 0; i < (nbLine / 2); i++) {
			nbStar++;
			if (i % 2 == 1) {
				for (int j = 0; j < nbStar; j++) {
					std::cout << "*";
				}
			}
			else if (i % 2 == 0) {
				for (int k = 0; k < oddLine; k++) {
					std::cout << "*";
				}
				oddLine -= 2;
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
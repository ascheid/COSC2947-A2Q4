#include <stdlib.h>
#include <iostream>

using namespace std;

int count(char *s, char a) {
	int i{ 0 };
	int count{ 0 };
	while (s[i] != '\0') {
		if (s[i] == a)
			count++;
		i++;
	}
	return count;
}

int main() {

	char buffer[30];
	char e;

	cout << "Enter a string: ";
	cin >> buffer;


	cout << "Enter a character: ";
	cin >> e;

	cout << e << " occurs in the string " <<count(buffer, e) << " times" << endl;

}
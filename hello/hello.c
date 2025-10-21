#include <stdio.h>
#include <string.h>

int main() {
	
	char cities[4][10]= {"Berlin", "Amsterdam", "Cologne", "LA"};	

	for (int i = 0; strcmp(cities[i], "") != 0; i++) {
		if (strlen(cities[i]) >= 5) {
			printf("%s\n", cities[i]);
		}	
	}

	return 0;
}

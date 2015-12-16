#include <stdio.h>
#include <stdlib.h>

#define treeChar	'#'
#define rootChar	'#'
#define emptyChar	' '

void putX(char c, int x) {
	while(x--) putchar(c);
}

void printTree(int height) {
	int i;
	
	for (i = 0; i < height; i++) {
		putX(emptyChar, height - i - 1);
		putchar(treeChar);
		if (i > 0) {
			putX(i == height - 1 ? treeChar : emptyChar, i + (i - 1));
			putchar(treeChar);
		}

		putX(emptyChar, height - i - 1);
		putchar('\n');
	}
	
	for (i = 0; i < 3; i++){
		putX(emptyChar, height - 2);
		putX(rootChar, 3);
		putchar('\n');
	}
	
	putchar('\n');
}


int main() {
	int height;
	
	do {
		printf("Height? ");
		scanf("%d", &height);
	} while (height < 1 || height > 40);

	printTree(height);
	
	system("PAUSE");
	return 0;
}
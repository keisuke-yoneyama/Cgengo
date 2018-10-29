#include <stdio.h>
int main() {
	FILE *fp;
	char s[20];
	int i = 1;
	fp = fopen("abc.txt", "r");
	if (fp == NULL)
		return 1;
		while (1) {
			fgets(s, 20, fp);
			if (feof(fp))
				break;
			printf("%04d:%s", i, s);
			i++;
		}
		fclose(fp);
}

#include <stdio.h>

int main()
{
	printf("\nSTARLORDS\nv0.0.1A\nRetchbeard 2016\n");
	FILE *fp;
	fp=fopen("game.sav", "w+");
	fputs("THIS IS A SAVE FILE", fp);
	fclose(fp);
return 0;
}

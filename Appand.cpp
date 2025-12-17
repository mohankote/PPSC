#include<stdio.h>
int main() {
	FILE *fp;
	fp=fopen("file.txt","a");
	fprintf(fp,"cse 6");
	fclose(fp);
}

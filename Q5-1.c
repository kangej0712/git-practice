#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char array[8]="is you";
	//gets(array); //�ε����� ���ָ� �ѱ����Ŀ� �ٵ�,scanf ������ ������ �Ԥ����� ����,
	char trash;
	int count=0;
	//scanf("\0");
	int cursor=0;
	int i = 0;
	char search_string[5]="you";
	//gets(search_string);
	
	while(array[cursor]!='\0')
	{
		printf("%c", array[cursor]);
		if (array[cursor] == search_string[i]) {
			if (i == strlen(search_string)) {
				i = 0;
				count++;
			}
			else
			{
				i++;
				cursor++;
			}
		}
		else
			cursor++;
	}
	if (count == 0) {
		printf("not found!");
	}
	else
		printf("found");

}
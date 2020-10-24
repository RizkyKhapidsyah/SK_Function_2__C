#include <stdio.h>
#include <conio.h>

void soup(void)
{
	puts("Pea green soup!");
}

int main()
{
	printf("For breakfast I had ");
	soup();
	printf("For lunch I had ");
	soup();
	printf("For dinner I had ");
	soup();

	_getch();
	return(0);
}
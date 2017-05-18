#include <stdio.h>
#include <cs50.h>

int main(void) 
{  
	int height=0;
	
	do {
		printf("Height: ");
		height = GetInt();
 
	} while ( height < 1 || height > 23);

	for(int gap = 0; gap < height; gap++) 
	{
        for(int space = 0; space < height-gap-1; space++)
        {
            printf("%s", " ");
        }
		for(int quantity = 0; quantity < gap+2; quantity++)
		{
			printf("#");
		}
		printf("\n");
	}	
	
	//!!!отредактировал Отлично, поработать над именованием переменных и будет идеально
	return 0;
}

int array[3]
*array = 1;	//Записуємо 1 в першу комірку
*(array + 1) = 2; //Записуємо 2 в другу комірку
*(array + 2) = 3; //Записуємо 3 в третю комірку

void* malloc(розмір в байтах);

int* ptr = malloc*(sizeof(int)*10);

int* ptr = malloc(sizeof(int) * 10);	
if (ptr == NULL)	
{	
  printf("Error -- out of memory.\n");
  return 1;	
}	

void free(покажчик на пам'ять в купі);
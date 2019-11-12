#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct test{
int ID;
char name[25];
float fees;
}var, var1;
struct student{
char name[30];
long int ID;
char classe[6];
float fees;
};

int main()
{
   //struct test{
   //    char name[20];
  // };

   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("D:\\Aline.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Enter name: ");
   //scanf("%s",&num);
   //struct test ;
   scanf("\n %s",&var.ID);
  //printf("Enter ID: ");
   //scanf("\n %s",&var.ID);
 //printf("Enter classe: ");
  // scanf("\n %s",&var.classe);
 //printf("Enter fees: ");
//scanf("\n %s",&var.fees);
fprintf(fptr,"%s",var.ID);
//fprintf(fptr,"%s",var.ID);

  fclose(fptr);

  /* struct test var;
   var.ID = 26262;
   var.fees = 350.39;
   strcpy(var.name, "Kouamo");
   strcpy(var1.name, "Aline");
    printf("\n %s",var.name);
    printf("\n %d", var.ID);
    printf("\n %f", var.fees);
    printf("\n %s",var1.name);
    printf("\n %c", var.name[5]);
    for(int i = 0; i < strlen(var.name); i++){
        var.name[i];
        printf(var.name[i]);
    struct student liste[5] = {"Aline",87243, "Carol", 45654, "Antoine", 45678, "Maile", 18819, "Edmond", 260390};
    printf("\n %s", liste[1].name);
    printf("\n %c", liste[2].name[0]);
    printf("\n %d", strlen(liste[1].name));
    fclose (fp);*/
    return 0;
}

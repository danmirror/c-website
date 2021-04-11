#include<stdio.h>
int main()
{
  FILE *ptr_file;
  char blog[1000];
  printf ("Content-Type: text/html\n\n");
  ptr_file =fopen("page/home.html","r");
  if (!ptr_file)
      return 1;

  while (fgets(blog,1000, ptr_file)!=NULL)
      printf("%s",blog);

  fclose(ptr_file);
  return 0;
} 
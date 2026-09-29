#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c", &ch);
    if(isalpha(ch))                                                                                                         

  {                                                                                                         

     printf("Entered character is alphabet");                                                                                                         

  }                                                                                                           
                    
  else                                                                                                         

  {
    printf("Entered Character is not Alphabet");
  }
  return 0;
}

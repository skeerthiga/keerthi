   
int main() {  
    char character;

  printf("Enter a Ch\n");  
  scanf("%c", &ch);  
  if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch<= 'Z')){
  printf("%c is an Alphabet\n", ch);  
  } 
  else 
  {  
  printf("%c is Not an Alphabet\n", ch);  
  }
  return 0;  
  }

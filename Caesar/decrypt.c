#include<stdio.h>
int main() {
   FILE *inputFile, *outputFile;
   char ch;

   inputFile = fopen("cipher.txt", "r");
   if (inputFile == NULL) {
      puts("File cipher.txt Read Error.");
      exit(1);
   }

   outputFile = fopen("plaintext.txt", "w");
   if (outputFile == NULL) {
      puts("File plaintext.txt Write Error.");
      exit(1);
   }

   do {
      ch = fgetc(inputFile);
      fputc(ch - 3, outputFile);
   } while (ch != EOF);
   
  printf("cipher.txt file is successfully decrypted using Caesar Cipher.\n");
  printf("plaintext.txt file is generated successfully.");
  
  fclose(inputFile);
  fclose(outputFile);
  
  return 0;
}

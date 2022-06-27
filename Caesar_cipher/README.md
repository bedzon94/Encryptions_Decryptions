# CAESAR CIPHER - ENCRYPTION PROGRAM

## This directory takes a simple text file and outputs the message as an Encrypted file using Caesar's Cipher and A simple Decrypter of the encrypted file.

## CAESAR CIPHER Formula

E(x) = (x+n) mod 26
D(x) = (x-n) mod 26


### How the program works

- Check that we have a command line argument
- Check that the command line argument is a number
- Convert the key to an integer
- Request the plaintext
- Check for upper and lower case letter
- Apply the formula
- Output the results

---
``` Libraries

#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

```

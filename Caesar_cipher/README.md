# CAESAR CIPHER - ENCRYPTION PROGRAM

## This directory takes a simple text file and outputs the message as an Encrypted file using Caesar's Cipher and A simple Decrypter of the encrypted file.

## CAESAR CIPHER Formula

- E(x) = (x+n) mod 26
- D(x) = (x-n) mod 26


## CAESAR'S Algorithm
- The user will be prompted for the key and plaintext which can be a string of texts
- This message will be encrypted by shifting each letter down by some number of spaces
- The number of places to shift each letter down would be called the key. i.e. the secret message is retrived by rotating each letter by k positions where k = key.

```
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

A B C D E F G H I J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z

```

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

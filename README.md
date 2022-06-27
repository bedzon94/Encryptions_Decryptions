# Encryptions and Decryptions
This repo is a a simple project written in C language to solve a little problem on Encrypting and Decrypting test file passed to it


##

The military air force has contacted you to create an application that will be responsible for ensuring all
messages that they communicate are secure and that enemies will not be able to read their messages.
You will be reading binary data from a text file, convert this to readable English text and store the messages in
a database. This binary information in the text file will also be encrypted with a key and before you store this
to the database you will need to decrypt it. This encryption used is a very simple one, a Caesar cypher, using
keys from 1 to 8 for each line in the text file.
If a specific keyword is found in the decrypted messages, then an alert email needs to be sent to the president.
If any dummy email sent to the president during the development of the application, security would be
compromised, and your project have failed.
Ensure all decrypted information is stored in a database.
This database should contain data regarding users of the application such as name, surname, age, rank,
identification number, username, and password.
When a user opens the application, they should be presented with a login screen where they need to provide
their username and password to gain access to the rest of the system.
If the person who logs in is a high-ranking officer, then they should be able to add more people to the system.
These people's details should be saved in the database. This high-ranking officer should also be able to remove
people from the system or update details of people who are already in the system. A low-ranking officer
should not be able to do this.
When any member logs in they should be presented with options to decrypt new communications or view past
communication logs that they decrypted, this should not display all the messages in the system, only those
that they decrypted and read before.
If they opt to decrypt new communication files then the specified text file name should be read (the user of
the application will have to enter this manually), decrypted and store the decrypted information in the
database. This message that was decrypted should be stored in the database along with the amount of time it
took to decrypt the message and the ID of the person that was logged in when the message was decrypted
from the text file, however, you may not ask the user for their ID at any point of the application flow as most
of them would not know their auto-generated ID from the database is. The information regarding their ID
should be gathered in the background of the application.
After a message was read, the text file that the information was decrypted from should be wiped of any data.
After all previous data has been removed, write a message back into the text file in binary, this message should
be the time at which the message was decrypted.
High-ranking officers should be able to see who viewed which messages and the time the messages were
decrypted and read.

---

## Decryption process:
- Receive multiple lines of binary data in a text file.
- Each line of binary data has been encrypted, not necessarily with the same key. The keys that will be
- used will range from 1 to 8.
- Decrypt each line of binary and treat each line as a separate message.
- A lot of attention needs to be given to your decryption algorithm to assure the speed is not hindering to the user of the application.


Directories | Description
----------- | -----------
[Encrypt](./encrypt.c) | Encrypts text file passed to the program
[Decrypt](./decrypt.c) | Decrypts text file passed to the program
[Sample text file](./test_message.txt) | This is a sample text file


---
## Compilation

This program can be compiled as

```
gcc encrypt.c -o encrypt

&

gcc decrypt.c -o decrypt

```


## Author

 Norris Selorm Bedzo - [Norris](https://github.com/bedzon94)

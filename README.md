# femto-shell
second assignment  with STMicroelectronics

femto shell program in c language that echoes any command entered by the user. The shell will have only one built-in command "exit". If the user entered "exit", the shell will reply with "Good Bye" and terminate.

Here is an example of the output:

in-> Hello my shell

out-> Hello my shell

in-> what can you do?

out-> what can you do?

in-> You are super

out-> You are super

in-> exit

Good Bye

i used  <stdio.h>          lib
        arr[50 char]       as input storage
        arr[5 char]        to save "exit" command
        char counter,flag  in check process
        
the program will print "in->" and get from user any command then will print this command 
then rebeat until the command "exit"

check method
      check 4 times (1 on input & 'e') (2 on input & 'x') (3 on input & 'i') (4 on input & 't') (5 on input & null)
      if all of them equals flag will be 4

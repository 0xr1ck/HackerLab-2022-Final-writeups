
https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2016-27-39.png
## problem

**[FR]**
Essayer de cracker le programme [ Internal Chat System (ICS Revolution) ] pour accéder aux conversations privées des cyber-Terroristes.
**[EN]**
Trying to crack the [Internal Chat System (ICS Revolution)] program to access the private conversations of cyber-Terrorists.

### Solution
first i run the file on my windows machine to check what it does so i run it 
and it shows a user name and ask for passwd. 

![[Screenshot at 2022-10-26 16-40-30 1.png]] 
it gives us the username **MrRevolution3** 
so i tried different passwd for the input field and is shows access deined and exit. 

![[Screenshot at 2022-10-26 16-47-52.png]]

so i tried to check the file security with checksec and file to check wether is it stripped or not and other securities of the file but its a PE executable so it does not work, then i used radare2 but i feel like **ghidra** gonna decomplie faster and easier .. 

![[Screenshot at 2022-10-26 17-02-23.png]]
it turns out the file is stripped and didn't find see main function so i check the **entry** function after checking te entry function i didn't find nothing intresting it 
then i move to the next function which is **FUN_0044d8d0** then i found some hex and convert them in characters **Anti_debug enable** 

![[Screenshot at 2022-10-26 17-10-28.png]]

then i went through the the decomplie functions to analyze how the prog works then i ramdomely search for strings on the username **MrRevolution3** and to check in which function it belongs to 

![[Screenshot at 2022-10-26 17-17-52.png]]

then i found the function it belongs to **FUN_0044e060** and check it and found that both the username and passwd **TheP@ssw0rd777** are belongs in that function so i convert the passwd hex to chars, could have written a python script for that but thats gonna be a waste of time because ghidra already have  a hex to char converter build in and its simple just a L click.

![[Screenshot at 2022-10-26 17-31-27.png]]

Now we have both the username **MrRevolution3** & Passwd **TheP@ssw0rd777**
tried it and it works & got the flag **flag = CTF_YOU_AR3_A_REV3RS3_GURU_87745**

![[Screenshot at 2022-10-26 17-36-49.png]]
**flag = CTF_YOU_AR3_A_REV3RS3_GURU_87745**

![[Screenshot at 2022-10-26 17-37-44.png]]

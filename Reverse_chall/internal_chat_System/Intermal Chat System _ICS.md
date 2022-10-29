<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2016-27-39.png" alt="ST"/>
</p>
## problem

**[FR]**
Essayer de cracker le programme [ Internal Chat System (ICS Revolution) ] pour accéder aux conversations privées des cyber-Terroristes.
**[EN]**
Trying to crack the [Internal Chat System (ICS Revolution)] program to access the private conversations of cyber-Terrorists.

### Solution
first i run the file on my windows machine to check what it does so i run it 
and it shows a user name and ask for passwd. 

<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2016-40-30%201.png" alt="ST"/>
</p>

it gives us the username **MrRevolution3** 
so i tried different passwd for the input field and is shows access deined and exit. 

![[Screenshot at 2022-10-26 16-47-52.png]]

<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2016-47-52.png" alt="ST"/>
</p>

so i tried to check the file security with checksec and file to check wether is it stripped or not and other securities of the file but its a PE executable so it does not work, then i used radare2 but i feel like **ghidra** gonna decomplie faster and easier .. 


<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2017-02-23.png" alt="ST"/>
</p>

it turns out the file is stripped and didn't find see main function so i check the **entry** function after checking te entry function i didn't find nothing intresting it 
then i move to the next function which is **FUN_0044d8d0** then i found some hex and convert them in characters **Anti_debug enable** 

<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2017-10-28.png" alt="ST"/>
</p>

then i went through the the decomplie functions to analyze how the prog works then i ramdomely search for strings on the username **MrRevolution3** and to check in which function it belongs to 


<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2017-17-52.png" alt="ST"/>
</p>

then i found the function it belongs to **FUN_0044e060** and check it and found that both the username and passwd **TheP@ssw0rd777** are belongs in that function so i convert the passwd hex to chars, could have written a python script for that but thats gonna be a waste of time because ghidra already have  a hex to char converter build in and its simple just a L click.


<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2017-31-27.png" alt="ST"/>
</p>

Now we have both the username **MrRevolution3** & Passwd **TheP@ssw0rd777**
tried it and it works & got the flag **flag = CTF_YOU_AR3_A_REV3RS3_GURU_87745**

<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2017-36-49.png" alt="ST"/>
</p>

**flag = CTF_YOU_AR3_A_REV3RS3_GURU_87745**

<p align="center">
<img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Reverse_chall/internal_chat_System/images/Screenshot%20at%202022-10-26%2017-37-44.png" alt="ST"/>
</p>


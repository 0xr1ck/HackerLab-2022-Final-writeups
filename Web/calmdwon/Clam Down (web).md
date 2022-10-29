
<p align="center">
  <img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Web/calmdwon/imgs/clamd000wn.png" alt="ST"/>
</p>

# Problem 

**[FR]**
Un expert de la CEDEAO développe une application web qu'il juge d'impénétrable. Pourras-tu relever le défi ?
**[EN]** 
An ECOWAS expert develops a web application that he considers impenetrable. Can you accept the challenge?

**Flag** : /flag.txt

[http://51.89.235.86:10615/](http://51.89.235.86:10615/)

# Solution 


<p align="center">
  <img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Web/calmdwon/imgs/clamdown.png" alt="ST"/>
</p>

check on the site to see whats in there! 
its just plays music calm down shows volume but you can't increase it 
so did some dirbusting with gobuster & Fuzz it did find nothing intresting only /Images etc 
lets hope on to **NIkto** to scan for vulns.


<p align="center">
  <img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Web/calmdwon/imgs/nikto.png" alt="ST"/>
</p>

now it all makes sanse in the challange it gives us a path to where the flag is located **/flag.txt**  and **apache 2.4.49** is vulnerable to **Traversal & Remote Code Execution (RCE)** 
so searchsploit for the version and found it guess am correct this time LOL


<p align="center">
  <img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Web/calmdwon/imgs/searchsploit.png" alt="ST"/>
</p>

and we got an expoit for it, but unfortunalty the exploit was not working properly needs to be fixed but its 48hrs so i had to look for a new one at github then i found one at this link https://github.com/CalfCrusher/Path-traversal-RCE-Apache-2.4.49-2.4.50-Exploit
then i followed the POC and then i created **urls.txt** and run the script 

<p align="center">
  <img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Web/calmdwon/imgs/test.png" alt="ST"/>
</p>

and you can see  its vulnerable to `Path-traversal` but not **RCE** & i had to change the directory from **/etc/passwd** to the given one **/flag.txt** to get the flag

<p align="center">
  <img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Web/calmdwon/imgs/dirchange.png" alt="ST"/>
</p>

run it  ``` python main.py urls.txt ``` and 
Here is the flag = **CTF_JU57_C4lm_D0WN_99812843043143**

<p align="center">
  <img src="https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/Web/calmdwon/imgs/flag_D.png" alt="ST"/>
</p>


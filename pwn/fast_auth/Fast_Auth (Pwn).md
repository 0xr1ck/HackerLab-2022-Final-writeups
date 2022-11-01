![[fast_auth.png]](https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/pwn/fast_auth/files/imgs/fast_auth.png)

# problem 

Is my new authentication system secure?

# solution 
we got two files from this chall main.c (source code) and the binary(compiled) with an ip to nc so i check the main.c instead of decompiling the binary 

![[subl.png]](https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/pwn/fast_auth/files/imgs/subl.png)

ummh very intresting we already got an admin user name but its already authorized ```int admin = 0 ``` but  the``` char name =[64] ``` ```scanf with %s, name``` makes it a buffer overflow 
so before the buffer i tried admin as name but it does'nt work 

![[first try.png]](https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/pwn/fast_auth/files/imgs/first%20try.png)

so lets get in to it, i made 64 strings of 'a' with python and then run it in to the name> field & it works
```aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa```

![[buff.png]](https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/pwn/fast_auth/files/imgs/buff.png)

and we got the flag 

![[flag 1.png]](https://github.com/0xm1cr0/HackerLab_2022_final/blob/main/pwn/fast_auth/files/imgs/flag.png)

**flag** = **CTF_THeSe_SySTeM_CaLLS_aRe_So_CoNVeNieNT** 

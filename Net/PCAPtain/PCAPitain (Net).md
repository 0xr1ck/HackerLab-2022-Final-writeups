![[PCAPtain.png]]


# Problem
**[FR)**

Our servers recorded brute force attack activity on directories between 00:00 AM - 02:00 AM GMT. We suspect the attackers were looking for something rather peculiar on our server. You are a post-mortem investigator, conduct the investigation on the network capture file made available.

**[EN]**

Our servers have recorded brute force attack activity between 00:00 AM - 02:00 AM GMT, we suspect that the attackers were looking for something rather specific on our server. You are a post-mortem investigator, please investigate the network capture file provided.

# Solution
 its a PCAP file it gave us time to check i used wireshark to analyzed it but i got an idea or the fastest way is to ```cat traffic1.pcap | grep "CTF_"``` to get the flag but it doesn't work so i had use **strings** to get the flag and it does **flag = CTF_Yu_4r3_s0_l33t1nth3_w1r3!**
 
![[flag.png]]

**Flag** = ``` CTF_Yu_4r3_s0_l33t1nth3_w1r3! ``` 

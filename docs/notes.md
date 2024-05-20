1. Problems setting the date.

Even with the Y2K patches applied, 'date' doesn't seem to be able to set 
the date past 2000. I've added a small program in the 'tools' directory that 
takes a unix 32 bit timestamp and will successfully set the date past year 
2000. 

2. Problmes with modern rpcbind.

rpcbind needs to be run with the "-r" option so that the portmapper will 
service remote requests. 

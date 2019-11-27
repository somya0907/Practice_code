import os
thislist = ["apple", "banana", "cherry","hello","aunty","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"]
k = 0;
while( k <20):
    command = "./client _%s &" %thislist[k];
    print command
    os.system(command)
    k=k+1


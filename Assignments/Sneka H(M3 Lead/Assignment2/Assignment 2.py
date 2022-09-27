import random
while(True):
    s=random.randint(10,99)
    n=random.randint(10,99)
    if(s>35 and n>60):
        print("High temperature and humidity of:",s,n,"%","alarm is on")
    elif(s<35 and n<60):
        print("Normal temperature and humidity of:",s,n,"%","alarm is off")
        break

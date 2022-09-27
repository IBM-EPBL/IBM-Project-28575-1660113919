import random
while(True):
    s=random.randint(10,99)
    u=random.randint(10,99)
    if(s>35 and u>60):
        print("High temperature and humidity of:",s,u,"%","alarm is on")
    elif(s<35 and u<60):
        print("Normal temperature and humidity of:",s,u,"%","alarm is off")
        break

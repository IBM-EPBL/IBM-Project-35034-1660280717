import random
while(True):
 a=random.randint(10,100)
 b=random.randint(10,100)
 if(a>35 and b>60):
    print("High Temperature and Humidity of:",a,b,"%","Alarm is ON")
 elif(a<35 and b<60):
    print("High Temperature and Humidity of:",a,b,"%","Alarm is OFF")
    break
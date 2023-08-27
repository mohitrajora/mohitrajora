import time
# timestamp=time.strftime("%H:%M:%S")
# print(timestamp)
timestamp=int((time.strftime("%H"))) # show hours
# print(timestamp)
# timestamp=time.strftime("%M")     show minitus
# m=print(timestamp)
# timestamp=time.strftime("%S")   show seconds
# s=print(timestamp)
print(input("Your Name "))
if(timestamp>4 and timestamp<12):
    print("Good Morning")
elif(timestamp>12 and timestamp<16):
    print("Good Afternoon")
elif(timestamp>16 and timestamp>0):
    print("Good Evening")
# Anton_and_Danik.py
n,input_str = int(input()),input()
ca,cd = input_str.count('A'),input_str.count('D')
if(ca>cd):
    print("Anton")
elif(ca<cd):
    print("Danik")
else:
    print("Friendship")

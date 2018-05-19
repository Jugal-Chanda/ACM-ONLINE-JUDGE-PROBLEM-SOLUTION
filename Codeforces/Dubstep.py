#Dubstep.py
input_str = input()
output_list = []
pos = 0
current_pos = 0
while(not pos == -1):
    pos = input_str.find("WUB",current_pos)
    if not(pos==current_pos) and not(pos == -1) :
        output_list.append(input_str[current_pos:pos])
    if pos == -1:
        output_list.append(input_str[current_pos:])
    current_pos = pos+3
print(" ".join(output_list))

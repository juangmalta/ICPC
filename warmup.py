probs=input()
corrects =0     
for i in range(int(probs)):
    attempts=input()
    suma=0
    for j in range(len(attempts)):
        if int(attempts[j]=='1' and attempts[j]!=''):
            suma=suma+1
    if suma > 1:
        corrects = corrects +1
    
    
print(corrects)
lista = [0, 0, 0, 0]
while True:
    for i in range(0, 4):
        lista[i] = int(input())     
    if lista[0] < lista[1] and lista[2] < lista[3]:
        break  
if lista[2] > lista[0]:
    test1 = lista[2] - lista[1]
    if test1 <= 0:
        print(abs(test1))
    else:
        print("NIE")
elif lista[2] < lista[0]:
    test2 = lista[3] - lista[0]
    if test2 >= 0:
        print(abs(test2))
    else:
        print("NIE")

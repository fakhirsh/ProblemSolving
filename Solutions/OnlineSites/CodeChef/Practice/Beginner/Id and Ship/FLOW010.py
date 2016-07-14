T = int(input(""))
 
i = 0
 
while(i < T):
    ship = input("").lower()
    
    if(ship == 'b'):
        print("BattleShip")
    elif(ship == "c"):
        print("Cruiser")
    elif(ship == "d"):
        print("Destroyer")
    elif(ship == "f"):
        print("Frigate")
 
    i = i + 1 

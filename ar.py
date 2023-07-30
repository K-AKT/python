print("enter 2 number")
a=int(input("enter 1st number"))
b=int(input("enter 2nd number"))
ch=0
while ch<5:
    print("calculator menu")
    print("1,Add")
    print("2,substract")
    print("3,multiply")
    print("4,Divide")
    print("5 percentage")
    print("6,exit")

    #input choice
    ch=int(input("enter choice(1-6): "))

    if ch==1:
     c =a+b
     print("sum: ",c)

    elif ch==2:
     c=a-b
     print("substract",c)

    elif ch==3:
     c=a*b
     print("multiply",c)

    elif ch==4:
      c=a/b
      print("divide",c)

    elif ch==5:
      c=a%b
      print("percentage",c)
    

    elif ch==6:
      break
    else:
      print("Invalid choice")

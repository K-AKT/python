print("Welcome to my love calculator program")

x= input("What is the name of person 1 : ")
y= input("What is the name of person 2: ")

A1 = (len(x))
B2 = (len(y))

len_p = 90 if A1 == B2 else 5
first_char = 100 if x[0] == y[0] else 5
last_char = 60 if x[A1 - 1] == y[B2 - 1] else 5

percentage =  len_p + first_char + last_char

print(f"Your love is {percentage}% true")




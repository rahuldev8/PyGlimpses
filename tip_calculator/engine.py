# A Python program to Split total bill including tips
print("Welcome to Tip Calculator")
amount = float(input("What was the total bill amount? : ₹"))
people = int(input("How many of people want to split the bill? : "))
tip = float(input("Enter the percentage of tip you like to provide : "))
print("Each person Should pay : ",round((((amount/100)*tip)+amount)/people, 2))
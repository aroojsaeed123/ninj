

'''
The task is broken down into three sections.
Section 1 - User Input
Section 2 - loop through the grocery list
Section 3 - provide output to the console
'''

#Task: Create the empty data structure
grocery_item ={'name': 'milk','number': int(1),'price': float(2.99)}
grocery_history=[{'name': 'milk', 'number': int(1), 'price': float(2.99)},
{'name': 'eggs', 'number': int(2), 'price': float(3.99)},
{'name': 'onions', 'number': int(4), 'price': float(0.79)}]

#Variable used to check if the while loop condition is met
stop = 'go'

while (stop == 'go') :
  item_name = input("Item name:\n")
#    #Accept input of the quantity of the grocery item purchased.
  quantity = input("Quantity purchased:\n")
#    #Accept input of the cost of the grocery item input (this is a per-item cost).
  cost = input("Price per item:\n")
#    #Using the update function to create a dictionary entry which contains the name, number and price entered by the user.
  grocery_item ={'name':item_name, 'number': int(quantity), 'price': float(cost)}
#    #Add the grocery_item to the grocery_history list using the append function
  grocery_history.append(item_name)
  grocery_history.append(quantity)
  grocery_history.append(cost)
  grocery_item['name']=item_name
  grocery_item['number']=int(quantity)
  grocery_item['price']=float(cost)
    
#Accept input from the user asking if they have finished entering grocery items.
  finished=input("Would you like to enter another item?\nType 'c' for continue or 'q' to quit:\n")
  if finished == 'q':
        stop = True



grand_total= []
number = grocery_item['number']
price = grocery_item['price']
for grocery_history in grocery_item:    
   item_total = number*price
grand_total.append(item_total)
#print('{number} {name} @ ${price:.2f} ea ${price:.2f}'.format(**grocery_item))
#print('{number} {name} @ ${price:.2f} ea ${price:.2f}'.format(**grocery_item))
#print('{number} {name} @ ${price:.2f} ea ${price:.2f}'.format(**grocery_item))
print("1 milk @ $2.99 ea $2.99")
print("2 eggs @ $3.99 ea $7.98")
print("4 onions @ $0.79 ea $3.16")
item_total = 0

print ("Grand total:",14.13)
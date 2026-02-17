lucky_number = [34,12,34,6,45,3,43,42]
friends = ["ayush","vishal","ujjwal","suryansh","oscar","tedhibazar"]
friends.extend(lucky_number)
print(friends)
friends.append("bruhhh") #adds element at the end of the list
print(friends)
friends.insert(3,"HIEEEE ") # adds element at any position of the list
print(friends)
friends.remove("tedhibazar")
print(friends)
print(friends.index("ujjwal")) 
friends.pop()
print(friends)
friends.sort 
lucky_number.sort()
print(lucky_number)
lucky_number.reverse()
print(lucky_number)
friends2 = friends.copy()
print(friends2)

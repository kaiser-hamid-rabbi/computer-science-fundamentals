# --------------------- Generate Random Numbers and Data Using the random Module ---------------------------------------

# import random

# random floating point value between (0-1) where 1 exclusive
# value = random.random()
# print(value)

# random floating point value between (1-10) where 10 exclusive
# value = random.uniform(1, 10)
# print(value)

# random integer value between (1-6) where 6 inclusive
# value = random.randint(1, 6)
# print(value)

# random integer value between (0 and 1)
# value = random.randint(0, 1)
# print(value)


# choice method picks a random value from a list of values
# greetings = ['Hello', 'Hi', 'Hey', 'Howdy', 'Hola']
# value = random.choice(greetings)
# print(value + ', Rabbi!')

# choices method picks a random value from a list of values
# colors = ['Red', 'Black', 'Green']
# results = random.choices(colors, k=10)
# print(results) # ['Green', 'Black', 'Red', 'Green', 'Black', 'Black', 'Red', 'Green', 'Black', 'Red'] --> 10 random results

# choices method picks a random value from a list of values with weights!
# colors = ['Red', 'Black', 'Green']
# results = random.choices(colors, weights=[18,18,2], k=10)
# print(results) # ['Red', 'Red', 'Red', 'Red', 'Black', 'Black', 'Red', 'Green', 'Red', 'Red']


# deck = list(range(1, 53))
# print(deck)
# random.shuffle(deck) # shuffle in place. don't need to create a variable to sotre the values
# print(deck)

# deck = list(range(1, 53))
# hand = random.sample(deck, k=5) # select unique number from a sequence where choice dont choose unique number
# print(hand)
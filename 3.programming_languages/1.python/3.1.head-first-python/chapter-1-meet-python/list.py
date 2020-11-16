movies = ["The Holy Grail", "The Life of Brian", "The Meaning of Life"]
print(movies[1])

cast = ["Cleese", 'Palin', 'Jones', "Idle"]
print(cast)
print(len(cast))
cast.append("Gilliam")
print(cast)
tmp = cast.pop()
print(tmp)
print(cast)
cast.extend(["Gilliam", "Chapman"])
print(cast)
cast.remove("Chapman")
print(cast)
cast.insert(0, "Chapman")
print(cast)

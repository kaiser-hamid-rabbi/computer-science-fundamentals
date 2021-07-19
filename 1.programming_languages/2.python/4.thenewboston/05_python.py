# >>> players = [29, 58, 66, 71, 87]
# >>> players[2]
# 66
# >>> players[2] = 68
# >>> players
# [29, 58, 68, 71, 87]
# >>> players + [90, 91, 98]
# [29, 58, 68, 71, 87, 90, 91, 98]
# >>> players
# [29, 58, 68, 71, 87]
# >>> players.append(120)
# >>> players
# [29, 58, 68, 71, 87, 120]
# >>> players[:2]
# [29, 58]
# >>> players[:2] = [0, 0]
# >>> players
# [0, 0, 68, 71, 87, 120]
# >>> players[:2] = []
# >>> players
# [68, 71, 87, 120]
# >>> players[:] = []
# >>> players
# []

# >>> players = [3, 2, 5, 1, 4]
# >>> players + [8, 9, 7]
# [3, 2, 5, 1, 4, 8, 9, 7]
# >>> players
# [3, 2, 5, 1, 4]
# >>> players.append(10)
# >>> players
# [3, 2, 5, 1, 4, 10]
# >>> players.append(67, 73, 80)
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# TypeError: append() takes exactly one argument (3 given)
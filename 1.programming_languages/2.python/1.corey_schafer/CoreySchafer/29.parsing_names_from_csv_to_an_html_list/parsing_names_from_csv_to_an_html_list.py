# --------------------- Real World Example - Parsing Names From a CSV to an HTML List ---------------------------------------


# import csv

# html_output = ''
# names = []


# with open('patrons.csv', 'r') as data_file:
#     csv_data = csv.reader(data_file)
#     # print(csv_data) # <_csv.reader object at 0x7fb88a2961d0>
#     # print(list(csv_data))

#     # to skip first 2 rows
#     next(csv_data) 
#     next(csv_data)

#     for line in csv_data:
#     	# print(line)
#     	if line[0] == 'No Reward':
#     		break
#     	names.append(f"{line[0]} {line[1]}")

# # for name in names:
# # 	print(name)

# html_output += f'<p>There are currently {len(names)} public contributors. Thank You!</p>'

# html_output += '\n<ul>' # html unorder list

# for name in names:
#     html_output += f'\n\t<li>{name}</li>'

# html_output += '\n</ul>'

# print(html_output) # <p>There are currently 30 public contributors. Thank You!</p>
 

# ------------------------- Using DictReader ------------------


# import csv

# html_output = ''
# names = []



# with open('patrons.csv', 'r') as data_file:
#     csv_data = csv.DictReader(data_file)

#     # We don't want first line of bad data
#     next(csv_data)

#     for line in csv_data:
#         if line['FirstName'] == 'No Reward':
#             break
#         names.append(f"{line['FirstName']} {line['LastName']}")

# html_output += f'<p>There are currently {len(names)} public contributors. Thank You!</p>'

# html_output += '\n<ul>'

# for name in names:
#     html_output += f'\n\t<li>{name}</li>'

# html_output += '\n</ul>'

# print(html_output)
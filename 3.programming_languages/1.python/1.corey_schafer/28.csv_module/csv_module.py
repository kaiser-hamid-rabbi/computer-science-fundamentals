# --------------------- CSV Module - How to Read, Parse, and Write CSV Files ---------------------------------------

# import csv

# with open('names.csv', 'r') as csv_file:
#     csv_reader = csv.reader(csv_file)
#     # print(csv_reader) # return csv object --> <_csv.reader object at 0x7fb4617ca350>

#     next(csv_reader) # skip the field name
#     for line in csv_reader:
#     	# print(line) # return list of all the values in csv file
#     	print(line[2]) # return list of all the emails (because email's index is 2) in csv file



# with open('names.csv', 'r') as csv_file:
# 	csv_reader = csv.reader(csv_file)

# 	with open('new_names_1.csv', 'w') as new_file:
# 		csv_writer = csv.writer(new_file, delimiter='\t')

# 		for line in csv_reader:
# 			csv_writer.writerow(line)




# with open('names.csv', 'r') as csv_file:
#     csv_reader = csv.DictReader(csv_file)

#     for line in csv_reader:
#     	# print(line)
#     	print(line['email'])




# with open('names.csv', 'r') as csv_file:
#     csv_reader = csv.DictReader(csv_file)

#     with open('new_names.csv', 'w') as new_file:
#         fieldnames = ['first_name', 'last_name', 'email']

#         csv_writer = csv.DictWriter(new_file, fieldnames=fieldnames, delimiter='\t')

#         csv_writer.writeheader()

#         for line in csv_reader:
#             csv_writer.writerow(line)




# only write firstname and lastname
# with open('names.csv', 'r') as csv_file:
# 	csv_reader = csv.DictReader(csv_file)

# 	with open('new_names.csv', 'w') as new_file:
# 		fieldnames = ['first_name', 'last_name']

# 		csv_writer = csv.DictWriter(new_file, fieldnames=fieldnames, delimiter='\t')

# 		csv_writer.writeheader()

# 		for line in csv_reader:
# 			del line['email']
# 			csv_writer.writerow(line)
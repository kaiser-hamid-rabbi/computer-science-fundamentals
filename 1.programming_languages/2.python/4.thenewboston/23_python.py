fw = open('sample.txt', 'w')
fw.write('Writing some stuff in my text file\n')
fw.write('I like bacon.')
fw.close()

fr = open('sample.txt', 'r')
text = fr.read()
print(text)
fr.close()
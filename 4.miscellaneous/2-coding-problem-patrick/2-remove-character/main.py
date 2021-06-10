import re
string = open('input.txt').read()
new_str = re.sub('[^a-zA-Z0-9\n\.]', ' ', string)
open('output.txt', 'w').write(new_str)
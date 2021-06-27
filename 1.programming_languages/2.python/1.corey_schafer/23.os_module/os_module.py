# --------------------- OS module ---------------------------------------

# import os # built-in python module(no need to install anything!)

# print(dir(os)) # to see all the attributes and methods in os module
# print(os.getcwd()) # print current working directory

# os.chdir('/home/kaiserhamid/Documents/projects/0.corey_schafer_python/') # change working directory
# print(os.getcwd())


# print(os.listdir()) # show files and folders in the current working directory


# create folder
# os.mkdir('OS-Demo-2') # if you just want to create only 1 directory
# os.mkdir('OS-Demo-2/Sub-Dir-1') # you will get an error because you used mkdir, you should use makedirs!
# os.makedirs('OS-Demo-2/Sub-Dir-1') # if your directory is few level deep. Good practice when you have to create folders!
# print(os.listdir()) # show files and folders in the current working directory


# delete folder
# os.rmdir('OS-Demo-2') # Good practice when you have to delete specific folders
# os.removedirs('OS-Demo-2/Sub-Dir-1') # if your directory is few level deep.
# print(os.listdir()) # show files and folders in the current working directory


# rename a file or folder
# os.rename('test.txt', 'demo.txt')
# os.rename('demo.txt', 'test.txt')
# print(os.listdir()) # show files and folders in the current working directory


# see some info about files
# print(os.stat('test.txt'))
# print(os.stat('test.txt').st_size) # to see file sizest_size
# print(os.stat('test.txt').st_mtime) # to see time of last modified the file


# from datetime import datetime
# mod_time = os.stat('test.txt').st_mtime
# print(datetime.fromtimestamp(mod_time))


# Want to see the entire directory tree use os.walk() which yeild a 3 value tuple
# for dirpath, dirnames, filenames in os.walk('/home/kaiserhamid/Documents/projects/0.corey_schafer_python/'):
# 	print('Current Path: ', dirpath)
# 	print('Directories: ', dirnames)
# 	print('Files: ', filenames)
# 	print()


# environment
# print(os.environ.get('HOME')) # /home/kaiserhamid

# let's create test.txt in /home/kaiserhamid
# file_path = os.environ.get('HOME') + 'test.txt' 
# print(file_path) # /home/kaiserhamidtest.txt ---> which is wrong because we missed a '/'. So we sould use os.path module.

# file_path = os.path.join(os.environ.get('HOME'), 'test.txt')
# print(file_path)


# print(os.path.basename('/tmp/test.txt')) # test.txt
# print(os.path.dirname('/tmp/test.txt')) # /tmp/tmp

# print(os.path.split('/tmp/test.txt')) # ('/tmp', 'test.txt')
# print(os.path.splitext('/tmp/test.txt')) # ('/tmp/test', '.txt')

# print(os.path.exists('/tmp/test.txt')) # True/False
# print(os.path.isdir('/tmp/asdfasd')) # True/False
# print(os.path.isfile('/tmp/asdfasd')) # True/False

# print(dir(os.path))
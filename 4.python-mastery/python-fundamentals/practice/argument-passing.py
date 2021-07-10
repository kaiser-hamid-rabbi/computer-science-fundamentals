# import os
# import sys
# import argparse
#
# if len(sys.argv) > 2:
#     print('You have specified too many arguments')
#     sys.exit()
#
# if len(sys.argv) < 2:
#     print('You need to specify the path to be listed')
#     sys.exit()
#
# input_path = sys.argv[1]
#
# # -------------------------------------------------------------------------------
#
# # Create the parser
# my_parser = argparse.ArgumentParser(description='List the content of a folder...')
#
# # Add the arguments
# my_parser.add_argument('input',
#                        metavar='path',
#                        type=str,
#                        help='the path to list')
# my_parser.add_argument('output',
#                        metavar='path',
#                        type=str,
#                        help='the path to list')
#
# # Execute the parse_args() method
# args = my_parser.parse_args()
#
# # input_path = args.input
# input_path = sys.argv[1]
# # output_path = args.output
# output_path = sys.argv[2]
# print(input_path)
# print(output_path)
#
# if not os.path.isdir(input_path):
#     print('The path specified does not exist')
#     sys.exit()
#
# print('\n'.join(os.listdir(input_path)))
#
# if not os.path.isdir(output_path):
#     print('The path specified does not exist')
#     sys.exit()
#
# print('\n'.join(os.listdir(output_path)))
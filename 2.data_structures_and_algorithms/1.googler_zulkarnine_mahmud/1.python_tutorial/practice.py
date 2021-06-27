

with open("demo.txt", mode="r") as demo_file:
    words_all = []
    for line in demo_file.readlines():
        words = line.strip().split(" ")
        words_all += words
        # print(words)

    unique_words = set(words_all)
    print(words_all)
    print(unique_words)
    print(len(words_all))
    print(len(unique_words))

    with open("unique_words.txt", mode="w") as write_file:
        for item in sorted(unique_words):
            write_file.write(item)
            # write_file.write(" ")
            write_file.write("\n")


        # print(line)
        # print(line, end="")
        # print(line.strip())

# print("Kaiser", end="")
print("Finished!")
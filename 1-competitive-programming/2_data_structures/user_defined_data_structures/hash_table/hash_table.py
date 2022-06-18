stock_prices = {}
with open("stock_prices.csv","r") as f:
    for line in f:
        tokens = line.split(',')
        day = tokens[0]
        price = float(tokens[1])
        stock_prices[day] = price

print(stock_prices)
print(stock_prices['march 9'])


class HashTable:
    def __init__(self):
        self.MAX = 100
        self.arr = [None for i in range(self.MAX)]

    def get_hash(self, key):
        hash = 0
        for char in key:
            hash += ord(char)
        return hash % self.MAX

    def __getitem__(self, index):
        h = self.get_hash(index)
        return self.arr[h]

    def __setitem__(self, key, val):
        h = self.get_hash(key)
        self.arr[h] = val

    def __delitem__(self, key):
        h = self.get_hash(key)
        self.arr[h] = None

if __name__ == '__main__':
    ht = HashTable()

    # add items in the hashtable
    ht["march 6"] = 310
    ht["march 7"] = 340
    ht["march 8"] = 380
    ht["dec 30"] = 88
    print(ht.arr)

    # search an item in the hashtable
    print(ht["dec 30"])

    # delete an item in the hashtable
    del ht["march 6"]
    print(ht.arr)
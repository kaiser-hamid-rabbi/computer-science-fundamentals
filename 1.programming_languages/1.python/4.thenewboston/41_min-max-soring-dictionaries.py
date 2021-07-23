stocks = {
    'GOOG' : 520.54,
    'FB' : 76.45,
    'YAHOO' : 39.28,
    'AMAZON' : 306.21,
    'APPLE' : 99.76
}

# zip(stocks.values(), stocks.keys())
print(min(zip(stocks.values(), stocks.keys())))
print(max(zip(stocks.values(), stocks.keys())))
print(sorted(zip(stocks.values(), stocks.keys())))
print(sorted(zip(stocks.keys(), stocks.values())))
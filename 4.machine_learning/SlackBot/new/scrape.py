import requests
from bs4 import BeautifulSoup

class Scraber:

    @classmethod
    def scrape_bdnews24(cls):
        source = requests.get('https://bangla.bdnews24.com/').text
        soup = BeautifulSoup(source, 'lxml')
        headlines = []

        for article in soup.find_all('div',class_="default"):
            if not article.p:
                continue
            headline = article.p.text
            print(headline)
            headlines.append(headline)
        return headlines


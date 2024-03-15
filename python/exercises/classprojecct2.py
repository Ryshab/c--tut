import requests
def get_news(news_api_key, query) :

    # Fetch news related to the city
    news_url = f'https://newsapi.org/v2/everything?q={query}&apiKey={news_api_key}'
    news_response = requests.get(news_url)
    if news_response.status_code == 200:
        news_data = news_response.json()
        if news_data['totalResults'] > 0:
            top_news = news_data['articles'][0]
            news_title = top_news['title']
            news_description = top_news['description']
        else:
            news_title = "No news available for this city"
            news_description = ""
    else:
        news_title = "Error fetching news"
        news_description = ""

    print("\nTop News:")
    print(f"Title: {news_title}")
    print(f"Description: {news_description}")

if __name__ == "__main__":
    # api_key = 'YOUR_OPENWEATHERMAP_API_KEY'
    news_api_key = ''
    # city = "Delhi"  # You can also prompt the user for city input if needed
    # get_weather_forecast(api_key, news_api_key, city)
    query = input("Title: ")
    get_news(news_api_key, query)


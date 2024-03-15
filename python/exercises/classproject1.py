import requests

def get_weather_forecast(api_key, city):
    # Fetch weather forecast
    weather_url = f'http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}&units=metric'
    weather_response = requests.get(weather_url)
    if weather_response.status_code == 200:
        weather_data = weather_response.json()
        weather_description = weather_data['weather'][0]['description']
        temperature = weather_data['main']['temp']
        humidity = weather_data['main']['humidity']
        wind_speed = weather_data['wind']['speed']
    else:
        print("Error fetching weather forecast")
        return


    # Print weather forecast and news
    print(f"Weather forecast for {city}:")
    print(f"Description: {weather_description}")
    print(f"Temperature: {temperature}°C")
    print(f"Humidity: {humidity}%")
    print(f"Wind Speed: {wind_speed} m/s")
    

if __name__ == "__main__":
    api_key = ''
    # news_api_key = 'YOUR_NEWSAPI_OR_OTHER_NEWS_API_KEY'
    city =input("Enter the city : ") # You can also prompt the user for city input if needed
    get_weather_forecast(api_key, city)

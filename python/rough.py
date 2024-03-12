import pyttsx3
engine = pyttsx3.init()
engine.setProperty("rate",125)
engine.save_to_file("" , 'test.mp3')
# engine.say('<speak><prosody pitch="high" rate="slow" volume="loud">This is a test of SSML tags.</prosody></speak>')

engine.runAndWait()
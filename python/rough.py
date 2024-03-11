import pyttsx3
engine = pyttsx3.init()
# engine.save_to_file('Good night Sweetheart' , 'test.mp3')
engine.say('<speak><prosody pitch="high" rate="slow" volume="loud">This is a test of SSML tags.</prosody></speak>')

engine.runAndWait()
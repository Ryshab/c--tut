import pyttsx3 
  
# initialisation 
engine = pyttsx3.init() 
engine.setProperty("rate",125)
# engine.setProperty("voice", female)
voices = engine.getProperty('voices')
print(voices)
print(voices[1].id)
engine.setProperty('voice', voices[1].id)
# for voice in voices:
#     print(voice)
#     engine.setProperty('voice', voice.id)
#     engine.say('The quick brown fox jumped over the lazy dog.')
#     engine.runAndWait()

# testing 
engine.say("and those were seen dancing were thought to be insane who could not hear the music") 
# engine.say("kya pehena hay") 
 
engine.runAndWait() 
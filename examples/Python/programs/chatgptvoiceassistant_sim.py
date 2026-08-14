import os, openai, time, keyboard, speech_recognition as sr, pyttsx3

class _TTS:
    engine = None
    rate = None
    def __init__(self):
        self.engine = pyttsx3.init()
        self.engine.setProperty('rate',145)

    def start(self,text_):
        self.engine.say(text_)
        self.engine.runAndWait()	
		
openai.api_key = os.getenv('OPENAI_API_KEY')
r = sr.Recognizer()

model_engine = %GPTMODEL%
QUESTION = "question.txt"
ANSWER = "answer.txt"
LOG = "log.txt"

def write_result(s):
	file = open(ANSWER, 'w', encoding="utf-8")
	file.write(s+"\n")
	file.close()

def write_log(s):
	file = open(LOG, 'a', encoding="utf-8")
	file.write(s+"\n")
	file.close()

def listen_for(source):

    while True:
        write_log("Waiting... press space to start")
        keyboard.wait('space')
        write_log("Listening...")
        audio = r.listen(source)
        try:
            write_log("Processing request...")
            sText = r.recognize_google(audio)
            write_log(f"You said: {sText}")

            # Send input to OpenAI API
            response = openai.chat.completions.create(%s) #MARKERQUESTION
            response_text = response.choices[0].message.content
            write_result(response_text)
			
        except sr.UnknownValueError:
            write_log("Error: Google Speech Recognition could not understand audio")
        except sr.RequestError as e:
            write_log("Error: Could not request results from Google Speech Recognition service; {0}".format(e))		
        except openai.APIConnectionError as e:
            write_log("Error: {0}".format(e))

def loop():
    with sr.Microphone() as source:
        listen_for(source)

loop()

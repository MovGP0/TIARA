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
	file = open(ANSWER, 'a', encoding="utf-8")
	file.write(s+"\n")
	file.close()

def listen_for(source):

    while True:
        write_result("Waiting... press space to start")
        keyboard.wait('space')
        write_result("Listening...")
        audio = r.listen(source)
        try:
            write_result("Processing request...")
            text = r.recognize_google(audio)
            write_result(f"You said: {text}")
            if not text:
                continue

            # Send input to OpenAI API
            response = openai.ChatCompletion.create(model=model_engine, messages=[{"role": "user", "content": f"{text}"}]) 
            response_text = response.choices[0].message.content
            write_result(response_text)
			
            # Speak the response
            tts = _TTS()
            tts.start(response_text)
            del(tts)			
			
        except sr.UnknownValueError:
            write_result("Google Speech Recognition could not understand audio")
        except sr.RequestError as e:
            write_result("Could not request results from Google Speech Recognition service; {0}".format(e))		
        except openai.error.ServiceUnavailableError as e:
            write_result("Error: {0}".format(e))

def loop():
    with sr.Microphone() as source:
        listen_for(source)

loop()

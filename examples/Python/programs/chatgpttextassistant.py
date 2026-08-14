import openai
import os
import time

openai.api_key = os.getenv('OPENAI_API_KEY')

model_engine = %GPTMODEL%
QUESTION = "question.txt"
ANSWER = "answer.txt"

def write_result(s):
	file = open(ANSWER, 'w', encoding="utf-8")
	file.write(s)
	file.close()

def load_question():
	global sText
	if os.path.exists(QUESTION):
		file = open(QUESTION)
		sText = file.read()
		file.close()

def answer_question():
	try:
		response = openai.ChatCompletion.create(model=model_engine, messages=[{"role": "user", "content": f"{sText}"}]) 
		response_text = response.choices[0].message.content
		write_result(response_text)
		os.remove(QUESTION)
	except openai.error.ServiceUnavailableError as e:
		write_result("Error: {0}".format(e))

def loop():
	while True:
		if os.path.exists(QUESTION):
			load_question()
			answer_question()
		time.sleep(0.5)
	
loop()


from openai import OpenAI
import base64
import requests
import os, time

client = OpenAI()
api_key = os.getenv('OPENAI_API_KEY')

QUESTION = "question.txt"
ANSWER = "answer.txt"
image_path = "circuit.jpg"

# Function to encode the image
def encode_image(image_path):
  with open(image_path, "rb") as image_file:
    return base64.b64encode(image_file.read()).decode('utf-8')

# Getting the base64 string
base64_image = encode_image(image_path)

headers = {
  "Content-Type": "application/json",
  "Authorization": f"Bearer {api_key}"
}

payload = {
  "model": "gpt-4-vision-preview",
  "messages": [
    {
      "role": "user",
      "content": [
        {
          "type": "text",
          "text": ""
        },
        {
          "type": "image_url",
          "image_url": {
            "url": f"data:image/jpeg;base64,{base64_image}"
          }
        }
      ]
    }
  ],
  "max_tokens": 2000
}

def load_question():
	global sText
	if os.path.exists(QUESTION):
		file = open(QUESTION)
		sText = file.read()
		for message in payload["messages"]: 
			for content in message["content"]: 
				if content["type"] == "text":
					content["text"] = sText
		file.close()

def answer_question():
	try:
		response = requests.post("https://api.openai.com/v1/chat/completions", headers=headers, json=payload)
		outfile = open(ANSWER, 'w', encoding='utf-8')
		for data in response.json()['choices']: 
			print(data["message"]["content"], file=outfile)
		outfile.close()
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

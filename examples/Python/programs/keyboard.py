import keyboard

i = 1
running = True
while running:
	if keyboard.is_pressed('ctrl+c'):
		running = False
	i += 1
  
print("End")

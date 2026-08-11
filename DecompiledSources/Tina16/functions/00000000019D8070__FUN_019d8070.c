/* Ghidra address: 019d8070 */
/* Ghidra symbol: FUN_019d8070 */


void FUN_019d8070(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x6d8) = param_2;
  if (param_2 == 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Enter your OpenAI API Key:");
  }
  else if (param_2 == 1) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Enter your GROQ API Key:");
  }
  else if (param_2 == 2) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Enter your OpenRouter API Key:");
  }
  else if (param_2 == 3) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),L"Enter your Ollama API Key:");
  }
  return;
}


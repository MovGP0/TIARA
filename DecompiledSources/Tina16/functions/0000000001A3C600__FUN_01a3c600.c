/* Ghidra address: 01a3c600 */
/* Ghidra symbol: FUN_01a3c600 */


undefined8 FUN_01a3c600(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00414ad0(param_1,L"I_OLLAMA");
  }
  else if (param_2 == 1) {
    FUN_00414ad0(param_1,L"I_LM_STUDIO");
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,L"I_LLAMAFILE");
  }
  else {
    FUN_00414ad0(param_1,L"<undef>");
  }
  return param_1;
}


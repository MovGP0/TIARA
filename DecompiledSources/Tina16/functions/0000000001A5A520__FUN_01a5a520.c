/* Ghidra address: 01a5a520 */
/* Ghidra symbol: FUN_01a5a520 */


undefined8 FUN_01a5a520(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c);
  if (iVar1 == 0) {
    FUN_00414ad0(param_2,L"OLLAMA");
  }
  else if (iVar1 == 1) {
    FUN_00414ad0(param_2,L"LM_STUDIO");
  }
  else if (iVar1 == 2) {
    FUN_00414ad0(param_2,L"LLAMAFILE");
  }
  else {
    FUN_00414ad0(param_2,L"<undef>");
  }
  return param_2;
}


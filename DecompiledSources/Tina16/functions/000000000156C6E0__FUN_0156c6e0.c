/* Ghidra address: 0156c6e0 */
/* Ghidra symbol: FUN_0156c6e0 */


void FUN_0156c6e0(longlong param_1)

{
  char cVar1;
  undefined4 local_1c;
  
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x10))(*(longlong **)(param_1 + 0x8f8));
  cVar1 = FUN_01b22620(*(undefined8 *)(param_1 + 0x8f8),L"VHDLMACROBEGIN",&local_1c,0);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x98))(*(longlong **)(param_1 + 0x8f8),local_1c)
    ;
  }
  cVar1 = FUN_01b22620(*(undefined8 *)(param_1 + 0x8f8),L"VHDLMACROEND",&local_1c,0);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x98))(*(longlong **)(param_1 + 0x8f8),local_1c)
    ;
  }
  return;
}


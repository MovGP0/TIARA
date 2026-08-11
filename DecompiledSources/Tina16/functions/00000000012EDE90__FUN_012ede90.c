/* Ghidra address: 012ede90 */
/* Ghidra symbol: FUN_012ede90 */


void FUN_012ede90(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))(*(longlong **)(param_1 + 0x738),0);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x128))(*(longlong **)(param_1 + 0x740),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))(*(longlong **)(param_1 + 0x738),1);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x128))(*(longlong **)(param_1 + 0x740),1);
  }
  return;
}


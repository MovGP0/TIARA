/* Ghidra address: 00c689f0 */
/* Ghidra symbol: FUN_00c689f0 */


void FUN_00c689f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),0);
  }
  return;
}


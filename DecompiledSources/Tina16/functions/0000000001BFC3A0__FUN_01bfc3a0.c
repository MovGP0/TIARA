/* Ghidra address: 01bfc3a0 */
/* Ghidra symbol: FUN_01bfc3a0 */


void FUN_01bfc3a0(longlong *param_1)

{
  char cVar1;
  
  FUN_005b4d30(param_1);
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((cVar1 != '\0') && (*(longlong *)(param_1[4] + 0x80) != 0)) {
    (**(code **)(**(longlong **)(param_1[4] + 0x80) + 0x180))(*(longlong **)(param_1[4] + 0x80));
  }
  return;
}


/* Ghidra address: 01bd47a0 */
/* Ghidra symbol: FUN_01bd47a0 */


void FUN_01bd47a0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x290))(param_1);
  if (cVar1 == '\0') {
    FUN_01bd3440(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x298))(param_1);
  }
  return;
}


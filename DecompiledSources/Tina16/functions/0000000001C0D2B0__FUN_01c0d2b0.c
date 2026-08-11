/* Ghidra address: 01c0d2b0 */
/* Ghidra symbol: FUN_01c0d2b0 */


void FUN_01c0d2b0(longlong *param_1)

{
  char cVar1;
  
  FUN_01be74c0(param_1);
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 == '\0') {
    FUN_0064cc50(param_1,*(int *)((longlong)param_1 + 0x9c) + 2);
  }
  else {
    FUN_0064cc50(param_1,3);
  }
  return;
}


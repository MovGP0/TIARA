/* Ghidra address: 00ea3300 */
/* Ghidra symbol: FUN_00ea3300 */


int FUN_00ea3300(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  if (iVar1 < param_2) {
    FUN_00ea32c0(param_2);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  return param_2;
}


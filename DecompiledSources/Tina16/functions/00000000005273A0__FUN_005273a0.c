/* Ghidra address: 005273a0 */
/* Ghidra symbol: FUN_005273a0 */


int FUN_005273a0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < param_1) {
    iVar1 = FUN_00409e80(param_1 - param_2);
    iVar1 = iVar1 + param_2;
  }
  else {
    iVar1 = FUN_00409e80(param_2 - param_1);
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}


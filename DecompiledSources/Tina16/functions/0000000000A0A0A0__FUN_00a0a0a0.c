/* Ghidra address: 00a0a0a0 */
/* Ghidra symbol: FUN_00a0a0a0 */


int FUN_00a0a0a0(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 < param_3) {
    iVar1 = -1 - (param_3 - param_2);
  }
  else {
    iVar1 = param_2 - param_3;
  }
  return iVar1;
}


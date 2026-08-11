/* Ghidra address: 005b8850 */
/* Ghidra symbol: FUN_005b8850 */


undefined8 FUN_005b8850(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_00416dc0(param_1,param_2,(iVar1 - param_3) + 1,param_3);
  return param_1;
}


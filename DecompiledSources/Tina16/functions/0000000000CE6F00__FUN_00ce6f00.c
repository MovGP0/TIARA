/* Ghidra address: 00ce6f00 */
/* Ghidra symbol: FUN_00ce6f00 */


void FUN_00ce6f00(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  if (0 < iVar1) {
    FUN_00416ad0(param_1,&LAB_00ce6f4c);
  }
  FUN_00416ad0(param_1,param_2);
  return;
}


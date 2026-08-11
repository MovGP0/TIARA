/* Ghidra address: 00ce6e60 */
/* Ghidra symbol: FUN_00ce6e60 */


void FUN_00ce6e60(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  if (0 < iVar1) {
    iVar1 = 0;
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + -4);
    }
    if (0 < iVar1) {
      FUN_00416ad0(param_1,&DAT_00ce6edc);
    }
    FUN_00416cd0(param_1,4,*param_1,param_2,&LAB_00ce6ef0,param_3);
  }
  return;
}


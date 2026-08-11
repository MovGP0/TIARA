/* Ghidra address: 0044a5d0 */
/* Ghidra symbol: FUN_0044a5d0 */


undefined8 FUN_0044a5d0(longlong param_1,int *param_2,short param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_0044a3c0(param_1,param_2);
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
  }
  if ((*param_2 <= iVar1) && (*(short *)(param_1 + -2 + (longlong)*param_2 * 2) == param_3)) {
    *param_2 = *param_2 + 1;
    uVar2 = 1;
  }
  return uVar2;
}


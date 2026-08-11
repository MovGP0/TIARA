/* Ghidra address: 005b85d0 */
/* Ghidra symbol: FUN_005b85d0 */


longlong * FUN_005b85d0(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  FUN_004169f0(param_1,iVar2 * param_3);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    for (; 0 < param_3; param_3 = param_3 + -1) {
      FUN_00409a70(param_2,lVar1,(longlong)(iVar2 * 2));
      lVar1 = lVar1 + (longlong)iVar2 * 2;
    }
  }
  return param_1;
}


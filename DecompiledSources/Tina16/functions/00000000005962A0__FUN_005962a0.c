/* Ghidra address: 005962a0 */
/* Ghidra symbol: FUN_005962a0 */


void FUN_005962a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_00596c80(param_1);
  lVar2 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
  if (iVar1 < 0) {
    FUN_0040d200(param_3,lVar2,0);
  }
  else {
    FUN_00409a70(*param_1 + iVar1 * lVar2,param_3,lVar2);
    FUN_00599af0(param_1,iVar1,3);
  }
  return;
}


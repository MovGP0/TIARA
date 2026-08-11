/* Ghidra address: 004b84c0 */
/* Ghidra symbol: FUN_004b84c0 */


void FUN_004b84c0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3 & 0xffffffff);
  lVar2 = (longlong)iVar1;
  if (lVar2 < 0) {
    FUN_004b6d70();
  }
  while (lVar2 < (longlong)param_3) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2 + lVar2,(int)param_3 - (int)lVar2);
    if ((longlong)iVar1 < 1) {
      FUN_004b6d70();
    }
    else {
      lVar2 = lVar2 + iVar1;
    }
  }
  return;
}


/* Ghidra address: 004b8440 */
/* Ghidra symbol: FUN_004b8440 */


void FUN_004b8440(longlong *param_1,undefined8 *param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,*param_2,param_3,param_4 & 0xffffffff);
  lVar2 = (longlong)iVar1;
  if (lVar2 < 0) {
    FUN_004b6d70();
  }
  while (lVar2 < (longlong)param_4) {
    iVar1 = (**(code **)(*param_1 + 0x28))
                      (param_1,*param_2,param_3 + (int)lVar2,(int)param_4 - (int)lVar2);
    if ((longlong)iVar1 < 1) {
      FUN_004b6d70();
    }
    else {
      lVar2 = lVar2 + iVar1;
    }
  }
  return;
}


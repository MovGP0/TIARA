/* Ghidra address: 004b8aa0 */
/* Ghidra symbol: FUN_004b8aa0 */


void FUN_004b8aa0(longlong *param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4 & 0xffffffff);
  lVar3 = (longlong)iVar1;
  if (lVar3 < 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00471da0,1,PTR_PTR_02003760);
    FUN_004134c0(uVar2);
  }
  while (lVar3 < (longlong)param_4) {
    iVar1 = (**(code **)(*param_1 + 0x30))
                      (param_1,param_2,param_3 + (int)lVar3,(int)param_4 - (int)lVar3);
    if ((longlong)iVar1 < 1) {
      uVar2 = FUN_0044d710(&PTR_FUN_00471da0,1,PTR_PTR_02003760);
      FUN_004134c0(uVar2);
    }
    else {
      lVar3 = lVar3 + iVar1;
    }
  }
  return;
}


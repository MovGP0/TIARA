/* Ghidra address: 00873270 */
/* Ghidra symbol: FUN_00873270 */


undefined8
FUN_00873270(longlong *param_1,longlong param_2,int param_3,longlong *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_38 [2];
  undefined1 local_30;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    uVar3 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_02002488);
    FUN_004134c0(uVar3);
  }
  if (param_3 < 0) {
    local_30 = 0;
    local_38[0] = param_3;
    uVar3 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_PTR_02003088,local_38,0);
    FUN_004134c0(uVar3);
  }
  if (param_5 < 0) {
    bVar1 = true;
  }
  else {
    lVar4 = 0;
    if (*param_4 != 0) {
      lVar4 = *(longlong *)(*param_4 + -8);
    }
    bVar1 = lVar4 < param_5;
  }
  if (bVar1) {
    local_38[0] = param_5;
    local_30 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_DAT_02003bc8,local_38,0);
    FUN_004134c0(uVar3);
  }
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  if (iVar2 < 1) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    if (*param_4 != 0) {
      lVar4 = *(longlong *)(*param_4 + -8);
    }
    if (lVar4 < param_5 + iVar2) {
      uVar3 = FUN_0044d710(&PTR_FUN_004334c0,CONCAT71((int7)(int3)((uint)(param_5 + iVar2) >> 8),1),
                           PTR_PTR_02001578);
      iVar2 = FUN_004134c0(uVar3);
    }
    uVar3 = (**(code **)(*param_1 + 0x18))
                      (param_1,param_2,param_3,*param_4 + (longlong)param_5 * 2,iVar2);
  }
  return uVar3;
}


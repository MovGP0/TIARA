/* Ghidra address: 0045a7b0 */
/* Ghidra symbol: FUN_0045a7b0 */


void FUN_0045a7b0(longlong *param_1,longlong param_2,int param_3,int param_4,longlong param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_38 [2];
  undefined1 local_30;
  
  if ((param_2 == 0) && (param_4 != 0)) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020025f0);
    FUN_004134c0(uVar3);
  }
  if (param_3 < 0) {
    local_30 = 0;
    local_38[0] = param_3;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003400,local_38,0);
    FUN_004134c0(uVar3);
  }
  if (param_4 < 0) {
    local_30 = 0;
    local_38[0] = param_4;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar3);
  }
  lVar4 = 0;
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_2 + -8);
  }
  if (lVar4 - param_3 < (longlong)param_4) {
    local_30 = 0;
    local_38[0] = param_4;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar3);
  }
  iVar2 = FUN_0045a100(param_1,param_2,param_3,param_4);
  if ((0 < param_4) && (iVar2 == 0)) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_02002c90);
    iVar2 = FUN_004134c0(uVar3);
  }
  if (param_6 < 0) {
    bVar1 = true;
  }
  else {
    lVar4 = 0;
    if (param_5 != 0) {
      lVar4 = *(longlong *)(param_5 + -8);
    }
    bVar1 = lVar4 < param_6;
  }
  if (bVar1) {
    local_38[0] = param_6;
    local_30 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003ce8,local_38,0);
    iVar2 = FUN_004134c0(uVar3);
  }
  lVar4 = 0;
  if (param_5 != 0) {
    lVar4 = *(longlong *)(param_5 + -8);
  }
  if (lVar4 < param_6 + iVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,CONCAT71((int7)(int3)((uint)(param_6 + iVar2) >> 8),1),
                         PTR_PTR_020016f0);
    iVar2 = FUN_004134c0(uVar3);
  }
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2 + param_3,param_4,param_5 + (longlong)param_6 * 2,iVar2);
  return;
}


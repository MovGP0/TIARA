/* Ghidra address: 00459ab0 */
/* Ghidra symbol: FUN_00459ab0 */


void FUN_00459ab0(longlong *param_1,longlong param_2,int param_3,int param_4,longlong param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_38 [2];
  undefined1 local_30;
  
  if ((param_2 == 0) && (param_4 != 0)) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020025f0);
    FUN_004134c0(uVar3);
  }
  if ((param_5 == 0) && (param_4 != 0)) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020016f0);
    FUN_004134c0(uVar3);
  }
  if (param_3 < 0) {
    local_30 = 0;
    local_38[0] = param_3;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020046a0,local_38,0);
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
  iVar1 = 0;
  if (param_5 != 0) {
    iVar1 = (int)*(undefined8 *)(param_5 + -8);
  }
  if ((param_6 < 0) || (iVar1 < param_6)) {
    local_38[0] = param_6;
    local_30 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003ce8,local_38,0);
    iVar1 = FUN_004134c0(uVar3);
  }
  iVar2 = FUN_004593b0(param_1,param_2,param_3,param_4);
  if (iVar1 - param_6 < iVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020016f0);
    FUN_004134c0(uVar3);
  }
  (**(code **)(*param_1 + 8))
            (param_1,param_2 + (longlong)param_3 * 2,param_4,param_5 + param_6,iVar1 - param_6);
  return;
}


/* Ghidra address: 004598a0 */
/* Ghidra symbol: FUN_004598a0 */


void FUN_004598a0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5,
                 longlong param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int local_38 [2];
  undefined1 local_30;
  
  if ((param_3 == -1) && (param_5 != 0)) {
    puVar4 = PTR_PTR_020025f0;
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1);
    param_3 = (int)puVar4;
    FUN_004134c0(uVar3);
  }
  if ((param_6 == 0) && (param_5 != 0)) {
    puVar4 = PTR_PTR_020016f0;
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1);
    param_3 = (int)puVar4;
    FUN_004134c0(uVar3);
  }
  if (param_4 < 0) {
    local_30 = 0;
    puVar4 = PTR_PTR_020046a0;
    local_38[0] = param_4;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020046a0,local_38,0);
    param_3 = (int)puVar4;
    FUN_004134c0(uVar3);
  }
  if (param_5 < 0) {
    local_38[0] = param_5;
    local_30 = 0;
    puVar4 = PTR_PTR_020031c0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    param_3 = (int)puVar4;
    FUN_004134c0(uVar3);
  }
  if ((param_3 - param_4) + 1 < param_5) {
    local_38[0] = param_5;
    local_30 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar3);
  }
  iVar1 = 0;
  if (param_6 != 0) {
    iVar1 = (int)*(undefined8 *)(param_6 + -8);
  }
  if ((param_7 < 0) || (iVar1 < param_7)) {
    local_38[0] = param_7;
    local_30 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003ce8,local_38,0);
    iVar1 = FUN_004134c0(uVar3);
  }
  iVar2 = FUN_004592c0(param_1,param_2);
  if (iVar1 - param_7 < iVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020016f0);
    FUN_004134c0(uVar3);
  }
  (**(code **)(*param_1 + 8))
            (param_1,param_2 + (longlong)param_4 * 2,param_5,param_6 + param_7,iVar1 - param_7);
  return;
}


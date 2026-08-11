/* Ghidra address: 0045a5b0 */
/* Ghidra symbol: FUN_0045a5b0 */


void FUN_0045a5b0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5,
                 longlong param_6,int param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  int local_38 [2];
  undefined1 local_30;
  
  param_3 = param_3 + 1;
  if ((param_3 == 0) && (param_5 != 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020025f0);
    param_3 = FUN_004134c0(uVar2);
  }
  if (param_4 < 0) {
    local_30 = 0;
    local_38[0] = param_4;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003400,local_38,0);
    param_3 = FUN_004134c0(uVar2);
  }
  if (param_5 < 0) {
    local_38[0] = param_5;
    local_30 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    param_3 = FUN_004134c0(uVar2);
  }
  if (param_3 - param_4 < param_5) {
    local_38[0] = param_5;
    local_30 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar2);
  }
  iVar1 = FUN_00459ff0(param_1,param_2);
  if ((0 < param_5) && (iVar1 == 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_02002c90);
    iVar1 = FUN_004134c0(uVar2);
  }
  if ((param_8 < 0) || (param_7 + 1 < param_8)) {
    local_38[0] = param_8;
    local_30 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003ce8,local_38,0);
    iVar1 = FUN_004134c0(uVar2);
  }
  if (param_7 + 1 < param_8 + iVar1) {
    uVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,CONCAT71((uint7)(uint3)((uint)(param_7 + 1) >> 8),1),
                         PTR_PTR_020016f0);
    iVar1 = FUN_004134c0(uVar2);
  }
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2 + param_4,param_5,param_6 + (longlong)param_8 * 2,iVar1);
  return;
}


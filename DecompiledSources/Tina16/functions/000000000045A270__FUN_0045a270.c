/* Ghidra address: 0045a270 */
/* Ghidra symbol: FUN_0045a270 */


undefined8 *
FUN_0045a270(longlong *param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  int local_38 [2];
  undefined1 local_30;
  
  iVar1 = (int)param_4 + 1;
  if ((iVar1 == 0) && (param_6 != 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020025f0);
    iVar1 = FUN_004134c0(uVar2);
  }
  if (param_5 < 0) {
    local_38[0] = param_5;
    local_30 = 0;
    param_4 = local_38;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003400,param_4,0);
    iVar1 = FUN_004134c0(uVar2);
  }
  if (param_6 < 0) {
    local_38[0] = param_6;
    local_30 = 0;
    param_4 = local_38;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,param_4,0);
    iVar1 = FUN_004134c0(uVar2);
  }
  if (iVar1 - param_5 < param_6) {
    local_38[0] = param_6;
    local_30 = 0;
    param_4 = local_38;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,param_4,0);
    FUN_004134c0(uVar2);
  }
  iVar1 = FUN_00459ff0(param_1,param_3,(ulonglong)param_4 & 0xffffffff,param_5,param_6);
  if ((0 < param_6) && (iVar1 == 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_02002c90);
    FUN_004134c0(uVar2);
  }
  FUN_00419260(param_2,&DAT_004065c0,1,(longlong)iVar1);
  (**(code **)(*param_1 + 0x18))(param_1,param_3 + param_5,param_6,*param_2,iVar1);
  return param_2;
}


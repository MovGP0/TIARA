/* Ghidra address: 0045aba0 */
/* Ghidra symbol: FUN_0045aba0 */


undefined8 *
FUN_0045aba0(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_38 [2];
  undefined1 local_30;
  
  lVar3 = 0;
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_3 + -8);
  }
  lVar2 = param_3;
  if ((lVar3 == 0) && (param_5 != 0)) {
    lVar2 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_020025f0);
    FUN_004134c0();
  }
  if (param_4 < 0) {
    local_30 = 0;
    local_38[0] = param_4;
    lVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_02003400,local_38,0);
    FUN_004134c0();
  }
  if (param_5 < 0) {
    local_38[0] = param_5;
    local_30 = 0;
    lVar2 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0();
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + -8);
  }
  if (lVar3 - param_4 < (longlong)param_5) {
    local_38[0] = param_5;
    local_30 = 0;
    uVar4 = FUN_0044d8d0(&PTR_FUN_0043a1a0,1,PTR_PTR_020031c0,local_38,0);
    FUN_004134c0(uVar4);
  }
  iVar1 = FUN_0045a100(param_1,param_3,param_4,param_5);
  if ((0 < param_5) && (iVar1 == 0)) {
    uVar4 = FUN_0044d710(&PTR_FUN_0043a1a0,1,PTR_PTR_02002c90);
    FUN_004134c0(uVar4);
  }
  FUN_004169f0(param_2,iVar1);
  uVar4 = FUN_00416740(*param_2);
  (**(code **)(*param_1 + 0x18))(param_1,param_3 + param_4,param_5,uVar4,iVar1);
  return param_2;
}


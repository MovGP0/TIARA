/* Ghidra address: 00872dc0 */
/* Ghidra symbol: FUN_00872dc0 */


undefined8
FUN_00872dc0(longlong *param_1,longlong param_2,int param_3,longlong *param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_38 [2];
  undefined1 local_30;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_02002488);
    FUN_004134c0(uVar2);
  }
  if ((*param_4 == 0) && (param_3 != 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_02001578);
    FUN_004134c0(uVar2);
  }
  if (param_3 < 0) {
    local_30 = 0;
    local_38[0] = param_3;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_PTR_02003088,local_38,0);
    FUN_004134c0(uVar2);
  }
  uVar3 = 0;
  if (*param_4 != 0) {
    uVar3 = *(ulonglong *)(*param_4 + -8);
  }
  uVar1 = (**(code **)*param_1)(param_1,param_2,param_3);
  uVar2 = FUN_008729b0(*param_4,param_5,uVar3 & 0xffffffff,uVar1);
  if ((param_3 < 1) || ((int)uVar3 - param_5 < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,uVar2,uVar1);
  }
  return uVar2;
}


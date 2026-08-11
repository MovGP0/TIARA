/* Ghidra address: 00b0cb40 */
/* Ghidra symbol: FUN_00b0cb40 */


undefined8 FUN_00b0cb40(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0x58))(param_1,3);
  local_20 = 0;
  uStack_1c = 0;
  FUN_00415dd0(&local_30,param_1[0x14],0);
  FUN_00b0d0c0(&local_28,param_2,local_30);
  uVar1 = FUN_005ffa40(param_1);
  uVar3 = 0;
  if (local_28 != 0) {
    uVar3 = *(uint *)(local_28 + -4) >> 1;
  }
  uVar2 = FUN_00415f70(local_28);
  thunk_FUN_0418ae1a(uVar1,uVar2,uVar3,&local_20);
  FUN_004144d0(&local_30);
  FUN_00414520(&local_28);
  return CONCAT44(uStack_1c,local_20);
}


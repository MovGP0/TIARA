/* Ghidra address: 010b7420 */
/* Ghidra symbol: FUN_010b7420 */


int FUN_010b7420(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_70 [16];
  undefined1 *local_60;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_60 = auStack_a8;
  local_50 = *param_1;
  uStack_48 = param_1[1];
  local_40 = param_1[2];
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_38 = (longlong *)FUN_00c32af0(&PTR_FUN_00c17678,1);
  FUN_004b9ec0(param_2);
  (**(code **)(*local_30 + 0x88))(local_30,param_3);
  (**(code **)(*local_30 + 0x70))(local_30,param_4);
  uVar1 = FUN_00609e10(local_30);
  uVar1 = FUN_005ffa40(uVar1);
  local_88 = param_4;
  FUN_00498350(local_70,0,0,param_3);
  thunk_FUN_0417aa92(uVar1,local_40,local_70);
  (**(code **)(*local_38 + 0x10))(local_38,local_30);
  (**(code **)(*local_38 + 200))(local_38,param_2);
  local_54 = (**(code **)*param_2)(param_2);
  local_54 = local_54 + 4;
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  return local_54;
}


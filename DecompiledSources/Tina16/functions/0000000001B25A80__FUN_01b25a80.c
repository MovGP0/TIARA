/* Ghidra address: 01b25a80 */
/* Ghidra symbol: FUN_01b25a80 */


void FUN_01b25a80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_98;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_28 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_20 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
  local_78 = 1;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = local_res18;
  FUN_019904f0(param_1,local_28,1,*PTR_DAT_02002480);
  (**(code **)(*local_20 + 0x10))(local_20,local_28);
  (**(code **)(*local_20 + 0xb0))(local_20,local_res10);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_30);
  FUN_00414480(&local_res10);
  return;
}


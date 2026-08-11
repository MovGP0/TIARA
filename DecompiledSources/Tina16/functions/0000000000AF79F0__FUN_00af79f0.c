/* Ghidra address: 00af79f0 */
/* Ghidra symbol: FUN_00af79f0 */


void FUN_00af79f0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined1 local_40 [16];
  undefined1 *local_30;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  longlong *local_10;
  
  local_30 = auStack_88;
  local_10 = (longlong *)FUN_00aa5de0(&PTR_FUN_00a90568,1,*(undefined8 *)(param_1 + 0x8b0));
  local_18 = 0;
  local_68 = param_6;
  local_60 = 300;
  local_58 = local_14;
  local_50 = &local_18;
  local_60 = (**(code **)(*local_10 + 0x30))(local_10,param_2,0,param_4);
  local_68 = param_6;
  local_1c = local_60;
  FUN_00af70a0(param_1,param_2,param_3,param_5);
  local_20 = param_3;
  if (param_3 < 0) {
    local_20 = 0;
  }
  FUN_00aa66b0(local_10,local_20);
  local_68 = param_6;
  FUN_004238d0(local_40,0,0,param_5);
  local_68 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_50 = (undefined4 *)((ulonglong)local_50 & 0xffffffff00000000);
  (**(code **)(*local_10 + 0x38))(local_10,param_2,local_40,100000);
  FUN_00410f20(local_10);
  return;
}


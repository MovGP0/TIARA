/* Ghidra address: 00958f40 */
/* Ghidra symbol: FUN_00958f40 */


undefined8 FUN_00958f40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_a8;
  local_30 = FUN_00953db0(&PTR_FUN_0090d520,1,*(undefined8 *)(param_1 + 0x20));
  local_28 = (longlong *)FUN_00982d80(&PTR_FUN_009242d0,1,0);
  uVar1 = FUN_00958690(param_1);
  (**(code **)(*local_28 + 0x88))(local_28,uVar1);
  local_88 = 0;
  local_80 = DAT_01e32940;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 1;
  local_20 = FUN_00960220(&PTR_FUN_00914aa8,1,param_2,0);
  (**(code **)(*local_28 + 0xa0))(local_28,local_20,local_30);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return local_30;
}


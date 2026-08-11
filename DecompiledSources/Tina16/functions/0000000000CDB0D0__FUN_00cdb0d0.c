/* Ghidra address: 00cdb0d0 */
/* Ghidra symbol: FUN_00cdb0d0 */


undefined8 FUN_00cdb0d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*param_1 + 0x90))(param_1,param_3,local_28,param_4);
  FUN_004b6dc0(local_28,0);
  FUN_00874520(&local_38);
  FUN_008787b0(param_2,local_28,0xffffffff,local_38);
  uVar1 = local_28;
  local_20 = local_28;
  local_28 = 0;
  FUN_00410f20(uVar1);
  FUN_0041b800(&local_38);
  return param_2;
}


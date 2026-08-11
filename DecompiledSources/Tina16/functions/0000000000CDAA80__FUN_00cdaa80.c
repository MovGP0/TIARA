/* Ghidra address: 00cdaa80 */
/* Ghidra symbol: FUN_00cdaa80 */


void FUN_00cdaa80(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_28 = 0;
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_00874520(&local_28);
  FUN_00878900(local_20,param_2,local_28);
  FUN_0041b800(&local_28);
  FUN_004b6dc0(local_20,0);
  (**(code **)(*param_1 + 0xa0))(param_1,local_20,0xffffffff);
  FUN_00410f20(local_20);
  FUN_0041b800(&local_28);
  return;
}


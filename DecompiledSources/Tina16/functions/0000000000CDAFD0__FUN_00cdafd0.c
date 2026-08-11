/* Ghidra address: 00cdafd0 */
/* Ghidra symbol: FUN_00cdafd0 */


void FUN_00cdafd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_0086f700(&local_res20,2);
  FUN_00878900(local_28,param_2,local_res20);
  FUN_004b6dc0(local_28,0);
  (**(code **)(*param_1 + 0x90))(param_1,local_28,param_3,0xffffffff);
  uVar1 = local_28;
  local_20 = local_28;
  local_28 = 0;
  FUN_00410f20(uVar1);
  FUN_0041b800(&local_res20);
  return;
}


/* Ghidra address: 007798c0 */
/* Ghidra symbol: FUN_007798c0 */


void FUN_007798c0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,1);
  (**(code **)(*param_1 + 0x240))(param_1,local_20);
  FUN_00410f20(local_20);
  return;
}


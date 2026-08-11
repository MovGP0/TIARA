/* Ghidra address: 00d735d0 */
/* Ghidra symbol: FUN_00d735d0 */


void FUN_00d735d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_00d5c6d8,1);
  FUN_00d73240(param_1);
  FUN_00d75380(local_20,param_1);
  (**(code **)(*local_20 + 0x38))(local_20,param_2);
  FUN_00d732b0(param_1);
  FUN_00410f20(local_20);
  return;
}


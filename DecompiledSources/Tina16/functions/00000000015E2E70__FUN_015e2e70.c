/* Ghidra address: 015e2e70 */
/* Ghidra symbol: FUN_015e2e70 */


undefined1 FUN_015e2e70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  longlong *local_10;
  
  local_20 = auStack_48;
  local_11 = 0;
  local_10 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*local_10 + 0x20))(local_10,param_2,param_3);
  local_11 = FUN_015e2f00(param_1,local_10);
  FUN_00410f20(local_10);
  return local_11;
}


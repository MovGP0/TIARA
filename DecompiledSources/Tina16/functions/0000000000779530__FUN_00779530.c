/* Ghidra address: 00779530 */
/* Ghidra symbol: FUN_00779530 */


undefined8 FUN_00779530(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
  local_18 = (**(code **)(param_1 + 0x230))(param_1,local_10);
  FUN_00410f20(local_10);
  return local_18;
}


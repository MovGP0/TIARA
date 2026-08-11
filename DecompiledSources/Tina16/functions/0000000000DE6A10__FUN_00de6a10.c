/* Ghidra address: 00de6a10 */
/* Ghidra symbol: FUN_00de6a10 */


undefined1 FUN_00de6a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0x40);
  local_11 = FUN_00de6910(param_1,local_10);
  FUN_00410f20(local_10);
  FUN_00414480(local_res10);
  return local_11;
}


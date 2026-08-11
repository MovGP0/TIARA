/* Ghidra address: 00caf810 */
/* Ghidra symbol: FUN_00caf810 */


undefined8 FUN_00caf810(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00875240(&local_10,local_res18[0],*(undefined8 *)(param_1 + 0x150),3);
  FUN_0041b840(local_res18,local_10);
  FUN_00c8aff0(*(longlong *)(param_1 + 0x108),param_2,
               *(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x30),local_res18[0]);
  FUN_0041b800(&local_10);
  FUN_0041b800(local_res18);
  return param_2;
}


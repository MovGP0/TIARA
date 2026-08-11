/* Ghidra address: 014bc240 */
/* Ghidra symbol: FUN_014bc240 */


undefined4 FUN_014bc240(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  if (*(longlong *)(param_1 + 0x158) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined8 *)(param_1 + 0x160),param_1);
  }
  FUN_0041b800(local_res18);
  return 0x80004001;
}


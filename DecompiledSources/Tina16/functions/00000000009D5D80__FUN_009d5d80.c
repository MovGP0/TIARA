/* Ghidra address: 009d5d80 */
/* Ghidra symbol: FUN_009d5d80 */


undefined4 FUN_009d5d80(longlong param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_2 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))(*(longlong **)(param_1 + 0x18),&local_28);
  FUN_004168b0(param_2,local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}


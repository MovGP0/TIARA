/* Ghidra address: 006f5be0 */
/* Ghidra symbol: FUN_006f5be0 */


void FUN_006f5be0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = *param_3;
  if (*(longlong *)(param_1 + 0x630) != 0) {
    (**(code **)(param_1 + 0x630))(*(undefined8 *)(param_1 + 0x638),param_1,param_2,local_20);
  }
  return;
}


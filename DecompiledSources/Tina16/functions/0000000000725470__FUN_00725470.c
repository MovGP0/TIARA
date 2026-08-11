/* Ghidra address: 00725470 */
/* Ghidra symbol: FUN_00725470 */


void FUN_00725470(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xe8),param_1,param_2);
  }
  return;
}


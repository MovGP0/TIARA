/* Ghidra address: 004c2f50 */
/* Ghidra symbol: FUN_004c2f50 */


void FUN_004c2f50(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xa8),param_1,param_2);
  }
  return;
}


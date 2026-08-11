/* Ghidra address: 00726770 */
/* Ghidra symbol: FUN_00726770 */


void FUN_00726770(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xe8),param_1);
  }
  return;
}


/* Ghidra address: 004b5950 */
/* Ghidra symbol: FUN_004b5950 */


void FUN_004b5950(longlong param_1)

{
  if ((*(int *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68),param_1);
  }
  return;
}


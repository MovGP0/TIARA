/* Ghidra address: 004b5920 */
/* Ghidra symbol: FUN_004b5920 */


void FUN_004b5920(longlong param_1)

{
  if ((*(int *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x58),param_1);
  }
  return;
}


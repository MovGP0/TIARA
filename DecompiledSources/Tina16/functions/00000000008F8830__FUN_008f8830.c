/* Ghidra address: 008f8830 */
/* Ghidra symbol: FUN_008f8830 */


void FUN_008f8830(longlong param_1)

{
  if ((*(int *)(param_1 + 0x24) == 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}


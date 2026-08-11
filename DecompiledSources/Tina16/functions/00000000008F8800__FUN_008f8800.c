/* Ghidra address: 008f8800 */
/* Ghidra symbol: FUN_008f8800 */


void FUN_008f8800(longlong param_1)

{
  if ((*(int *)(param_1 + 0x24) == 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}


/* Ghidra address: 009e9d80 */
/* Ghidra symbol: FUN_009e9d80 */


void FUN_009e9d80(longlong param_1)

{
  if ((*(int *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    (**(code **)(param_1 + 0x58))(*(undefined8 *)(param_1 + 0x60),param_1);
  }
  return;
}


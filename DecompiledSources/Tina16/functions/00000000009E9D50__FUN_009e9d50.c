/* Ghidra address: 009e9d50 */
/* Ghidra symbol: FUN_009e9d50 */


void FUN_009e9d50(longlong param_1)

{
  if ((*(int *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),param_1);
  }
  return;
}


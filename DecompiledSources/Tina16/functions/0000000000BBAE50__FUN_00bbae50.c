/* Ghidra address: 00bbae50 */
/* Ghidra symbol: FUN_00bbae50 */


void FUN_00bbae50(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x1c) != param_2) &&
     (*(char *)(param_1 + 0x1c) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}


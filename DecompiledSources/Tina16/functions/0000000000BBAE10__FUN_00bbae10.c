/* Ghidra address: 00bbae10 */
/* Ghidra symbol: FUN_00bbae10 */


void FUN_00bbae10(longlong param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if ((*(int *)(param_1 + 0x30) != param_2) &&
     (*(int *)(param_1 + 0x30) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}


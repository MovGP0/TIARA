/* Ghidra address: 00b68280 */
/* Ghidra symbol: FUN_00b68280 */


void FUN_00b68280(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (*(double *)(param_1 + 0x90) <= 1.0) {
      if (0.0 < *(double *)(param_1 + 0x90) || *(double *)(param_1 + 0x90) == 0.0) {
        (**(code **)(param_1 + 0x80))
                  (*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
      }
      else {
        (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),0);
      }
    }
    else {
      (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),0x3ff0000000000000);
    }
  }
  return;
}


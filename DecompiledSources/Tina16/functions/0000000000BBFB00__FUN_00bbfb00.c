/* Ghidra address: 00bbfb00 */
/* Ghidra symbol: FUN_00bbfb00 */


void FUN_00bbfb00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_1);
  }
  return;
}


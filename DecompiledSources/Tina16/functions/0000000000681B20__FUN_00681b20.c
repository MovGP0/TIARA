/* Ghidra address: 00681b20 */
/* Ghidra symbol: FUN_00681b20 */


void FUN_00681b20(longlong param_1)

{
  FUN_0064d480(param_1);
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    (**(code **)(param_1 + 0x4a8))(*(undefined8 *)(param_1 + 0x4b0),param_1);
  }
  return;
}


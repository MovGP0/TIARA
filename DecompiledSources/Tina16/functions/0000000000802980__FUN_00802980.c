/* Ghidra address: 00802980 */
/* Ghidra symbol: FUN_00802980 */


void FUN_00802980(longlong param_1)

{
  FUN_008028d0(0xb001,*(undefined8 *)(param_1 + 0x4c0),param_1);
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    (**(code **)(param_1 + 0x5b0))(*(undefined8 *)(param_1 + 0x5b8),param_1);
  }
  return;
}


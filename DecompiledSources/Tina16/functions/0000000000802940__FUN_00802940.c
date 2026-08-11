/* Ghidra address: 00802940 */
/* Ghidra symbol: FUN_00802940 */


void FUN_00802940(longlong param_1)

{
  FUN_008028d0(0xb000,*(undefined8 *)(param_1 + 0x4c0),param_1);
  if (*(longlong *)(param_1 + 0x560) != 0) {
    (**(code **)(param_1 + 0x560))(*(undefined8 *)(param_1 + 0x568),param_1);
  }
  return;
}


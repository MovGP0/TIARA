/* Ghidra address: 00bbaf80 */
/* Ghidra symbol: FUN_00bbaf80 */


void FUN_00bbaf80(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x54) = param_2;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}


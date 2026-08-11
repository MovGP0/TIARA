/* Ghidra address: 00cc1b90 */
/* Ghidra symbol: FUN_00cc1b90 */


void FUN_00cc1b90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_1);
  }
  return;
}


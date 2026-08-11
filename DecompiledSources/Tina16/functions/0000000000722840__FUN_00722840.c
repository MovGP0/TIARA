/* Ghidra address: 00722840 */
/* Ghidra symbol: FUN_00722840 */


void FUN_00722840(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_1);
  }
  return;
}


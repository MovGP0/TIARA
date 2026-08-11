/* Ghidra address: 00ccf340 */
/* Ghidra symbol: FUN_00ccf340 */


void FUN_00ccf340(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    (**(code **)(param_1 + 0x1f8))(*(undefined8 *)(param_1 + 0x200));
  }
  return;
}


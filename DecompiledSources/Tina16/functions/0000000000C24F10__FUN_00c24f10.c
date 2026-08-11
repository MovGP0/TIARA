/* Ghidra address: 00c24f10 */
/* Ghidra symbol: FUN_00c24f10 */


void FUN_00c24f10(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


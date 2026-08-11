/* Ghidra address: 00727b00 */
/* Ghidra symbol: FUN_00727b00 */


void FUN_00727b00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120),param_1);
  }
  return;
}


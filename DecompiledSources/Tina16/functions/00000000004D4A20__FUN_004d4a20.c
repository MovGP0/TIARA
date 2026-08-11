/* Ghidra address: 004d4a20 */
/* Ghidra symbol: FUN_004d4a20 */


void FUN_004d4a20(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  return;
}


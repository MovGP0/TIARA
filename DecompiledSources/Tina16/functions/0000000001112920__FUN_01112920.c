/* Ghidra address: 01112920 */
/* Ghidra symbol: FUN_01112920 */


void FUN_01112920(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x600) != 0) {
    (**(code **)(param_1 + 0x600))(*(undefined8 *)(param_1 + 0x608),param_1);
  }
  return;
}


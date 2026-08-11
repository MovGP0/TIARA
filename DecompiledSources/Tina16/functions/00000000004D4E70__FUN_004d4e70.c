/* Ghidra address: 004d4e70 */
/* Ghidra symbol: FUN_004d4e70 */


void FUN_004d4e70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x90),param_1);
  }
  return;
}


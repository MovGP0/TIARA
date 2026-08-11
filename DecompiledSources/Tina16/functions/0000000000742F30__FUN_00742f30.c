/* Ghidra address: 00742f30 */
/* Ghidra symbol: FUN_00742f30 */


void FUN_00742f30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x90),param_1);
  }
  return;
}


/* Ghidra address: 0194e590 */
/* Ghidra symbol: FUN_0194e590 */


void FUN_0194e590(longlong param_1)

{
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + -1;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    (**(code **)(param_1 + 0x200))(*(undefined8 *)(param_1 + 0x208),param_1);
  }
  return;
}


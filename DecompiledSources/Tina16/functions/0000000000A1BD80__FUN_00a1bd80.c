/* Ghidra address: 00a1bd80 */
/* Ghidra symbol: FUN_00a1bd80 */


void FUN_00a1bd80(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


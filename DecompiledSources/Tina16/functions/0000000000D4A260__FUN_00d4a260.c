/* Ghidra address: 00d4a260 */
/* Ghidra symbol: FUN_00d4a260 */


void FUN_00d4a260(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8),
                       *(undefined8 *)(param_2 + 0x38));
  }
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x30),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x30));
  return;
}


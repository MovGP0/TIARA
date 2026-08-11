/* Ghidra address: 01a40b80 */
/* Ghidra symbol: FUN_01a40b80 */


void FUN_01a40b80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2b98) != 0) {
    FUN_019cf730(*(longlong *)(param_1 + 0x2b98));
    thunk_FUN_0419965d(100);
    FUN_004d1f00(*(undefined8 *)(param_1 + 0x2b98));
    thunk_FUN_0419965d(100);
    *(undefined8 *)(param_1 + 0x2b98) = 0;
    if (*(longlong *)(param_1 + 0x2b80) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0x2b80));
    }
    if (*(longlong *)(param_1 + 0x2b88) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0x2b88));
    }
    if (*(longlong *)(param_1 + 0x2b90) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0x2b90));
    }
  }
  return;
}


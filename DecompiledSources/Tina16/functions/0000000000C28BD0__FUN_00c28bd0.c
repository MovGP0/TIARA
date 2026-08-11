/* Ghidra address: 00c28bd0 */
/* Ghidra symbol: FUN_00c28bd0 */


void FUN_00c28bd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}


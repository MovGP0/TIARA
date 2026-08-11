/* Ghidra address: 00c28c00 */
/* Ghidra symbol: FUN_00c28c00 */


void FUN_00c28c00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


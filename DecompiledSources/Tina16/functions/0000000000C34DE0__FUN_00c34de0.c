/* Ghidra address: 00c34de0 */
/* Ghidra symbol: FUN_00c34de0 */


void FUN_00c34de0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


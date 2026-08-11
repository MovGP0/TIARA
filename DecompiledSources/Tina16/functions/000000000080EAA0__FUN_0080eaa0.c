/* Ghidra address: 0080eaa0 */
/* Ghidra symbol: FUN_0080eaa0 */


void FUN_0080eaa0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_2 + 0x80));
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_2 + 0x78));
  }
  return;
}


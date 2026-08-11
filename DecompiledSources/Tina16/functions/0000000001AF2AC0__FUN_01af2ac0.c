/* Ghidra address: 01af2ac0 */
/* Ghidra symbol: FUN_01af2ac0 */


void FUN_01af2ac0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_01af0f20(*(longlong *)(param_1 + 8));
  }
  return;
}


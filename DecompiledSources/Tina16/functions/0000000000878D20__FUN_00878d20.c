/* Ghidra address: 00878d20 */
/* Ghidra symbol: FUN_00878d20 */


void FUN_00878d20(longlong param_1,longlong param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != param_2) {
    *(longlong *)(param_1 + 0x10) = param_2;
    if (*(longlong *)(param_1 + 0x10) < *(longlong *)(param_1 + 8)) {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 0x10);
    }
  }
  return;
}


/* Ghidra address: 00a7c690 */
/* Ghidra symbol: FUN_00a7c690 */


void FUN_00a7c690(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != param_2) {
    FUN_00410f20(*(longlong *)(param_1 + 0x30));
    *(longlong *)(param_1 + 0x30) = param_2;
  }
  return;
}


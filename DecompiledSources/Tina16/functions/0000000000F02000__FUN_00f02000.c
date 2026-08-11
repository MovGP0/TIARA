/* Ghidra address: 00f02000 */
/* Ghidra symbol: FUN_00f02000 */


void FUN_00f02000(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x10) != param_1) &&
     (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x528))) {
    FUN_00f012b0(param_1,0);
  }
  return;
}


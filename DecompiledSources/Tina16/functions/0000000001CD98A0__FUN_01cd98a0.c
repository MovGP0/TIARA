/* Ghidra address: 01cd98a0 */
/* Ghidra symbol: FUN_01cd98a0 */


void FUN_01cd98a0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x60) = param_2;
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x100) = param_1;
  }
  return;
}


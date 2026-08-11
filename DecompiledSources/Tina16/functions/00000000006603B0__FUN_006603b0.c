/* Ghidra address: 006603b0 */
/* Ghidra symbol: FUN_006603b0 */


void FUN_006603b0(longlong param_1)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x100;
  FUN_00657db0(param_1);
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffffeff;
  return;
}


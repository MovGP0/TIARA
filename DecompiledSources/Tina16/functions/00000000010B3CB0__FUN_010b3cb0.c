/* Ghidra address: 010b3cb0 */
/* Ghidra symbol: FUN_010b3cb0 */


void FUN_010b3cb0(longlong param_1,int param_2)

{
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) & 0xfffffc03;
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) | param_2 * 4;
  return;
}


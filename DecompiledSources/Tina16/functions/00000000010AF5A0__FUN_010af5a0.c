/* Ghidra address: 010af5a0 */
/* Ghidra symbol: FUN_010af5a0 */


void FUN_010af5a0(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | param_2;
  return;
}


/* Ghidra address: 017fea60 */
/* Ghidra symbol: FUN_017fea60 */


void FUN_017fea60(longlong param_1,byte param_2,byte param_3)

{
  *(byte *)(param_1 + 0x70c) = *(byte *)(param_1 + 0x70c) | param_2;
  *(byte *)(param_1 + 0x70d) = *(byte *)(param_1 + 0x70d) | param_3;
  return;
}


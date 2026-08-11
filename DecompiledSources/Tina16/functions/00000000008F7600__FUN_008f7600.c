/* Ghidra address: 008f7600 */
/* Ghidra symbol: FUN_008f7600 */


int FUN_008f7600(ushort param_1,ushort param_2)

{
  return (param_1 - 0xd7c0) * 0x400 + (uint)(param_2 ^ 0xdc00);
}


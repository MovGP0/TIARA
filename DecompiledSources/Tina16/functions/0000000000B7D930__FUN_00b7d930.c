/* Ghidra address: 00b7d930 */
/* Ghidra symbol: FUN_00b7d930 */


undefined4 FUN_00b7d930(ushort param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (uint)param_1 << (param_2 & 0x1f);
  return CONCAT22((short)((uint)iVar1 >> 0x10),(ushort)iVar1 | param_1 >> (0x10 - param_2 & 0x1f));
}


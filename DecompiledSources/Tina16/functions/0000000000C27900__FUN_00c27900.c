/* Ghidra address: 00c27900 */
/* Ghidra symbol: FUN_00c27900 */


undefined4 FUN_00c27900(undefined8 param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 1 << (param_2 & 0x1f);
  return CONCAT22((short)((uint)iVar1 >> 0x10),(short)iVar1 + -1);
}


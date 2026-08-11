/* Ghidra address: 00bac690 */
/* Ghidra symbol: FUN_00bac690 */


bool FUN_00bac690(ulonglong param_1)

{
  return (*(byte *)(*(longlong *)PTR_DAT_020031f0 + (param_1 & 0xffff)) & 0x10) != 0;
}


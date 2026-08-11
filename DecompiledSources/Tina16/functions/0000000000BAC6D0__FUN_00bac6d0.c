/* Ghidra address: 00bac6d0 */
/* Ghidra symbol: FUN_00bac6d0 */


bool FUN_00bac6d0(ulonglong param_1)

{
  return (*(byte *)(*(longlong *)PTR_DAT_020031f0 + (param_1 & 0xffff)) & 0x40) != 0;
}


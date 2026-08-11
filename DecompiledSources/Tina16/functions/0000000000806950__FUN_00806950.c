/* Ghidra address: 00806950 */
/* Ghidra symbol: FUN_00806950 */


void FUN_00806950(longlong param_1,longlong param_2)

{
  if ((((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (DAT_01e13fb0 != 0)) &&
     ((*(char *)(param_1 + 0x630) != '\0' || (*(char *)(param_1 + 0x678) != '\0')))) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x80000;
  }
  return;
}


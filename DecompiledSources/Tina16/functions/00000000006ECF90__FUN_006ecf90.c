/* Ghidra address: 006ecf90 */
/* Ghidra symbol: FUN_006ecf90 */


ushort FUN_006ecf90(longlong param_1,ushort param_2)

{
  *(char *)(param_1 + 0x491) = (char)(param_2 >> 8);
  param_2 = param_2 & 0xff;
  *(ushort *)(param_1 + 0x494) = param_2;
  if ((*(byte *)(param_1 + 0x491) & 1) != 0) {
    param_2 = param_2 + 0x2000;
  }
  if ((*(byte *)(param_1 + 0x491) & 2) != 0) {
    param_2 = param_2 + 0x4000;
  }
  if ((*(byte *)(param_1 + 0x491) & 4) != 0) {
    param_2 = param_2 + 0x8000;
  }
  return param_2;
}


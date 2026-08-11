/* Ghidra address: 00c27250 */
/* Ghidra symbol: FUN_00c27250 */


ulonglong FUN_00c27250(uint param_1)

{
  return (longlong)(int)(param_1 >> 4 ^ param_1) % 0x1f49 & 0xffffffff;
}


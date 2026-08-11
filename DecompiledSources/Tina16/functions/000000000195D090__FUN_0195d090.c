/* Ghidra address: 0195d090 */
/* Ghidra symbol: FUN_0195d090 */


void FUN_0195d090(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) & 0xfb;
  }
  else {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) | 4;
  }
  return;
}


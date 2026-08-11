/* Ghidra address: 0040a170 */
/* Ghidra symbol: FUN_0040a170 */


void FUN_0040a170(longlong param_1,char param_2)

{
  byte bVar1;
  
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 7) & 0x7f;
  }
  else {
    bVar1 = *(byte *)(param_1 + 7) | 0x80;
  }
  *(byte *)(param_1 + 7) = bVar1;
  return;
}


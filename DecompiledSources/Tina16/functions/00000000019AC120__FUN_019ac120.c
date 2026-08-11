/* Ghidra address: 019ac120 */
/* Ghidra symbol: FUN_019ac120 */


void FUN_019ac120(longlong param_1,int param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = (byte)((longlong)param_2 % 8);
  *(byte *)(param_1 + param_2 / 8) =
       *(byte *)(param_1 + param_2 / 8) & ~(byte)(1 << (bVar1 & 0x1f)) |
       (param_3 != '\0') << (bVar1 & 0x1f);
  return;
}


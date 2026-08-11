/* Ghidra address: 00966200 */
/* Ghidra symbol: FUN_00966200 */


byte FUN_00966200(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  if (bVar1 < 0xa0) {
    bVar3 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    lVar2 = FUN_00966240();
    bVar1 = *(byte *)(lVar2 + 0x18);
  }
  return bVar1;
}


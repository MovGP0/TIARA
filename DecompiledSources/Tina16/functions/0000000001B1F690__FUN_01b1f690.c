/* Ghidra address: 01b1f690 */
/* Ghidra symbol: FUN_01b1f690 */


bool FUN_01b1f690(undefined8 param_1,short param_2)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = param_2 - 0x30;
  if (uVar1 < 0x50) {
    bVar2 = ((byte)(&DAT_01b1f6b4)[(longlong)(short)(uVar1 & 0x7f) >> 3] >> (uVar1 & 7) & 1) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


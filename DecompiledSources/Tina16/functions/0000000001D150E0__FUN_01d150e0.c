/* Ghidra address: 01d150e0 */
/* Ghidra symbol: FUN_01d150e0 */


bool FUN_01d150e0(undefined8 param_1,short param_2)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = param_2 - 0x20;
  if (uVar1 < 0x48) {
    bVar2 = ((byte)(&DAT_01d15120)[(longlong)((ulonglong)uVar1 & 0x7f) >> 3] >>
             ((ulonglong)uVar1 & 7) & 1) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


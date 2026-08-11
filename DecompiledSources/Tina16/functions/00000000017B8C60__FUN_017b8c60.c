/* Ghidra address: 017b8c60 */
/* Ghidra symbol: FUN_017b8c60 */


undefined8 FUN_017b8c60(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  bool bVar2;
  
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
            0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = 0x11;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}


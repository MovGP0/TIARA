/* Ghidra address: 012be0b0 */
/* Ghidra symbol: FUN_012be0b0 */


int FUN_012be0b0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  bool bVar3;
  
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
            0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  iVar1 = FUN_01d322a0(*(undefined8 *)(param_1 + 0x10));
  iVar2 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x10));
  if (bVar3) {
    iVar2 = iVar1;
  }
  return iVar2 + 2;
}


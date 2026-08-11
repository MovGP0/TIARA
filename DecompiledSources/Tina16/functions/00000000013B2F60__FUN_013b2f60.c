/* Ghidra address: 013b2f60 */
/* Ghidra symbol: FUN_013b2f60 */


uint FUN_013b2f60(undefined8 param_1,longlong param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  
  bVar1 = *(byte *)(param_2 + 8);
  if (((param_3 == '\0') && (in_RAX = FUN_013b2e60(param_1,1), (char)in_RAX == '\0')) &&
     (in_RAX = FUN_013b2e60(param_1,2), (char)in_RAX == '\0')) {
    if (bVar1 < 8) {
      uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar1 & 0x1f);
      return CONCAT31((int3)(uVar2 >> 8),(uVar2 & 5) != 0);
    }
    return 0;
  }
  if (bVar1 == 7) {
    uVar2 = (uint)*(byte *)(param_2 + 0x125);
  }
  else if (bVar1 < 0x10) {
    uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),1) << (bVar1 & 0x1f);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0x685) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


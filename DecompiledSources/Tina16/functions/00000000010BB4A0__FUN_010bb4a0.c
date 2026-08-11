/* Ghidra address: 010bb4a0 */
/* Ghidra symbol: FUN_010bb4a0 */


undefined8 FUN_010bb4a0(undefined8 param_1,longlong param_2)

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
    uVar1 = 0x101;
  }
  else {
    uVar1 = 0x100;
  }
  return uVar1;
}


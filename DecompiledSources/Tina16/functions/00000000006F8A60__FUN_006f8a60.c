/* Ghidra address: 006f8a60 */
/* Ghidra symbol: FUN_006f8a60 */


void FUN_006f8a60(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = FUN_00657db0(param_1);
  if (*(byte *)(param_1 + 0x4a1) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (*(byte *)(param_1 + 0x4a1) & 0x1f) &
            3U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(char *)(param_1 + 0x5a0) != '\0')) {
    FUN_006f8880(param_1);
  }
  return;
}


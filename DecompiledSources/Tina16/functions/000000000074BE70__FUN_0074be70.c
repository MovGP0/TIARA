/* Ghidra address: 0074be70 */
/* Ghidra symbol: FUN_0074be70 */


void FUN_0074be70(longlong param_1)

{
  short sVar1;
  bool bVar2;
  
  FUN_0064c450(param_1);
  sVar1 = *(short *)(param_1 + 0xe0);
  if ((sVar1 == -0xf) || (sVar1 == -0xe)) {
    if (*(byte *)(param_1 + 0xad) < 8) {
      bVar2 = ((int)CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1) <<
               (*(byte *)(param_1 + 0xad) & 0x1f) & 6U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_0064e140(param_1,0xfff1);
    }
    else {
      FUN_0064e140(param_1,0xfff2);
    }
  }
  return;
}


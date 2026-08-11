/* Ghidra address: 0181a500 */
/* Ghidra symbol: FUN_0181a500 */


void FUN_0181a500(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = FUN_007fc7f0(param_1);
  if (*(byte *)(param_1 + 0x6cd) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (*(byte *)(param_1 + 0x6cd) & 0x1f) &
            3U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(char *)(param_1 + 0x6cb) == '\0')) {
    FUN_0181b150(param_1,1);
  }
  FUN_00419430(param_1 + 0x6d0,&DAT_018197b8);
  return;
}


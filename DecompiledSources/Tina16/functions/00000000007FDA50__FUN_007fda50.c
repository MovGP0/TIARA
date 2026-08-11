/* Ghidra address: 007fda50 */
/* Ghidra symbol: FUN_007fda50 */


undefined8 FUN_007fda50(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_007ffc10(param_1);
  if ((char)uVar2 != '\0') {
    if (*(byte *)(param_1 + 0x4d1) < 8) {
      uVar1 = (int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(param_1 + 0x4d1) & 0x1f);
      uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x24) != 0);
    }
    else {
      uVar3 = 0;
    }
    if (*(char *)(param_1 + 0x494) == (char)uVar3) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return 0;
}


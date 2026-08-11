/* Ghidra address: 01c15bf0 */
/* Ghidra symbol: FUN_01c15bf0 */


undefined8 FUN_01c15bf0(void)

{
  short sVar1;
  ulonglong uVar2;
  
  sVar1 = thunk_FUN_03cbc5c8(2);
  uVar2 = (ulonglong)sVar1;
  if ((uVar2 & 0x8000) == 0) {
    sVar1 = thunk_FUN_03cbc5c8(1);
    uVar2 = (ulonglong)sVar1;
    if ((uVar2 & 0x8000) == 0) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}


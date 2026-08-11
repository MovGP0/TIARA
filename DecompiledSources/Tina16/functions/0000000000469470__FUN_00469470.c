/* Ghidra address: 00469470 */
/* Ghidra symbol: FUN_00469470 */


ulonglong FUN_00469470(uint param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1 & 0xffffffffffff0fff;
  uVar1 = (ushort)uVar2;
  if (0x15 < uVar1) {
    if ((uVar1 == 0x100) || (uVar1 == 0x102)) {
      uVar2 = CONCAT62((int6)(uVar2 >> 0x10),8);
    }
    else {
      FUN_00460210();
    }
  }
  return uVar2;
}


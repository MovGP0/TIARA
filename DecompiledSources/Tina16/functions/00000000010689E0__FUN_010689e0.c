/* Ghidra address: 010689e0 */
/* Ghidra symbol: FUN_010689e0 */


undefined8 FUN_010689e0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)
          *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) + (longlong)param_2 * 2);
  uVar2 = uVar1;
  if (uVar1 < 0x56) {
    if (uVar1 != 0x55) {
      if (uVar1 < 0x30) {
        uVar2 = 0;
        if ((uVar1 != 0x2b) && (uVar2 = uVar1 - 0x2d, 1 < uVar2)) {
          return 0;
        }
      }
      else {
        uVar2 = uVar1 - 0x30;
        if ((9 < uVar1 - 0x30) && (uVar2 = uVar1 - 0x41, 5 < uVar1 - 0x41)) {
          if (uVar1 != 0x4c) {
            return 0;
          }
          uVar2 = 0;
        }
      }
    }
  }
  else if (uVar1 < 0x6d) {
    if (((uVar1 != 0x6c) && (uVar2 = 0, uVar1 != 0x58)) && (uVar2 = uVar1 - 0x61, 5 < uVar2)) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    if ((uVar1 != 0x75) && (uVar2 = 0, uVar1 != 0x78)) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}


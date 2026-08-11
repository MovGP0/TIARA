/* Ghidra address: 00d45640 */
/* Ghidra symbol: FUN_00d45640 */


undefined8 FUN_00d45640(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_00787d50(uVar1);
  uVar2 = uVar2 & 0x12;
  if (uVar2 != 0x12) {
    uVar2 = FUN_00787d50(uVar1);
    uVar2 = uVar2 & 0x10;
    if (uVar2 != 0x10) {
      uVar2 = FUN_00787d50(uVar1);
      uVar2 = uVar2 & 0x1000;
      if (uVar2 != 0x1000) {
        uVar2 = FUN_00787d50(uVar1);
        uVar2 = uVar2 & 0x11;
        if (uVar2 != 0x11) {
          return 0;
        }
      }
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}


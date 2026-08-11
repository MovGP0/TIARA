/* Ghidra address: 008ff120 */
/* Ghidra symbol: FUN_008ff120 */


undefined8 FUN_008ff120(uint param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = (ulonglong)param_1;
  if ((int)param_1 < 0xb8) {
    if ((param_1 != 0xb7) &&
       ((uVar1 = (ulonglong)(param_1 - 0x2d), 1 < param_1 - 0x2d &&
        (uVar1 = (ulonglong)(param_1 - 0x30), 9 < param_1 - 0x30)))) {
LAB_008ff162:
      uVar2 = FUN_008ff170();
      return uVar2;
    }
  }
  else {
    uVar1 = (ulonglong)(param_1 - 0x300);
    if ((0x6f < param_1 - 0x300) && (uVar1 = (ulonglong)(param_1 - 0x203f), 1 < param_1 - 0x203f))
    goto LAB_008ff162;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}


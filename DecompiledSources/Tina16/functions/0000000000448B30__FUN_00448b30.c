/* Ghidra address: 00448b30 */
/* Ghidra symbol: FUN_00448b30 */


undefined8 FUN_00448b30(ushort param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((uint)param_1 % 4 == 0) &&
     ((uVar1 = (ulonglong)param_1 / 100, (uint)param_1 % 100 != 0 ||
      (uVar1 = 0, (uint)param_1 % 400 == 0)))) {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


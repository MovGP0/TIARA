/* Ghidra address: 00bcc1b0 */
/* Ghidra symbol: FUN_00bcc1b0 */


undefined8 FUN_00bcc1b0(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 2;
  do {
    if (param_1 <= (int)uVar2) break;
    uVar1 = (int)uVar2 * 2;
    uVar2 = (ulonglong)uVar1;
  } while ((int)uVar1 < 0x10000);
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 == param_1);
}


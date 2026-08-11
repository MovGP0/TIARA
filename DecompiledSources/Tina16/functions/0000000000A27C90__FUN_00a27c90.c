/* Ghidra address: 00a27c90 */
/* Ghidra symbol: FUN_00a27c90 */


undefined8 FUN_00a27c90(short *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (param_1 != (short *)0x0) {
    uVar1 = (ulonglong)*(uint *)(param_1 + -2);
  }
  if (((int)uVar1 < 2) || ((param_1[1] != 0x3a && ((*param_1 != 0x5c || (param_1[1] != 0x5c)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar2;
}


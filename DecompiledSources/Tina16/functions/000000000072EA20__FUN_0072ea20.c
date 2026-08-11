/* Ghidra address: 0072ea20 */
/* Ghidra symbol: FUN_0072ea20 */


undefined8 FUN_0072ea20(undefined8 param_1,ushort *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (param_2 != (ushort *)0x0) {
    uVar1 = (ulonglong)*(uint *)(param_2 + -2);
  }
  if (((int)uVar1 < 2) || (0x1f < *param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT62((int6)(uVar1 >> 0x10),0x2a);
  }
  return uVar2;
}


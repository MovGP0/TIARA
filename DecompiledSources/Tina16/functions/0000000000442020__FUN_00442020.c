/* Ghidra address: 00442020 */
/* Ghidra symbol: FUN_00442020 */


undefined8 FUN_00442020(short *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (param_1 != (short *)0x0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + -2);
  }
  iVar1 = (int)uVar2;
  if (((iVar1 == 0) || ((0 < iVar1 && (*param_1 != 0x5c)))) && ((iVar1 < 2 || (param_1[1] != 0x3a)))
     ) {
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


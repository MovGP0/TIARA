/* Ghidra address: 00cbbca0 */
/* Ghidra symbol: FUN_00cbbca0 */


undefined8 FUN_00cbbca0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (ulonglong)*(uint *)(param_2 + -4);
  }
  uVar3 = (undefined7)(uVar1 >> 8);
  if ((int)uVar1 < 4) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    uVar2 = CONCAT71(uVar3,*(short *)(param_2 + 6) == 0x20);
  }
  return uVar2;
}


/* Ghidra address: 00810370 */
/* Ghidra symbol: FUN_00810370 */


undefined8 FUN_00810370(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00786090(param_1);
  uVar2 = thunk_FUN_04118143(uVar1,0xffffffec);
  if ((uVar2 & 0x80) == 0x80) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00786090(param_1);
    uVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
    uVar1 = CONCAT71((int7)((uVar2 & 0x80000000) >> 8),(uVar2 & 0x80000000) == 0x80000000);
  }
  return uVar1;
}


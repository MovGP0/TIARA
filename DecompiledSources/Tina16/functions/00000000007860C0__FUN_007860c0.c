/* Ghidra address: 007860c0 */
/* Ghidra symbol: FUN_007860c0 */


undefined8 FUN_007860c0(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00786090(param_1);
  uVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
  if ((uVar2 & 0x800000) == 0x800000) {
    uVar1 = 0x800001;
  }
  else {
    uVar1 = FUN_00786090(param_1);
    uVar2 = thunk_FUN_04118143(uVar1,0xffffffec);
    uVar1 = CONCAT71((int7)((uVar2 & 0x200) >> 8),(uVar2 & 0x200) == 0x200);
  }
  return uVar1;
}


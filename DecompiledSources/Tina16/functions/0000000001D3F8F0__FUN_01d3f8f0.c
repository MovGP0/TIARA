/* Ghidra address: 01d3f8f0 */
/* Ghidra symbol: FUN_01d3f8f0 */


undefined8 FUN_01d3f8f0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((uVar1 < 0x30) || (0xff < uVar1)) {
    thunk_FUN_040bd713(0x10);
    thunk_FUN_040bd713(0x11);
  }
  if ((uVar1 < 0x30) || (0xff < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar2;
}


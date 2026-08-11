/* Ghidra address: 004409d0 */
/* Ghidra symbol: FUN_004409d0 */


bool FUN_004409d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  uint local_258 [148];
  
  uVar1 = FUN_00416740(param_2);
  lVar2 = thunk_FUN_041460a9(uVar1,local_258);
  if (lVar2 == -1) {
    bVar3 = false;
  }
  else {
    thunk_FUN_03b19720(lVar2);
    bVar3 = (local_258[0] & 0x10) == 0;
  }
  return bVar3;
}


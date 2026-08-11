/* Ghidra address: 0070bf50 */
/* Ghidra symbol: FUN_0070bf50 */


undefined8 FUN_0070bf50(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar1 = FUN_00786090(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00786090(param_1);
    uVar3 = thunk_FUN_04118143(uVar2,0xfffffff0);
    if ((uVar3 & 4) == 4) {
      uVar4 = 1;
    }
  }
  return uVar4;
}


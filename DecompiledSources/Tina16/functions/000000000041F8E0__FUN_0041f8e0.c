/* Ghidra address: 0041f8e0 */
/* Ghidra symbol: FUN_0041f8e0 */


void FUN_0041f8e0(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_0041f8d0();
  if (iVar1 != 0) {
    if (DAT_01dbdcb4 == -1) {
      FUN_00414160(0xe2);
    }
    lVar2 = FUN_0041f8b0(iVar1);
    if (lVar2 == 0) {
      FUN_00414160(0xe2);
    }
    else {
      thunk_FUN_040bcfb7(DAT_01dbdcb4,lVar2);
    }
  }
  return;
}


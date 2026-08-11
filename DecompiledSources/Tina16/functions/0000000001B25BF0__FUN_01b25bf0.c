/* Ghidra address: 01b25bf0 */
/* Ghidra symbol: FUN_01b25bf0 */


undefined8 FUN_01b25bf0(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = thunk_FUN_039fb2f7(0x100001,0,param_1);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = thunk_FUN_040e52a8(lVar2,0);
    if (iVar1 == 0) {
      thunk_FUN_03ce33a6();
      thunk_FUN_041d2921(lVar2);
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = thunk_FUN_0418d6df(lVar2,60000);
      if (iVar1 == 0) {
        thunk_FUN_041d2921(lVar2);
        uVar3 = 0;
      }
      else {
        thunk_FUN_041d2921(lVar2);
        uVar3 = 0xffffffff;
      }
    }
  }
  return uVar3;
}


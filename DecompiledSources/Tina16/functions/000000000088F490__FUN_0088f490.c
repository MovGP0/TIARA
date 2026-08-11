/* Ghidra address: 0088f490 */
/* Ghidra symbol: FUN_0088f490 */


longlong FUN_0088f490(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_00414d00(param_1);
    lVar2 = FUN_0088f420((ulonglong)(iVar1 + 1U) * 2);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_00442580(lVar2,param_1,iVar1 + 1U);
    }
  }
  return lVar2;
}


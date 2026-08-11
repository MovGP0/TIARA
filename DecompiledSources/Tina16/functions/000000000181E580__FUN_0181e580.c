/* Ghidra address: 0181e580 */
/* Ghidra symbol: FUN_0181e580 */


longlong FUN_0181e580(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_0181e510(param_1,param_2);
  if (iVar1 == -1) {
    lVar2 = FUN_0181e400(param_1);
    FUN_00414ad0(lVar2 + 0x18,param_2);
  }
  else {
    lVar2 = FUN_0181e3c0(param_1,iVar1);
  }
  return lVar2;
}


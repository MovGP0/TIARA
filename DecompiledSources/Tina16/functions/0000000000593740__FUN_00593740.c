/* Ghidra address: 00593740 */
/* Ghidra symbol: FUN_00593740 */


longlong FUN_00593740(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + -8);
  }
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_3 + -8);
  }
  lVar3 = lVar2 - lVar3;
  if (0 < lVar3) {
    lVar2 = lVar2 - lVar3;
  }
  iVar1 = FUN_005932e0(param_2,param_3,*(int *)(param_1 + 0x14) * (int)lVar2);
  lVar2 = (longlong)iVar1;
  if ((longlong)iVar1 == 0) {
    lVar2 = lVar3;
  }
  return lVar2;
}


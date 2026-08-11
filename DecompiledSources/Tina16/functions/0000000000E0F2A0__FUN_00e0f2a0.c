/* Ghidra address: 00e0f2a0 */
/* Ghidra symbol: FUN_00e0f2a0 */


undefined8
FUN_00e0f2a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
            longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *param_5 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      *param_5 = lVar1;
      if (*(longlong *)(*param_5 + 0x820) == param_4) {
        FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(*param_5 + 0x828) + 8));
        return param_2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}


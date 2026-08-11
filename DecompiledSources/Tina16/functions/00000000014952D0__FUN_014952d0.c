/* Ghidra address: 014952d0 */
/* Ghidra symbol: FUN_014952d0 */


void FUN_014952d0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar3 = *(int *)(lVar1 + 0x4e0) + -2;
  if (param_2 <= iVar3) {
    iVar3 = (iVar3 - param_2) + 1;
    do {
      iVar2 = 0;
      iVar4 = *(int *)(lVar1 + 0x4a4);
      if (-1 < iVar4 + -1) {
        do {
          FUN_0084e320(lVar1,local_40,iVar2,param_2 + 1);
          FUN_0084e3e0(lVar1,iVar2,param_2,local_40[0]);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4e0) + -1);
  FUN_00414480(local_40);
  return;
}


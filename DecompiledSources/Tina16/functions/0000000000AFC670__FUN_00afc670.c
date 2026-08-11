/* Ghidra address: 00afc670 */
/* Ghidra symbol: FUN_00afc670 */


void FUN_00afc670(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00a87e18);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_2,&DAT_00a7d4d0);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x954) == '\0')) {
      iVar1 = *(int *)(param_2 + 0x28);
      iVar3 = FUN_00af6070(param_1);
      if (iVar1 < iVar3) {
        FUN_00af6080(param_1,iVar1);
      }
      else {
        iVar4 = FUN_0064d120(param_1);
        if (iVar3 + iVar4 + -0x1e < iVar1) {
          iVar3 = FUN_0064d120(param_1);
          FUN_00af6080(param_1,iVar1 - iVar3 / 2);
        }
      }
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0xc0);
    iVar3 = FUN_00af6070(param_1);
    if ((iVar3 <= iVar1) && (iVar4 = FUN_0064d120(param_1), iVar1 <= iVar3 + iVar4 + -0x14)) {
      return;
    }
    iVar3 = FUN_0064d120(param_1);
    FUN_00af6080(param_1,iVar1 - iVar3 / 2);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}


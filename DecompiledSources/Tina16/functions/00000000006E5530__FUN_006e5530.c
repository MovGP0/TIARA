/* Ghidra address: 006e5530 */
/* Ghidra symbol: FUN_006e5530 */


void FUN_006e5530(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x568) + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      lVar1 = FUN_006e5360(param_1,iVar2);
      if (lVar1 != param_2) {
        FUN_006e5480(param_1,iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  lVar1 = FUN_006e2530(param_1);
  if ((param_2 != lVar1) && ((param_2 == 0 || (*(char *)(param_2 + 0x38) == '\0')))) {
    FUN_006e2590(param_1,param_2);
  }
  if (((param_2 != 0) && (*(char *)(param_2 + 0x38) == '\0')) &&
     (*(int *)(*(longlong *)(param_1 + 0x568) + 0x10) == 0)) {
    FUN_006e54c0(param_1,param_2,0);
  }
  return;
}


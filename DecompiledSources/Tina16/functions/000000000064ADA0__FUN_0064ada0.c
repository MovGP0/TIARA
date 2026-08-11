/* Ghidra address: 0064ada0 */
/* Ghidra symbol: FUN_0064ada0 */


void FUN_0064ada0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (0 < *(int *)(*param_1 + 0x10)) {
    iVar2 = *(int *)(*param_1 + 0x10) + -1;
    lVar1 = FUN_004aeac0(*param_1,iVar2);
    if (lVar1 == param_2) {
      FUN_004ae870(*param_1,iVar2);
    }
    else {
      FUN_004aee50(*param_1,param_2,0);
    }
  }
  if (*(int *)(*param_1 + 0x10) == 0) {
    FUN_00410f20(*param_1);
    *param_1 = 0;
  }
  return;
}


/* Ghidra address: 00655ae0 */
/* Ghidra symbol: FUN_00655ae0 */


void FUN_00655ae0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong local_38;
  undefined1 local_30;
  
  if (param_1[0x8d] != 0) {
    if (param_1[0x6f] != 0) {
      iVar3 = *(int *)(param_1[0x6f] + 0x10);
      iVar2 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar1 = (longlong *)FUN_004aeac0(param_1[0x6f],iVar2);
          (**(code **)(*plVar1 + 0x1e8))(plVar1);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    local_38 = param_1[0x8d];
    local_30 = (*(uint *)((longlong)param_1 + 0xa4) & 0x2000) != 0;
    thunk_FUN_0414fb0c(local_38,FUN_00655a90,&local_38);
    (**(code **)(*param_1 + 0x1f8))(param_1);
  }
  return;
}


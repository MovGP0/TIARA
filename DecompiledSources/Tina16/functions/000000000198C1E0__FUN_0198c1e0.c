/* Ghidra address: 0198c1e0 */
/* Ghidra symbol: FUN_0198c1e0 */


void FUN_0198c1e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int local_3c [3];
  
  if ((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 != '\n')) {
    if (*(int *)((longlong)param_2 + 0xc) < *(int *)(param_1 + 0x3c)) {
      *(int *)(param_1 + 0x3c) = *(int *)((longlong)param_2 + 0xc);
    }
    if ((int)param_2[2] < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = (int)param_2[2];
    }
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_2 + 0x1c8))();
      iVar3 = 0;
      if (-1 < iVar2 + -1) {
        do {
          cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar3);
          if (cVar1 == '\0') {
            (**(code **)(*param_2 + 0x1f0))(param_2,iVar3,local_3c,&local_40);
            if (local_3c[0] < *(int *)(param_1 + 0x34)) {
              *(int *)(param_1 + 0x34) = local_3c[0];
            }
            if (local_40 < *(int *)(param_1 + 0x30)) {
              *(int *)(param_1 + 0x30) = local_40;
            }
            if ((*(char *)(param_1 + 0x2f) == '\0') &&
               ((local_3c[0] % 8 != 0 || (local_40 % 8 != 0)))) {
              *(int *)(param_1 + 0x28) = local_3c[0] % 8;
              *(int *)(param_1 + 0x24) = local_40 % 8;
              *(undefined1 *)(param_1 + 0x2f) = 1;
            }
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}


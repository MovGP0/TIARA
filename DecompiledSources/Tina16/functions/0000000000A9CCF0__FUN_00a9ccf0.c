/* Ghidra address: 00a9ccf0 */
/* Ghidra symbol: FUN_00a9ccf0 */


void FUN_00a9ccf0(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong local_30;
  
  if (((*(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x18)) &&
      (*(int *)(param_1 + 0x4cc) == 0)) && (*(int *)(param_1 + 0x464) == 0)) {
    iVar4 = 0;
    iVar3 = 0;
    if (*(int *)(param_1 + 0x498) == 0) {
      while ((iVar4 = iVar3, iVar4 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10) &&
             ((local_30 = FUN_00ac3910(*(longlong *)(param_1 + 0xa8),iVar4),
              *(char *)(local_30 + 0x40) == '\x11' ||
              ((cVar2 = FUN_004113d0(local_30,&PTR_FUN_00a865e0), cVar2 != '\0' &&
               ((*(char *)(local_30 + 0x4c) == '\x02' || (*(char *)(local_30 + 0x60) != '\0'))))))))
            ) {
        iVar3 = iVar4 + 1;
      }
      if (((iVar4 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10)) &&
          (cVar2 = FUN_004113d0(local_30,&PTR_FUN_00a865e0), cVar2 != '\0')) &&
         ((*(char *)(local_30 + 0x4c) == '\0' && (*(int *)(local_30 + 0x488) == 0)))) {
        iVar3 = *(int *)(local_30 + 0x478);
        *(undefined4 *)(local_30 + 0x478) = 0;
        iVar1 = *(int *)(param_1 + 0x478);
        if (iVar1 < 0) {
          if (iVar3 < 0) {
            if (iVar1 < iVar3) {
              iVar3 = iVar1;
            }
          }
          else {
            iVar3 = iVar3 + iVar1;
          }
        }
        else if (iVar3 < 0) {
          iVar3 = iVar1 + iVar3;
        }
        else if (iVar3 < iVar1) {
          iVar3 = iVar1;
        }
        *(int *)(param_1 + 0x478) = iVar3;
      }
    }
    if (*(int *)(param_1 + 0x4a0) == 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
      while (iVar3 = iVar3 + -1, iVar4 <= iVar3) {
        local_30 = FUN_00ac3910(*(undefined8 *)(param_1 + 0xa8),iVar3);
        if ((*(char *)(local_30 + 0x40) != '\x11') &&
           ((cVar2 = FUN_004113d0(local_30,&PTR_FUN_00a865e0), cVar2 == '\0' ||
            ((*(char *)(local_30 + 0x4c) != '\x02' && (*(char *)(local_30 + 0x60) == '\0'))))))
        break;
      }
      if ((-1 < iVar3) &&
         (((cVar2 = FUN_004113d0(local_30,&PTR_FUN_00a865e0), cVar2 != '\0' &&
           (*(char *)(local_30 + 0x4c) == '\0')) && (*(int *)(local_30 + 0x490) == 0)))) {
        iVar3 = *(int *)(local_30 + 0x480);
        *(undefined4 *)(local_30 + 0x480) = 0;
        iVar4 = *(int *)(param_1 + 0x480);
        if (iVar4 < 0) {
          if (iVar3 < 0) {
            if (iVar4 < iVar3) {
              iVar3 = iVar4;
            }
          }
          else {
            iVar3 = iVar3 + iVar4;
          }
        }
        else if (iVar3 < 0) {
          iVar3 = iVar4 + iVar3;
        }
        else if (iVar3 < iVar4) {
          iVar3 = iVar4;
        }
        *(int *)(param_1 + 0x480) = iVar3;
      }
    }
  }
  return;
}


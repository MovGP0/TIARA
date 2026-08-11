/* Ghidra address: 00f62c10 */
/* Ghidra symbol: FUN_00f62c10 */


void FUN_00f62c10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_5c;
  int local_40;
  int iStack_3c;
  
  uVar2 = *param_3;
  iVar8 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x10);
  local_5c = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x18),local_5c);
      if (*(char *)(param_1 + 0x60) == '\0') {
        iVar3 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20);
        iVar4 = *(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x24);
        local_40 = (int)uVar2;
        iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
        if (*(char *)(lVar6 + 0x10) == '\0') {
          if (*(char *)(param_2 + 0x41) == '\0') {
            iVar9 = FUN_0040c770(*(double *)(param_1 + 0x68) * (double)*(int *)(lVar6 + 0x30));
            *(int *)(lVar6 + 0x38) = iVar9 + local_40;
            iVar9 = FUN_0040c770(*(double *)(param_1 + 0x68) * (double)*(int *)(lVar6 + 0x34));
            *(int *)(lVar6 + 0x3c) = iStack_3c - iVar9;
          }
          else {
            *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + iVar3;
            *(int *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + iVar4;
          }
        }
        if ((*(char *)(lVar6 + 0x10) == '\0') || (*(char *)(lVar6 + 0x10) == '\x02')) {
          iVar9 = *(int *)(lVar6 + 0x2c);
          iVar7 = 0;
          if (-1 < iVar9 + -1) {
            do {
              if (*(char *)(param_2 + 0x41) == '\0') {
                lVar10 = (longlong)iVar7;
                iVar5 = FUN_0040c770(*(double *)(param_1 + 0x68) *
                                     (double)*(int *)(*(longlong *)(lVar6 + 0x18) + lVar10 * 8));
                *(int *)(*(longlong *)(lVar6 + 0x20) + lVar10 * 8) = iVar5 + local_40;
                iVar5 = FUN_0040c770(*(double *)(param_1 + 0x68) *
                                     (double)*(int *)(*(longlong *)(lVar6 + 0x18) + 4 + lVar10 * 8))
                ;
                *(int *)(*(longlong *)(lVar6 + 0x20) + 4 + lVar10 * 8) = iStack_3c - iVar5;
              }
              else {
                piVar1 = (int *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar7 * 8);
                *piVar1 = *piVar1 + iVar3;
                piVar1 = (int *)(*(longlong *)(lVar6 + 0x20) + 4 + (longlong)iVar7 * 8);
                *piVar1 = *piVar1 + iVar4;
              }
              iVar7 = iVar7 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          iVar9 = *(int *)(lVar6 + 0x74);
          if ((0 < iVar9) && (iVar7 = 0, -1 < iVar9 + -1)) {
            do {
              if (*(char *)(param_2 + 0x41) == '\0') {
                lVar10 = (longlong)iVar7;
                iVar5 = FUN_0040c770(*(double *)(param_1 + 0x68) *
                                     (double)*(int *)(*(longlong *)(lVar6 + 0x78) + lVar10 * 8));
                *(int *)(*(longlong *)(lVar6 + 0x80) + lVar10 * 8) = iVar5 + local_40;
                iVar5 = FUN_0040c770(*(double *)(param_1 + 0x68) *
                                     (double)*(int *)(*(longlong *)(lVar6 + 0x78) + 4 + lVar10 * 8))
                ;
                *(int *)(*(longlong *)(lVar6 + 0x80) + 4 + lVar10 * 8) = iStack_3c - iVar5;
              }
              else {
                piVar1 = (int *)(*(longlong *)(lVar6 + 0x80) + (longlong)iVar7 * 8);
                *piVar1 = *piVar1 + iVar3;
                piVar1 = (int *)(*(longlong *)(lVar6 + 0x80) + 4 + (longlong)iVar7 * 8);
                *piVar1 = *piVar1 + iVar4;
              }
              iVar7 = iVar7 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        if (*(char *)(lVar6 + 0x10) == '\x03') {
          if (*(char *)(param_2 + 0x41) == '\0') {
            iVar3 = FUN_0040c770(*(double *)(param_1 + 0x68) * (double)*(int *)(lVar6 + 0x40));
            *(int *)(lVar6 + 0x48) = iVar3 + local_40;
            iVar3 = FUN_0040c770(*(double *)(param_1 + 0x68) * (double)*(int *)(lVar6 + 0x44));
            *(int *)(lVar6 + 0x4c) = iVar3 + iStack_3c;
          }
          else {
            *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + iVar3;
            *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + iVar4;
          }
        }
      }
      local_5c = local_5c + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}


/* Ghidra address: 006fe240 */
/* Ghidra symbol: FUN_006fe240 */


void FUN_006fe240(longlong param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  char local_4d;
  int local_4c;
  int local_48 [2];
  int local_40;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x518);
  iVar7 = 0;
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x4b0) + 0x10);
  local_4c = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4b0),local_4c);
      iVar8 = *(int *)(lVar4 + 0x98);
      if (((*(ushort *)(*(longlong *)(param_1 + 0xa0) + 0x34) & 0x10) != 0) ||
         (*(char *)(lVar4 + 0xa9) != '\0')) {
        cVar1 = FUN_004113d0(lVar4,&PTR_FUN_006cb0d0);
        if ((cVar1 == '\0') ||
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x4b0) + 0x10) + -1 <= local_4c))
        {
          local_4d = '\0';
        }
        else if (*(longlong *)(param_1 + 0x78) == 0) {
          local_4d = *(char *)(lVar4 + 0x339);
        }
        else {
          local_4d = FUN_004b0f00(*(undefined8 *)(param_1 + 0x78),local_4c);
        }
        uVar5 = FUN_004113d0(lVar4,&PTR_FUN_006cb0d0);
        if ((char)uVar5 == '\0') {
LAB_006fe45c:
          uVar5 = FUN_004113d0(lVar4,&PTR_FUN_006cb0d0);
          if ((char)uVar5 != '\0') {
            if (*(byte *)(lVar4 + 0x33a) < 8) {
              bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                        (*(byte *)(lVar4 + 0x33a) & 0x1f) & 4U) != 0;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              lVar4 = FUN_0064fcf0(*(undefined8 *)(param_1 + 0xa0),0x433,(longlong)local_4c,local_48
                                  );
              if (lVar4 == 0) {
                iVar8 = iVar8 + 0xd;
              }
              else {
                iVar8 = local_40 - local_48[0];
              }
            }
          }
          if (*param_2 < iVar6 + iVar8) {
            *param_2 = iVar6 + iVar8;
          }
          iVar2 = iVar7 + *(int *)(*(longlong *)(param_1 + 0xa0) + 0x4a8);
          if (*param_3 < iVar2) {
            *param_3 = iVar2;
          }
        }
        else {
          if (*(byte *)(lVar4 + 0x33a) < 8) {
            bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                      (*(byte *)(lVar4 + 0x33a) & 0x1f) & 0x18U) != 0;
          }
          else {
            bVar10 = false;
          }
          if (!bVar10) goto LAB_006fe45c;
          iVar2 = FUN_006d3e90();
          if ((iVar2 < 0x40047) ||
             ((iVar2 = iVar8, *(char *)(*(longlong *)(param_1 + 0xa0) + 0x4de) == '\0' &&
              (iVar3 = FUN_006d3e90(), 0x40047 < iVar3)))) {
            iVar2 = (iVar8 * 2) / 3;
          }
          if ((local_4d == '\0') ||
             (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x4b0) + 0x10) + -1 <= local_4c
             )) {
            if (*param_2 < iVar6 + iVar8) {
              *param_2 = iVar6 + iVar8;
            }
          }
          else {
            iVar3 = iVar7 + *(int *)(*(longlong *)(param_1 + 0xa0) + 0x4a8) + iVar2;
            if (*param_3 < iVar3) {
              *param_3 = iVar3;
            }
          }
          if (local_4d != '\0') {
            iVar7 = iVar7 + iVar2;
          }
        }
        if (local_4d == '\0') {
          iVar6 = iVar6 + iVar8;
        }
        else {
          iVar6 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x518);
          iVar7 = iVar7 + *(int *)(*(longlong *)(param_1 + 0xa0) + 0x4a8);
        }
      }
      local_4c = local_4c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((0 < *param_3) && (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x4de) == '\0')) {
    *param_3 = *param_3 + 2;
  }
  return;
}


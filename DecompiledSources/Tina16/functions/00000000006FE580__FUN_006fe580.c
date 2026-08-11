/* Ghidra address: 006fe580 */
/* Ghidra symbol: FUN_006fe580 */


int FUN_006fe580(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int local_3c;
  
  local_3c = 1;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x518);
  iVar5 = 0;
  do {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x4b0);
    if (*(int *)(lVar2 + 0x10) <= iVar5) {
      return local_3c;
    }
    lVar2 = FUN_004aeac0(lVar2,iVar5);
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_006cb0d0);
    if (cVar1 != '\0') {
      FUN_004b0e80(*(undefined8 *)(param_1 + 0x78),iVar5,0);
    }
    if (((*(ushort *)(*(longlong *)(param_1 + 0xa0) + 0x34) & 0x10) != 0) ||
       (*(char *)(lVar2 + 0xa9) != '\0')) {
      if (param_2 < iVar7 + *(int *)(lVar2 + 0x98)) {
        uVar3 = FUN_004113d0(lVar2,&PTR_FUN_006cb0d0);
        if ((char)uVar3 != '\0') {
          if (*(byte *)(lVar2 + 0x33a) < 8) {
            bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) <<
                     (*(byte *)(lVar2 + 0x33a) & 0x1f) & 0x18U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) goto LAB_006fe813;
        }
        bVar8 = false;
        iVar6 = iVar5;
        if (-1 < iVar5) {
          do {
            uVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4b0),iVar6);
            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006cb0d0);
            if (cVar1 != '\0') {
              lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4b0),iVar6);
              if (((*(ushort *)(lVar4 + 0x34) & 0x10) != 0) || (*(char *)(lVar4 + 0xa9) != '\0')) {
                if (*(byte *)(lVar4 + 0x33a) < 8) {
                  bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar4 >> 8),1) <<
                           (*(byte *)(lVar4 + 0x33a) & 0x1f) & 0x18U) != 0;
                }
                else {
                  bVar9 = false;
                }
                if (bVar9) {
                  cVar1 = FUN_004b0f00(*(undefined8 *)(param_1 + 0x78),iVar6);
                  if (cVar1 == '\0') {
                    bVar8 = true;
                    iVar7 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x518);
                    FUN_004b0e80(*(undefined8 *)(param_1 + 0x78),iVar6,1);
                    local_3c = local_3c + 1;
                    iVar5 = iVar6;
                  }
                  break;
                }
              }
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != -1);
        }
        if (!bVar8) {
          iVar6 = iVar5 + -1;
          if (-1 < iVar6) {
            do {
              uVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4b0),iVar6);
              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006cb0d0);
              if (cVar1 != '\0') {
                lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4b0),iVar6);
                if (((*(ushort *)(lVar4 + 0x34) & 0x10) != 0) || (*(char *)(lVar4 + 0xa9) != '\0'))
                {
                  cVar1 = FUN_004b0f00(*(undefined8 *)(param_1 + 0x78),iVar6);
                  if (cVar1 == '\0') {
                    bVar8 = true;
                    iVar7 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x518);
                    FUN_004b0e80(*(undefined8 *)(param_1 + 0x78),iVar6,1);
                    local_3c = local_3c + 1;
                    iVar5 = iVar6;
                  }
                  break;
                }
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != -1);
          }
          if (!bVar8) {
            iVar7 = iVar7 + *(int *)(lVar2 + 0x98);
          }
        }
      }
      else {
LAB_006fe813:
        iVar7 = iVar7 + *(int *)(lVar2 + 0x98);
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


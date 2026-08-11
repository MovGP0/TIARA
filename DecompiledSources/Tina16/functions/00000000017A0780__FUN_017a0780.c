/* Ghidra address: 017a0780 */
/* Ghidra symbol: FUN_017a0780 */


void FUN_017a0780(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  
  iVar6 = 0;
  local_2c = 0;
  iVar5 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  if (iVar7 - 1U < 0x80000000) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
      cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017aad48);
      if (cVar2 == '\0') {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
        if (*(int *)(lVar4 + 0x18) < local_2c) {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          local_2c = *(int *)(lVar4 + 0x18);
        }
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
        cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017a8a38);
        if ((cVar2 != '\0') &&
           (lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6),
           *(int *)(lVar4 + 0x48) < local_2c)) {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          local_2c = *(int *)(lVar4 + 0x48);
        }
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
        if (*(int *)(lVar4 + 0x1c) < iVar5) {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          iVar5 = *(int *)(lVar4 + 0x1c);
        }
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
        cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017a8a38);
        if ((cVar2 != '\0') &&
           (lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6),
           *(int *)(lVar4 + 0x4c) < iVar5)) {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          iVar5 = *(int *)(lVar4 + 0x4c);
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((local_2c < 0) || (iVar5 < 0)) {
    if (local_2c < 0) {
      local_2c = local_2c + -0x10;
    }
    if (iVar5 < 0) {
      iVar5 = iVar5 + -0x10;
    }
    iVar6 = 0;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    if (-1 < iVar7 + -1) {
      do {
        if (local_2c < 0) {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          iVar8 = -local_2c;
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + iVar8;
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017a8a38);
          if (cVar2 != '\0') {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
            *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + iVar8;
          }
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017ab8b8);
          if (cVar2 != '\0') {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
            *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + iVar8;
          }
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017a9fa8);
          if (cVar2 != '\0') {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
            iVar8 = *(int *)(lVar4 + 0x60);
            iVar9 = 0;
            if (-1 < iVar8 + -1) {
              do {
                lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
                piVar1 = (int *)(*(longlong *)(lVar4 + 0x58) + (longlong)iVar9 * 8);
                *piVar1 = *piVar1 - local_2c;
                iVar9 = iVar9 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
        }
        if (iVar5 < 0) {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          iVar8 = -iVar5;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar8;
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017a8a38);
          if (cVar2 != '\0') {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
            *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + iVar8;
          }
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017ab8b8);
          if (cVar2 != '\0') {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
            *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + iVar8;
          }
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017a9fa8);
          if (cVar2 != '\0') {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
            iVar8 = *(int *)(lVar4 + 0x60);
            iVar9 = 0;
            if (-1 < iVar8 + -1) {
              do {
                lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
                piVar1 = (int *)(*(longlong *)(lVar4 + 0x58) + 4 + (longlong)iVar9 * 8);
                *piVar1 = *piVar1 - iVar5;
                iVar9 = iVar9 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}


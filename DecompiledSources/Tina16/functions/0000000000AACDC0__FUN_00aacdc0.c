/* Ghidra address: 00aacdc0 */
/* Ghidra symbol: FUN_00aacdc0 */


void FUN_00aacdc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_44;
  int local_40;
  
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x168) + 0x10);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
  local_44 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_40 = 0;
      iVar7 = iVar6;
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),local_40);
          if ((local_44 < *(int *)(lVar2 + 0x10)) &&
             (lVar2 = FUN_004aeac0(lVar2,local_44), lVar2 != 0)) {
            iVar8 = *(int *)(lVar2 + 0xc);
            if (iVar6 - local_40 <= *(int *)(lVar2 + 0xc)) {
              iVar8 = iVar6 - local_40;
            }
            *(int *)(lVar2 + 0xc) = iVar8;
            if (1 < iVar8) {
              iVar1 = local_40 + 1;
              iVar8 = local_40 + iVar8 + -1;
              if (iVar1 <= iVar8) {
                iVar8 = (iVar8 - iVar1) + 1;
                do {
                  while (lVar2 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168)
                                              ,iVar1), *(int *)(lVar2 + 0x10) < local_44) {
                    uVar3 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),
                                         iVar1);
                    uVar4 = FUN_00aacbb0(param_1,0);
                    FUN_00aab2c0(uVar3,uVar4);
                  }
                  lVar2 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),iVar1)
                  ;
                  if (*(int *)(lVar2 + 0x10) < *(int *)(*(longlong *)(param_1 + 0x70) + 0x128)) {
                    uVar3 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),
                                         iVar1);
                    uVar4 = FUN_00aacbb0(param_1,0);
                    FUN_004aec30(uVar3,local_44,uVar4);
                  }
                  iVar1 = iVar1 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
          }
          local_40 = local_40 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_44 = local_44 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x128) = 0;
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x168) + 0x10);
  local_40 = 0;
  if (-1 < iVar6 + -1) {
    do {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
      lVar2 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),local_40);
      iVar7 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) < iVar5) {
        iVar7 = iVar5;
      }
      *(int *)(*(longlong *)(param_1 + 0x70) + 0x128) = iVar7;
      local_40 = local_40 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


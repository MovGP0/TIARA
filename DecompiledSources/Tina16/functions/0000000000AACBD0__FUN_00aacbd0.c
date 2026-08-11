/* Ghidra address: 00aacbd0 */
/* Ghidra symbol: FUN_00aacbd0 */


void FUN_00aacbd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_44;
  int local_40;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x128) = 0;
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x168) + 0x10);
  local_40 = 0;
  iVar7 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),local_40);
      FUN_00aab410(lVar4);
      local_44 = *(int *)(lVar4 + 0x10) + -1;
      if (-1 < local_44) {
        do {
          lVar5 = FUN_004aeac0(lVar4,local_44);
          FUN_00aa9b00(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x134),
                       *(undefined8 *)(lVar4 + 0x38),lVar4 + 0x40,
                       0 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x174));
          if ((*(char *)(*(longlong *)(param_1 + 0x70) + 0x150) != '\0') &&
             (*(char *)(*(longlong *)(lVar5 + 0x80) + 0x40) == '\0')) {
            lVar2 = *(longlong *)(lVar5 + 0x80);
            *(undefined1 *)(lVar2 + 0x40) = 1;
            *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x154);
          }
          iVar3 = *(int *)(lVar5 + 0xc);
          if (iVar1 - local_40 <= *(int *)(lVar5 + 0xc)) {
            iVar3 = iVar1 - local_40;
          }
          *(int *)(lVar5 + 0xc) = iVar3;
          iVar3 = local_44 + 1;
          iVar8 = local_44 + *(int *)(lVar5 + 8) + -1;
          if (iVar3 <= iVar8) {
            iVar8 = (iVar8 - iVar3) + 1;
            do {
              if (*(int *)(lVar5 + 0xc) < 2) {
                uVar6 = FUN_00aacbb0(param_1,1);
                FUN_004aec30(lVar4,iVar3,uVar6);
              }
              else {
                uVar6 = FUN_00aacbb0(param_1,*(int *)(lVar5 + 0xc));
                FUN_004aec30(lVar4,iVar3,uVar6);
              }
              iVar3 = iVar3 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          local_44 = local_44 + -1;
        } while (local_44 != -1);
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
      if (iVar3 <= *(int *)(lVar4 + 0x10)) {
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      *(int *)(*(longlong *)(param_1 + 0x70) + 0x128) = iVar3;
      local_40 = local_40 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}


/* Ghidra address: 00c5f900 */
/* Ghidra symbol: FUN_00c5f900 */


bool FUN_00c5f900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  
  bVar8 = false;
  if (*(char *)(param_1 + 0x2b) == '\0') {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      FUN_00c5f500(param_1);
    }
    FUN_017954b0(*(undefined8 *)(param_1 + 0x10),param_4,param_5,&local_2c,&local_30);
    if (*(int *)(param_1 + 0x20) == -1) {
      local_2c = (local_2c + 4) / 8 << 3;
      local_30 = (local_30 + 4) / 8 << 3;
      *(int *)(param_1 + 0x20) = local_2c;
      *(int *)(param_1 + 0x24) = local_30;
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),0);
      local_38 = (int)*(undefined8 *)(lVar3 + 0x18);
      local_38 = local_2c - local_38;
      iStack_34 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
      iStack_34 = local_30 - iStack_34;
      iVar2 = 0;
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
      if (-1 < iVar7 + -1) {
        do {
          lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
          uVar5 = FUN_00498310(local_38 + *(int *)(lVar3 + 0x10),iStack_34 + *(int *)(lVar4 + 0x14))
          ;
          lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
          *(undefined8 *)(lVar3 + 0x10) = uVar5;
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      local_2c = local_2c - *(int *)(param_1 + 0x20);
      local_30 = local_30 - *(int *)(param_1 + 0x24);
    }
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x990) + 0x328) != '\0') {
      local_2c = ((local_2c + 2) / 4) * 4;
      local_30 = ((local_30 + 2) / 4) * 4;
    }
    iVar2 = 0;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (-1 < iVar7 + -1) {
      do {
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
        cVar1 = FUN_004113d0(uVar5,&PTR_FUN_017a79c0);
        if ((cVar1 != '\0') &&
           (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2),
           *(int *)(lVar3 + 0x24) == -1)) {
          local_2c = (local_2c + 4) / 8 << 3;
          local_30 = (local_30 + 4) / 8 << 3;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar2 = 0;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (-1 < iVar7 + -1) {
      do {
        plVar6 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
        (**(code **)(*plVar6 + 0x98))
                  (plVar6,*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x948) + 0x310),local_2c,
                   local_30);
        iVar2 = iVar2 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    bVar8 = *(char *)(param_1 + 0x2c) == '\0';
  }
  return bVar8;
}


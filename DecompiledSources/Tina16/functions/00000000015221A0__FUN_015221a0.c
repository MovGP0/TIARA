/* Ghidra address: 015221a0 */
/* Ghidra symbol: FUN_015221a0 */


void FUN_015221a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  
  *(undefined2 *)(param_3 + 0x19c2a) = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  iVar10 = *(int *)(lVar1 + 0x10);
  local_38 = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar6 = FUN_01d347d0(lVar1,local_38);
      cVar2 = FUN_004113d0(uVar6,&PTR_FUN_01cb4260);
      if (cVar2 == '\0') {
        uVar6 = FUN_01d347d0(lVar1,local_38);
        sVar3 = FUN_01cc1840(uVar6);
        *(short *)(param_3 + 0x19c2a) = *(short *)(param_3 + 0x19c2a) + sVar3;
      }
      else {
        *(short *)(param_3 + 0x19c2a) = *(short *)(param_3 + 0x19c2a) + 1;
      }
      local_38 = local_38 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 8);
    iVar10 = *(int *)(lVar1 + 0x10);
    local_38 = 0;
    if (-1 < iVar10 + -1) {
      do {
        uVar6 = FUN_01d347d0(lVar1,local_38);
        cVar2 = FUN_004113d0(uVar6,&PTR_FUN_01cb4260);
        if (cVar2 == '\0') {
          uVar6 = FUN_01d347d0(lVar1,local_38);
          sVar3 = FUN_01cc1840(uVar6);
          *(short *)(param_3 + 0x19c2a) = *(short *)(param_3 + 0x19c2a) + sVar3;
        }
        else {
          *(short *)(param_3 + 0x19c2a) = *(short *)(param_3 + 0x19c2a) + 1;
        }
        local_38 = local_38 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  uVar6 = FUN_004095c0((uint)*(ushort *)(param_3 + 0x19c2a) * 2);
  *(undefined8 *)(param_3 + 0x19c30) = uVar6;
  lVar1 = *(longlong *)(param_1 + 8);
  iVar9 = 0;
  iVar10 = *(int *)(lVar1 + 0x10);
  local_38 = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar6 = FUN_01d347d0(lVar1,local_38);
      cVar2 = FUN_004113d0(uVar6,&PTR_FUN_01cb4260);
      if (cVar2 == '\0') {
        lVar7 = FUN_01d347d0(lVar1,local_38);
        iVar5 = FUN_01cc1840();
        local_34 = 0;
        if (-1 < iVar5 + -1) {
          do {
            lVar8 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x38),local_34);
            uVar4 = FUN_01aa8f70(param_3,*(undefined4 *)(lVar8 + 0x38));
            *(undefined2 *)(*(longlong *)(param_3 + 0x19c30) + -2 + (longlong)(iVar9 + 1) * 2) =
                 uVar4;
            iVar9 = iVar9 + 1;
            local_34 = local_34 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      else {
        lVar7 = FUN_01d347d0(lVar1,local_38);
        uVar4 = FUN_01aa8f70(param_3,*(undefined4 *)(lVar7 + 0x38));
        *(undefined2 *)(*(longlong *)(param_3 + 0x19c30) + -2 + (longlong)(iVar9 + 1) * 2) = uVar4;
        iVar9 = iVar9 + 1;
      }
      local_38 = local_38 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 8);
    iVar10 = *(int *)(lVar1 + 0x10);
    local_38 = 0;
    if (-1 < iVar10 + -1) {
      do {
        uVar6 = FUN_01d347d0(lVar1,local_38);
        cVar2 = FUN_004113d0(uVar6,&PTR_FUN_01cb4260);
        if (cVar2 == '\0') {
          lVar7 = FUN_01d347d0(lVar1,local_38);
          iVar5 = FUN_01cc1840();
          local_34 = 0;
          if (-1 < iVar5 + -1) {
            do {
              lVar8 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x38),local_34);
              uVar4 = FUN_01aa8f70(param_3,*(undefined4 *)(lVar8 + 0x38));
              *(undefined2 *)(*(longlong *)(param_3 + 0x19c30) + -2 + (longlong)(iVar9 + 1) * 2) =
                   uVar4;
              iVar9 = iVar9 + 1;
              local_34 = local_34 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          lVar7 = FUN_01d347d0(lVar1,local_38);
          uVar4 = FUN_01aa8f70(param_3,*(undefined4 *)(lVar7 + 0x38));
          *(undefined2 *)(*(longlong *)(param_3 + 0x19c30) + -2 + (longlong)(iVar9 + 1) * 2) = uVar4
          ;
          iVar9 = iVar9 + 1;
        }
        local_38 = local_38 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}


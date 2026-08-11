/* Ghidra address: 01500350 */
/* Ghidra symbol: FUN_01500350 */


void FUN_01500350(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int local_40;
  int local_3c;
  
  if (*PTR_DAT_02003fc8 == '\0') {
    _Scan_node_values(*(undefined8 *)(param_1 + 0x798),param_5);
  }
  else {
    FUN_01aad5c0(param_4,param_5);
  }
  lVar1 = *(longlong *)(param_2 + 8);
  iVar10 = *(int *)(lVar1 + 0x10);
  local_40 = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar6 = FUN_01d347d0(lVar1,local_40);
      cVar2 = FUN_004113d0(uVar6,&PTR_FUN_01cb4260);
      if (cVar2 == '\0') {
        lVar7 = FUN_01d347d0(lVar1,local_40);
        iVar5 = FUN_01cc1840(lVar7);
        lVar8 = FUN_00409570((longlong)iVar5);
        iVar5 = FUN_01cc1840();
        local_3c = 0;
        if (-1 < iVar5 + -1) {
          do {
            lVar9 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x38),local_3c);
            if (*PTR_DAT_02003fc8 == '\0') {
              uVar4 = *(uint *)(lVar9 + 0x38);
            }
            else {
              uVar3 = FUN_01aa8f70(param_4,*(undefined4 *)(lVar9 + 0x38));
              uVar4 = (uint)uVar3;
            }
            *(undefined1 *)(lVar8 + -1 + (longlong)(local_3c + 1)) =
                 *(undefined1 *)(param_5 + (int)uVar4);
            local_3c = local_3c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_01cc5750(param_2,local_40,param_3,lVar8);
        FUN_004095f0(lVar8);
      }
      else {
        lVar7 = FUN_01d347d0(lVar1,local_40);
        if (*PTR_DAT_02003fc8 == '\0') {
          uVar4 = *(uint *)(lVar7 + 0x38);
        }
        else {
          uVar3 = FUN_01aa8f70(param_4,*(undefined4 *)(lVar7 + 0x38));
          uVar4 = (uint)uVar3;
        }
        FUN_01cc56d0(param_2,local_40,param_3,*(undefined1 *)(param_5 + (int)uVar4));
      }
      local_40 = local_40 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}


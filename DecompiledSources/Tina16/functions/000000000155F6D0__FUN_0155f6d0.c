/* Ghidra address: 0155f6d0 */
/* Ghidra symbol: FUN_0155f6d0 */


void FUN_0155f6d0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int local_78;
  int local_70;
  int local_6c;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  bVar2 = false;
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
  local_78 = 0;
  if (-1 < iVar12 + -1) {
    do {
      lVar7 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x8f0),local_78);
      cVar4 = FUN_0154cf30(param_1,*(undefined8 *)(lVar7 + 0x40));
      if ((cVar4 == '\0') && (cVar4 = FUN_01d3f1d0(*(undefined8 *)(lVar7 + 0x40)), cVar4 == '\0')) {
        lVar8 = FUN_015720c0(*(undefined8 *)(lVar7 + 0x28));
        if (lVar8 == 0) {
          FUN_016fd940(L"Internal error: TConvertVHDL.collect_pins_not_connected");
        }
        FUN_00414b50(&local_40,*(undefined8 *)PTR_PTR_02001278);
        FUN_01571920(lVar8,&local_30);
        if (((local_30 == 0) || (*(int *)(lVar8 + 0x30) == 0)) && (!bVar2)) {
          uVar9 = FUN_01572330(&DAT_0156f3c0,1,&DAT_0155fb34,*(int *)(lVar8 + 0x30),local_40,
                               *(undefined4 *)(lVar8 + 0x54));
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x980),uVar9);
          bVar2 = true;
        }
      }
      iVar11 = *(int *)(*(longlong *)(lVar7 + 0x28) + 0x10);
      local_70 = 0;
      if (-1 < iVar11 + -1) {
        do {
          lVar8 = FUN_01571ee0(*(undefined8 *)(lVar7 + 0x28),local_70);
          FUN_01571920(lVar8,&local_30);
          iVar1 = *(int *)(lVar8 + 0x30);
          if (iVar1 == 1) {
            *(undefined4 *)(param_1 + 0x928) = 1;
          }
          FUN_00414b50(&local_40,*(undefined8 *)PTR_PTR_02001278);
          if (*(longlong *)(param_1 + 0x938) != 0) {
            FUN_00e0f210(*(longlong *)(param_1 + 0x938),iVar1,&local_40);
          }
          if (((local_30 == 0) && (*(int *)(lVar8 + 0x30) != 0)) || (*(int *)(lVar8 + 0x30) == 0)) {
            bVar3 = false;
            if ((*(int *)(lVar8 + 0x30) == 0) &&
               (cVar4 = FUN_015fd300(lVar8,local_40), cVar4 == '\0')) {
              iVar5 = FUN_00416db0(local_30,*(undefined8 *)PTR_PTR_02005730);
              if (iVar5 != 0) {
                FUN_00414b50(&local_30,&DAT_0155fb34);
              }
            }
            else {
              FUN_01571a60(lVar8,&local_30);
            }
            FUN_00414b50(&local_38,local_30);
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x980) + 0x10);
            local_6c = 0;
            if (-1 < iVar5 + -1) {
              do {
                lVar10 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x980),local_6c);
                iVar6 = FUN_00416db0(*(undefined8 *)(lVar10 + 8),local_38);
                if (iVar6 == 0) {
                  bVar3 = true;
                  break;
                }
                local_6c = local_6c + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            if (!bVar3) {
              FUN_0043e1a0(local_50,local_38);
              iVar5 = FUN_00416db0(local_50[0],&LAB_0155fb48);
              if (iVar5 == 0) {
                bVar2 = true;
              }
              uVar9 = FUN_01572330(&DAT_0156f3c0,1,local_38,iVar1,local_40,
                                   *(undefined4 *)(lVar8 + 0x54));
              FUN_004ae7e0(*(undefined8 *)(param_1 + 0x980),uVar9);
            }
          }
          else {
            FUN_00414ad0(lVar8 + 0x20,local_40);
          }
          local_70 = local_70 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_78 = local_78 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}


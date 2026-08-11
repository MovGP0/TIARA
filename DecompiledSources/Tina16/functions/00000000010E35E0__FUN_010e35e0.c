/* Ghidra address: 010e35e0 */
/* Ghidra symbol: FUN_010e35e0 */


void FUN_010e35e0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int local_120;
  int local_11c;
  undefined8 local_108;
  undefined8 local_100 [21];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  local_108 = 0;
  local_100[0] = 0;
  if ((param_2 != param_3) && (*(char *)(param_1 + 0x825) == '\0')) {
    *(undefined1 *)(param_1 + 0x825) = 1;
    uVar10 = FUN_00b90660(((double)param_2 / (double)param_3) * *(double *)(param_1 + 0x8b8),
                          0x4010000000000000,0x3fe5555555555555);
    *(undefined8 *)(param_1 + 0x8b8) = uVar10;
    local_11c = FUN_004d3e30();
    local_120 = 0;
    if (-1 < local_11c + -1) {
      do {
        lVar9 = 0;
        uVar10 = FUN_004d3de0(param_1,local_120);
        cVar4 = FUN_004113d0(uVar10,&PTR_FUN_0066b990);
        if (cVar4 != '\0') {
          uVar10 = FUN_004d3de0(param_1,local_120);
          lVar8 = FUN_004113f0(uVar10,&PTR_FUN_0066b990);
          if (*(char *)(lVar8 + 0xab) == '\0') {
            lVar9 = *(longlong *)(lVar8 + 0xb8);
          }
        }
        uVar10 = FUN_004d3de0(param_1,local_120);
        cVar4 = FUN_004113d0(uVar10,&PTR_FUN_00669e80);
        if (cVar4 != '\0') {
          uVar10 = FUN_004d3de0(param_1,local_120);
          lVar8 = FUN_004113f0(uVar10,&PTR_FUN_00669e80);
          if (*(char *)(lVar8 + 0xab) == '\0') {
            lVar9 = *(longlong *)(lVar8 + 0xb8);
          }
        }
        uVar10 = FUN_004d3de0(param_1,local_120);
        cVar4 = FUN_004113d0(uVar10,&PTR_FUN_006686f0);
        if (cVar4 != '\0') {
          uVar10 = FUN_004d3de0(param_1,local_120);
          lVar8 = FUN_004113f0(uVar10,&PTR_FUN_006686f0);
          if (*(char *)(lVar8 + 0xab) == '\0') {
            lVar9 = *(longlong *)(lVar8 + 0xb8);
          }
        }
        uVar10 = FUN_004d3de0(param_1,local_120);
        cVar4 = FUN_004113d0(uVar10,&PTR_FUN_00670158);
        if (cVar4 != '\0') {
          uVar10 = FUN_004d3de0(param_1,local_120);
          lVar8 = FUN_004113f0(uVar10,&PTR_FUN_00670158);
          if (*(char *)(lVar8 + 0xab) == '\0') {
            lVar9 = *(longlong *)(lVar8 + 0xb8);
          }
        }
        uVar10 = FUN_004d3de0(param_1,local_120);
        cVar4 = FUN_004113d0(uVar10,&PTR_FUN_008228b0);
        if (cVar4 != '\0') {
          uVar10 = FUN_004d3de0(param_1,local_120);
          lVar8 = FUN_004113f0(uVar10,&PTR_FUN_008228b0);
          FUN_0082a4a0(lVar8);
          if (*(char *)(lVar8 + 0xab) == '\0') {
            lVar9 = *(longlong *)(lVar8 + 0xb8);
          }
        }
        uVar10 = FUN_004d3de0(param_1,local_120);
        cVar4 = FUN_004113d0(uVar10,&PTR_FUN_007f0370);
        if (cVar4 == '\0') {
          uVar10 = FUN_004d3de0(param_1,local_120);
          cVar4 = FUN_004113d0(uVar10,&PTR_FUN_0063d930);
          if (cVar4 != '\0') {
            if (lVar9 != 0) {
              lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x828),local_120);
              uVar10 = *(undefined8 *)(lVar8 + 8);
              iVar5 = FUN_005fce00(uVar10);
              FUN_0040c770((double)iVar5 * *(double *)(param_1 + 0x8b8));
              iVar5 = FUN_005fce00(uVar10);
              if (7.0 < (double)iVar5 * *(double *)(param_1 + 0x8b8)) {
                FUN_005fccd0(uVar10,local_100);
                FUN_005fcd80(lVar9,local_100[0]);
              }
              else {
                FUN_005fcd80(lVar9,L"Small Fonts");
              }
              iVar5 = FUN_005fce00(uVar10);
              uVar6 = FUN_0040c770((double)iVar5 * *(double *)(param_1 + 0x8b8));
              FUN_005fce30(lVar9,uVar6);
            }
            lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x828),local_120);
            local_48 = *(undefined8 *)(lVar9 + 0x10);
            local_40 = *(undefined8 *)(lVar9 + 0x18);
            uVar10 = FUN_004d3de0(param_1,local_120);
            lVar9 = FUN_004113f0(uVar10,&PTR_FUN_0063d930);
            iVar5 = (int)local_48;
            uVar6 = FUN_0040c770((double)(int)local_48 * *(double *)(param_1 + 0x8b8));
            iVar2 = local_48._4_4_;
            uVar7 = FUN_0040c770((double)local_48._4_4_ * *(double *)(param_1 + 0x8b8));
            iVar3 = (int)local_40;
            FUN_0040c770((double)((int)local_40 - iVar5) * *(double *)(param_1 + 0x8b8));
            iVar5 = local_40._4_4_;
            FUN_0040c770((double)(local_40._4_4_ - iVar2) * *(double *)(param_1 + 0x8b8));
            local_58 = uVar6;
            local_50 = FUN_0040c770((double)iVar3 * *(double *)(param_1 + 0x8b8));
            local_54 = uVar7;
            local_4c = FUN_0040c770((double)iVar5 * *(double *)(param_1 + 0x8b8));
            FUN_0064d040(lVar9,&local_58);
            iVar5 = FUN_00416db0(*(undefined8 *)(lVar9 + 0x10),L"AutoBtn");
            if (iVar5 == 0) {
              lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x828),local_120);
              local_48 = *(undefined8 *)(lVar9 + 0x10);
              local_40 = *(undefined8 *)(lVar9 + 0x18);
            }
          }
        }
        local_120 = local_120 + 1;
        local_11c = local_11c + -1;
      } while (local_11c != 0);
    }
    uVar10 = *(undefined8 *)(param_1 + 0xb8);
    lVar9 = FUN_004aeac0(*(longlong *)(param_1 + 0x828),
                         *(int *)(*(longlong *)(param_1 + 0x828) + 0x10) + -1);
    uVar1 = *(undefined8 *)(lVar9 + 8);
    iVar5 = FUN_005fce00(uVar1);
    FUN_0040c770((double)iVar5 * *(double *)(param_1 + 0x8b8));
    iVar5 = FUN_005fce00(uVar1);
    if (7.0 < (double)iVar5 * *(double *)(param_1 + 0x8b8)) {
      FUN_005fccd0(uVar1,&local_108);
      FUN_005fcd80(uVar10,local_108);
    }
    else {
      FUN_005fcd80(uVar10,L"Small Fonts");
    }
    iVar5 = FUN_005fce00(uVar1);
    uVar6 = FUN_0040c770((double)iVar5 * *(double *)(param_1 + 0x8b8));
    FUN_005fce30(uVar10,uVar6);
    *(undefined1 *)(param_1 + 0x825) = 0;
  }
  FUN_00414560(&local_108,2);
  return;
}


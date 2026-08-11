/* Ghidra address: 01ad31e0 */
/* Ghidra symbol: FUN_01ad31e0 */


void FUN_01ad31e0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  longlong local_e8;
  int local_e0;
  int local_dc;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50 [6];
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_50[0] = 0;
  local_f0 = 1;
  local_ec = 1;
  local_110 = param_1;
  local_108 = param_2;
  local_100 = param_3;
  FUN_00848a70(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),4);
  if (local_108 != 0) {
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),0,local_ec,&DAT_01ad3c6c);
    local_ec = local_ec + 1;
  }
  if (local_100 != 0) {
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),0,local_ec,&DAT_01ad3c7c);
    local_ec = local_ec + 1;
  }
  if ((local_108 != 0) && (local_100 != 0)) {
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),0,local_ec,&DAT_01ad3c8c);
    local_ec = local_ec + 1;
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbc8) + 0x80) != '\0') {
      FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),0,local_ec,L"Freq & Slope"
                  );
      local_ec = local_ec + 1;
    }
  }
  FUN_00848a70(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),local_ec);
  dVar7 = 1e+50;
  dVar8 = 1e+50;
  local_ec = 1;
  if (local_108 != 0) {
    dVar7 = (double)FUN_01abfb00(local_108);
    local_128 = CONCAT71(local_128._1_7_,1);
    FUN_00b8fd60(local_60,dVar7,*PTR_DAT_02005310,0);
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),1,local_ec,local_60[0]);
    local_ec = local_ec + 1;
  }
  if (local_100 != 0) {
    dVar8 = (double)FUN_01abfb00(local_100);
    local_128 = CONCAT71(local_128._1_7_,1);
    FUN_00b8fd60(&local_68,dVar8,*PTR_DAT_02005310,0);
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),1,local_ec,local_68);
    local_ec = local_ec + 1;
  }
  if ((local_108 != 0) && (local_100 != 0)) {
    local_128 = CONCAT71(local_128._1_7_,1);
    FUN_00b8fd60(&local_70,dVar8 - dVar7,*PTR_DAT_02005310,0);
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),1,local_ec,local_70);
    local_ec = local_ec + 1;
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbc8) + 0x80) != '\0') {
      dVar9 = (double)FUN_0040c850(dVar8 - dVar7);
      if (1e-12 <= dVar9) {
        dVar9 = (double)FUN_0040c850(dVar8 - dVar7);
        local_128 = CONCAT71(local_128._1_7_,1);
        FUN_00b8fd60(&local_78,1.0 / dVar9,*PTR_DAT_02005310,0);
        FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),1,local_ec,local_78);
      }
      else {
        FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),1,local_ec,&DAT_01ad3cc8
                    );
      }
    }
  }
  iVar2 = (**(code **)(**(longlong **)(local_110 + 0xd8) + 0x28))();
  local_e0 = iVar2 + -1;
  local_f8 = 0;
  if (-1 < local_e0) {
    do {
      local_e0 = iVar2;
      uVar3 = (**(code **)(**(longlong **)(local_110 + 0xd8) + 0x30))
                        (*(longlong **)(local_110 + 0xd8),local_f8);
      local_e8 = FUN_004113f0(uVar3,&DAT_01cdd500);
      lVar4 = (**(code **)(**(longlong **)(local_e8 + 0x70) + 0x30))
                        (*(longlong **)(local_e8 + 0x70),0);
      FUN_00414b50(local_50,*(undefined8 *)(lVar4 + 0xd8));
      iVar2 = FUN_004170c0(&DAT_01ad3cd8,local_50[0],1);
      FUN_00416dc0(local_50,local_50[0],1,iVar2 + -1);
      FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),1,0,local_50[0]);
      iVar2 = (**(code **)(**(longlong **)(local_e8 + 0x80) + 0x28))();
      local_dc = iVar2 + -1;
      local_f4 = 0;
      if (-1 < local_dc) {
        do {
          local_dc = iVar2;
          iVar2 = local_f0 + local_f4;
          if (*(int *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe40) + 0x4a4) < iVar2 + 2) {
            FUN_008483e0(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2 + 2);
          }
          local_ec = 1;
          uVar3 = (**(code **)(**(longlong **)(local_e8 + 0x80) + 0x30))
                            (*(longlong **)(local_e8 + 0x80),local_f4);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aae560);
          if (cVar1 == '\0') {
            uVar3 = (**(code **)(**(longlong **)(local_e8 + 0x80) + 0x30))
                              (*(longlong **)(local_e8 + 0x80),local_f4);
            plVar5 = (longlong *)FUN_01abda80(uVar3);
            uVar6 = FUN_01abdb20(uVar3);
            (**(code **)(*plVar5 + 0x10))(plVar5,uVar6,1);
            iVar2 = iVar2 + 1;
            FUN_01ab6de0(uVar3,&local_b8);
            FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,0,local_b8);
            if (local_108 != 0) {
              plVar5 = (longlong *)FUN_01abda80(uVar3);
              local_d8 = (double)(**(code **)(*plVar5 + 0x48))(plVar5,dVar7);
              FUN_01ad30b0(auStack_148,&local_c0,local_d8);
              FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,local_ec,
                           local_c0);
              local_ec = local_ec + 1;
            }
            if (local_100 != 0) {
              plVar5 = (longlong *)FUN_01abda80(uVar3);
              local_d0 = (double)(**(code **)(*plVar5 + 0x48))(plVar5,dVar8);
              FUN_01ad30b0(auStack_148,&local_c8,local_d0);
              FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,local_ec,
                           local_c8);
            }
          }
          else {
            lVar4 = (**(code **)(**(longlong **)(local_e8 + 0x80) + 0x30))
                              (*(longlong **)(local_e8 + 0x80),local_f4);
            plVar5 = (longlong *)FUN_01abda80(lVar4);
            uVar3 = FUN_01abdb20(lVar4);
            (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,1);
            iVar2 = iVar2 + 1;
            FUN_01ab2940(lVar4,&local_88);
            FUN_01abd400(&local_90,*(undefined8 *)(lVar4 + 200));
            local_128 = local_90;
            FUN_00416cd0(&local_80,3,local_88,&LAB_01ad3ce8);
            FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,0,local_80);
            if (local_108 != 0) {
              plVar5 = (longlong *)FUN_01abda80(lVar4);
              local_d8 = (double)(**(code **)(*plVar5 + 0x48))(plVar5,dVar7);
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_00b8fd60(&local_98,local_d8,*PTR_DAT_02005310,0);
              FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,local_ec,
                           local_98);
              local_ec = local_ec + 1;
            }
            if (local_100 != 0) {
              plVar5 = (longlong *)FUN_01abda80(lVar4);
              local_d0 = (double)(**(code **)(*plVar5 + 0x48))(plVar5,dVar8);
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_00b8fd60(&local_a0,local_d0,*PTR_DAT_02005310,0);
              FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,local_ec,
                           local_a0);
              local_ec = local_ec + 1;
            }
            if ((local_108 != 0) && (local_100 != 0)) {
              iVar2 = local_f0 + local_f4 + 1;
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_00b8fd60(&local_a8,local_d0 - local_d8,*PTR_DAT_02005310,0);
              FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,local_ec,
                           local_a8);
              local_ec = local_ec + 1;
              if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbc8) + 0x80) != '\0') {
                dVar9 = (double)FUN_0040c850(dVar8 - dVar7);
                if (1e-12 <= dVar9) {
                  local_128 = CONCAT71(local_128._1_7_,1);
                  FUN_00b8fd60(&local_b0,(local_d0 - local_d8) / (dVar8 - dVar7),*PTR_DAT_02005310,0
                              );
                  FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,local_ec
                               ,local_b0);
                }
                else {
                  FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe40),iVar2,local_ec
                               ,&DAT_01ad3cc8);
                }
              }
            }
          }
          local_f4 = local_f4 + 1;
          local_dc = local_dc + -1;
          iVar2 = local_dc;
        } while (local_dc != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(local_e8 + 0x80) + 0x28))
                        (*(longlong **)(local_e8 + 0x80));
      local_f0 = local_f0 + iVar2;
      local_f8 = local_f8 + 1;
      local_e0 = local_e0 + -1;
      iVar2 = local_e0;
    } while (local_e0 != 0);
  }
  FUN_00414560(&local_c8,0xe);
  FUN_00414480(local_50);
  return;
}


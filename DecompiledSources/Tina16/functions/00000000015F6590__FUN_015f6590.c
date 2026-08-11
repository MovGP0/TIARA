/* Ghidra address: 015f6590 */
/* Ghidra symbol: FUN_015f6590 */


void FUN_015f6590(undefined8 param_1,longlong param_2,char param_3,undefined1 param_4,
                 longlong param_5,char param_6,char param_7)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 local_res8 [4];
  longlong local_1b68;
  int local_1b50;
  int local_1b4c;
  int local_1b44;
  undefined8 local_1b40 [87];
  undefined8 local_1888;
  undefined8 local_1208;
  undefined8 local_1200;
  undefined8 local_11f8;
  undefined8 local_11f0;
  undefined8 local_11e8 [87];
  undefined8 local_f30;
  undefined1 local_ba8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined1 local_864 [1026];
  undefined1 local_462 [1026];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  
  local_ba8 = 0;
  puVar11 = local_1b40;
  for (lVar10 = 0x127; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_1200 = 0;
  local_1208 = 0;
  local_11f0 = 0;
  local_11f8 = 0;
  puVar11 = local_11e8;
  for (lVar10 = 0x127; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_8b0 = 0;
  local_8a8 = 0;
  local_8a0 = 0;
  local_898 = 0;
  local_890 = 0;
  local_888 = 0;
  local_880 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_870 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar5 = FUN_014cdd20(*(undefined8 *)(param_5 + 0xe8));
  uVar6 = FUN_014cdce0(*(undefined8 *)(param_5 + 0xe8));
  lVar10 = FUN_00f7f270(&DAT_00f7ec38,1);
  FUN_00f7f200(lVar10,local_res8[0],2);
  cVar2 = FUN_00f80160(lVar10,uVar6,param_5);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(longlong *)(lVar10 + 8) + 0x10);
    local_1b50 = 0;
    local_1b4c = 0;
    while (local_1b50 <= iVar1 + -1) {
      lVar7 = FUN_00f81cc0(*(undefined8 *)(lVar10 + 8),local_1b50);
      FUN_00f81490(lVar7,&local_60);
      uVar3 = 1;
      if (param_6 != '\0') {
        FUN_00f81470(lVar7,&local_890);
        FUN_00415dd0(&local_40,local_890,0);
        FUN_00416880(&local_898,local_40);
        iVar4 = FUN_004170c0(&DAT_015f6d6c,local_898);
        if (0 < iVar4) {
          FUN_00415ad0(&local_50,local_40,iVar4 + 3,0xff);
          FUN_00416880(&local_8a0,local_50);
          uVar3 = FUN_0040e860(local_8a0,&local_34);
          if (local_34 != 0) {
            uVar3 = 1;
          }
        }
      }
      else if (*(int *)(lVar7 + 0x20) < 0) {
        FUN_00f81470(lVar7,&local_888);
        FUN_00415dd0(&local_40,local_888,0);
      }
      else {
        FUN_00f81530(lVar7,&local_880);
        FUN_00415dd0(&local_40,local_880,0);
      }
      if (param_6 != '\0') {
        cVar2 = FUN_01563760(uVar5,uVar3);
        if (cVar2 != '\0') goto LAB_015f6941;
        local_1b50 = local_1b50 + 1;
      }
      else {
        FUN_00442620(local_462,local_60);
        FUN_00416ba0(&local_8a8,L"top_",local_60);
        FUN_00442620(local_864,local_8a8);
        cVar2 = _get_node_idx(uVar6,local_462);
        if ((cVar2 == '\0') || (cVar2 = FUN_01563760(uVar5,local_2c), cVar2 != '\0')) {
          cVar2 = _get_node_idx(uVar6,local_864);
          if ((cVar2 == '\0') || (cVar2 = FUN_01563760(uVar5,local_2c), cVar2 != '\0')) {
LAB_015f6941:
            FUN_015f15d0(&local_48,local_40);
            local_1b50 = local_1b50 + 1;
            iVar4 = FUN_00416db0(*(undefined8 *)(lVar7 + 0x18),&DAT_015f6d98);
            if ((iVar4 == 0) && (*(char *)(lVar7 + 0x38) == '\0')) {
              if (param_3 != '\0') {
                FUN_00416880(&local_8b0,local_48);
                local_1b68 = FUN_01cc34d0(*(undefined8 *)(param_2 + 8),local_8b0,uVar3,0);
                if (param_7 != '\0') {
                  FUN_01569cb0(uVar5,local_11e8);
                  FUN_01cc0ac0(local_1b68,0,local_f30);
                  *(undefined1 *)(local_1b68 + 0x19) = param_4;
                }
              }
              iVar4 = *(int *)(*(longlong *)(lVar7 + 0x30) + 0x10);
              local_1b44 = 0;
              if (-1 < iVar4 + -1) {
                do {
                  FUN_00f815d0(lVar7,local_1b44,&local_58,local_30);
                  FUN_01cc56d0(param_2,local_1b4c,local_58);
                  local_1b44 = local_1b44 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              local_1b4c = local_1b4c + 1;
            }
            else {
              iVar4 = FUN_00416db0(*(undefined8 *)(lVar7 + 0x18),&DAT_015f6da8);
              if (iVar4 == 0) {
                plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
                if (param_3 != '\0') {
                  iVar4 = *(int *)(lVar7 + 0x24);
                  local_1b44 = 0;
                  if (-1 < iVar4 + -1) {
                    do {
                      FUN_0043f750(&local_11f8,local_1b44);
                      FUN_00416ba0(&local_11f0,&DAT_015f6d6c,local_11f8);
                      (**(code **)(*plVar8 + 0x80))(plVar8,local_11f0,(longlong)local_1b44);
                      local_1b44 = local_1b44 + 1;
                      iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                  }
                  FUN_00416880(&local_1200,local_48);
                  FUN_00416880(&local_1208,local_48);
                  lVar9 = FUN_01cc35a0(*(undefined8 *)(param_2 + 8),local_1200,local_1208,plVar8,0);
                  *(undefined1 *)(lVar9 + 0x50) = 3;
                  FUN_00414480();
                  if (param_7 != '\0') {
                    FUN_01569cb0(uVar5,local_1b40);
                    FUN_01cc0ac0(local_1b68,0,local_1888);
                    *(undefined1 *)(local_1b68 + 0x19) = param_4;
                  }
                }
                iVar4 = *(int *)(*(longlong *)(lVar7 + 0x30) + 0x10);
                local_1b44 = 0;
                if (-1 < iVar4 + -1) {
                  do {
                    FUN_00f817a0(lVar7,local_1b44,&local_58,&local_878);
                    FUN_01cc5750(param_2,local_1b4c,local_58,local_878);
                    local_1b44 = local_1b44 + 1;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
                local_1b4c = local_1b4c + 1;
                FUN_00410f20(plVar8);
              }
            }
          }
          else {
            local_1b50 = local_1b50 + 1;
          }
        }
        else {
          local_1b50 = local_1b50 + 1;
        }
      }
    }
    FUN_00410f20(lVar10);
  }
  FUN_00417740(local_1b40,&DAT_01d0d0b8);
  FUN_00414560(&local_1208,4);
  FUN_00417740(local_11e8,&DAT_01d0d0b8);
  FUN_00414560(&local_8b0,7);
  FUN_00414480(&local_870);
  FUN_00414480(&local_60);
  FUN_00414590(&local_50,3);
  FUN_00414480(local_res8);
  return;
}


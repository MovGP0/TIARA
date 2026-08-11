/* Ghidra address: 01bf9980 */
/* Ghidra symbol: FUN_01bf9980 */


undefined1 FUN_01bf9980(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  ushort local_9e;
  int local_9c;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined1 local_61;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30 [2];
  
  local_b0 = auStack_f8;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_30[0] = 0;
  local_58 = 0;
  local_61 = 0;
  puVar1 = auStack_f8;
  if (*(char *)(param_1 + 0x30) != '\0') {
    puVar1 = auStack_f8;
    if (param_2 != '\0') {
      FUN_00414b50(local_30,*(undefined8 *)PTR_PTR_02005618);
      local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_60 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_44 = 0;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
      local_68 = 0;
      if (-1 < iVar8 + -1) {
        do {
          lVar5 = FUN_01bf9610(param_1,local_68);
          if (*(char *)(lVar5 + 0x58) != '\0') {
            lVar5 = FUN_01bf9610(param_1,local_68);
            iVar3 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x40),&DAT_01bfa2a4);
            if ((iVar3 != 0) &&
               (lVar5 = FUN_01bf9610(param_1,local_68), *(longlong *)(lVar5 + 0x40) != 0)) {
              lVar5 = FUN_01bf9610(param_1,local_68);
              FUN_007e8e80(&local_b8,*(undefined8 *)(lVar5 + 0x40));
              FUN_0043e130(&local_80,local_b8);
              if (local_80 == 0) {
                lVar5 = FUN_01bf9610(param_1,local_68);
                uVar6 = FUN_004b2070(param_1,local_68);
                (**(code **)(*local_60 + 0xd0))(local_60,0,*(undefined8 *)(lVar5 + 0x40),uVar6);
              }
              else {
                iVar3 = FUN_0044f900(local_80,*(undefined8 *)PTR_PTR_02005618);
                if ((iVar3 != 0) && (cVar2 = FUN_01bf9640(auStack_f8,local_80), cVar2 == '\0')) {
                  lVar5 = FUN_01bf9610(param_1,local_68);
                  lVar7 = FUN_01bf9610(param_1,local_68);
                  FUN_007e8d80(&local_c0,*(undefined8 *)(lVar7 + 0x40));
                  FUN_00414ad0(lVar5 + 0x40,local_c0);
                  lVar5 = FUN_01bf9610(param_1,local_68);
                  uVar6 = FUN_004b2070(param_1,local_68);
                  (**(code **)(*local_60 + 0xd0))(local_60,0,*(undefined8 *)(lVar5 + 0x40),uVar6);
                }
              }
            }
          }
          local_68 = local_68 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_00414b50(&local_90,local_30[0]);
      iVar8 = (**(code **)(*local_60 + 0x28))();
      local_6c = 0;
      if (-1 < iVar8 + -1) {
        do {
          FUN_00414b50(local_30,local_90);
          (**(code **)(*local_50 + 0x10))(local_50,local_60);
          (**(code **)(*local_40 + 0x90))(local_40);
          local_68 = (**(code **)(*local_50 + 0x28))(local_50);
          local_68 = local_68 + -1;
          if (-1 < local_68) {
LAB_01bf9d0c:
            (**(code **)(*local_50 + 0x18))(local_50,&local_88,local_68);
            local_70 = 1;
            do {
              local_9c = 0;
              if (local_88 != 0) {
                local_9c = *(int *)(local_88 + -4);
              }
              if (local_9c < local_70) goto code_r0x01bf9e67;
              local_9e = *(ushort *)(local_88 + -2 + (longlong)local_70 * 2);
              if ((local_9e < 0xd800) || (0xdfff < local_9e)) {
                FUN_00416dc0(&local_c8,local_88,local_70,1);
                FUN_0043e130(&local_80,local_c8);
                cVar2 = FUN_01bf9640(auStack_f8,local_80);
                if (cVar2 != '\0') goto code_r0x01bf9da6;
              }
              else {
                local_70 = local_70 + 1;
              }
              local_70 = local_70 + 1;
            } while( true );
          }
code_r0x01bf9e7c:
          iVar3 = (**(code **)(*local_40 + 0x28))(local_40);
          if (local_44 < iVar3) {
            FUN_01bf9690(auStack_f8);
          }
          iVar3 = (**(code **)(*local_50 + 0x28))(local_50);
          if (iVar3 < 1) break;
          iVar3 = (**(code **)(*local_50 + 0x28))();
          local_68 = 0;
          if (-1 < iVar3 + -1) {
            do {
              uVar6 = (**(code **)(*local_50 + 0x30))(local_50,local_68);
              local_74 = (**(code **)(*local_60 + 0xc0))(local_60,uVar6);
              iVar4 = (**(code **)(*local_60 + 0x28))(local_60);
              (**(code **)(*local_60 + 0xf8))(local_60,local_74,iVar4 + -1);
              local_68 = local_68 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (local_44 == 0) {
        FUN_01bf9690(auStack_f8);
      }
      iVar8 = (**(code **)(*local_38 + 0x28))(local_38);
      local_61 = 0 < iVar8;
      iVar8 = (**(code **)(*local_38 + 0x28))();
      local_68 = 0;
      if (-1 < iVar8 + -1) {
        do {
          (**(code **)(*local_38 + 0x18))(local_38,&local_88,local_68);
          if ((((PTR_DAT_02005bd0[0xc] != '\0') &&
               (iVar3 = FUN_0044f900(&LAB_01bfa2b4,local_88), iVar3 == 0)) && (local_58 != 0)) &&
             (iVar3 = FUN_0044f900(&LAB_01bfa2b4,local_88), iVar3 == 0)) {
            local_a4 = 0;
            if (local_58 != 0) {
              local_a4 = *(undefined4 *)(local_58 + -4);
            }
            FUN_00416dc0(&local_d0,local_58,local_a4,1);
            FUN_01bf9770(auStack_f8,&local_88,local_d0,0);
            local_a8 = 0;
            if (local_58 != 0) {
              local_a8 = *(undefined4 *)(local_58 + -4);
            }
            FUN_00416e20(&local_58,local_a8,1);
          }
          lVar5 = (**(code **)(*local_38 + 0x30))(local_38,local_68);
          FUN_00414ad0(lVar5 + 0x40,local_88);
          local_68 = local_68 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_00410f20(local_38);
      FUN_00410f20(local_60);
      FUN_00410f20(local_50);
      FUN_00410f20(local_40);
      puVar1 = local_b0;
    }
    local_b0 = puVar1;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    local_68 = 0;
    puVar1 = local_b0;
    if (-1 < iVar8 + -1) {
      do {
        lVar5 = FUN_01bf9610(param_1,local_68);
        if ((*(longlong *)(lVar5 + 0x50) != 0) &&
           (lVar5 = FUN_01bf9610(param_1,local_68),
           *(char *)(*(longlong *)(lVar5 + 0x50) + 0x30) != '\0')) {
          lVar5 = FUN_01bf9610(param_1,local_68);
          FUN_01bf9980(*(undefined8 *)(lVar5 + 0x50),1);
        }
        local_68 = local_68 + 1;
        iVar8 = iVar8 + -1;
        puVar1 = local_b0;
      } while (iVar8 != 0);
    }
  }
  local_b0 = puVar1;
  FUN_00414560(&local_d0,4);
  FUN_00414560(&local_90,3);
  FUN_00414480(&local_58);
  FUN_00414480(local_30);
  return local_61;
code_r0x01bf9da6:
  if (PTR_DAT_02005bd0[0xc] == '\0') {
    FUN_00416ea0(&LAB_01bfa2b4,&local_88,local_70);
  }
  else {
    FUN_01bf9770(auStack_f8,&local_88,local_80,local_70);
  }
  uVar6 = (**(code **)(*local_50 + 0x30))(local_50,local_68);
  (**(code **)(*local_40 + 0x80))(local_40,local_88,uVar6);
  (**(code **)(*local_50 + 0x98))(local_50,local_68);
code_r0x01bf9e67:
  local_68 = local_68 + -1;
  if (local_68 == -1) goto code_r0x01bf9e7c;
  goto LAB_01bf9d0c;
}


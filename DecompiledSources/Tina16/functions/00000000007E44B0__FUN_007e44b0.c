/* Ghidra address: 007e44b0 */
/* Ghidra symbol: FUN_007e44b0 */


undefined1 FUN_007e44b0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
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
  if ((param_2 != '\0') ||
     ((puVar1 = auStack_f8, (*(ushort *)(param_1 + 0x34) & 0x10) == 0 &&
      (cVar2 = FUN_007e5530(param_1), puVar1 = local_b0, cVar2 != '\0')))) {
    local_b0 = puVar1;
    FUN_00414b50(local_30,PTR_u_1234567890ABCDEFGHIJKLMNOPQRSTUV_01e12e38);
    local_40 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    local_44 = 0;
    local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_60 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar3 = FUN_007e2ef0();
    local_68 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar6 = FUN_007e2f10(param_1,local_68);
        if (*(char *)(lVar6 + 0x86) != '\0') {
          lVar6 = FUN_007e2f10(param_1,local_68);
          iVar4 = FUN_00416db0(*(undefined8 *)(lVar6 + 0x78),&DAT_007e4d84);
          if ((iVar4 != 0) &&
             (lVar6 = FUN_007e2f10(param_1,local_68), *(longlong *)(lVar6 + 0x78) != 0)) {
            lVar6 = FUN_007e2f10(param_1,local_68);
            FUN_007e8e80(&local_b8,*(undefined8 *)(lVar6 + 0x78));
            FUN_0043e130(&local_80,local_b8);
            if (local_80 == 0) {
              lVar6 = FUN_007e2f10(param_1,local_68);
              uVar7 = FUN_007e2f10(param_1,local_68);
              (**(code **)(*local_60 + 0xd0))(local_60,0,*(undefined8 *)(lVar6 + 0x78),uVar7);
            }
            else {
              iVar4 = FUN_0044f900(local_80,PTR_u_1234567890ABCDEFGHIJKLMNOPQRSTUV_01e12e38);
              if ((iVar4 != 0) && (cVar2 = FUN_007e4170(auStack_f8,local_80), cVar2 == '\0')) {
                lVar6 = FUN_007e2f10(param_1,local_68);
                lVar8 = FUN_007e2f10(param_1,local_68);
                FUN_007e8d80(&local_c0,*(undefined8 *)(lVar8 + 0x78));
                FUN_00414ad0(lVar6 + 0x78,local_c0);
                lVar6 = FUN_007e2f10(param_1,local_68);
                uVar7 = FUN_007e2f10(param_1,local_68);
                (**(code **)(*local_60 + 0xd0))(local_60,0,*(undefined8 *)(lVar6 + 0x78),uVar7);
              }
            }
          }
        }
        local_68 = local_68 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00414b50(&local_90,local_30[0]);
    iVar3 = (**(code **)(*local_60 + 0x28))();
    local_6c = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_00414b50(local_30,local_90);
        (**(code **)(*local_50 + 0x10))(local_50,local_60);
        (**(code **)(*local_40 + 0x90))(local_40);
        local_68 = (**(code **)(*local_50 + 0x28))(local_50);
        local_68 = local_68 + -1;
        if (-1 < local_68) {
LAB_007e487b:
          (**(code **)(*local_50 + 0x18))(local_50,&local_88,local_68);
          local_70 = 1;
          do {
            local_9c = 0;
            if (local_88 != 0) {
              local_9c = *(int *)(local_88 + -4);
            }
            if (local_9c < local_70) goto code_r0x007e49d6;
            local_9e = *(ushort *)(local_88 + -2 + (longlong)local_70 * 2);
            if ((local_9e < 0xd800) || (0xdfff < local_9e)) {
              FUN_00416dc0(&local_c8,local_88,local_70,1);
              FUN_0043e130(&local_80,local_c8);
              cVar2 = FUN_007e4170(auStack_f8,local_80);
              if (cVar2 != '\0') goto code_r0x007e4915;
            }
            else {
              local_70 = local_70 + 1;
            }
            local_70 = local_70 + 1;
          } while( true );
        }
code_r0x007e49eb:
        iVar4 = (**(code **)(*local_40 + 0x28))(local_40);
        if (local_44 < iVar4) {
          FUN_007e41c0(auStack_f8);
        }
        iVar4 = (**(code **)(*local_50 + 0x28))(local_50);
        if (iVar4 < 1) break;
        iVar4 = (**(code **)(*local_50 + 0x28))();
        local_68 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar7 = (**(code **)(*local_50 + 0x30))(local_50,local_68);
            local_74 = (**(code **)(*local_60 + 0xc0))(local_60,uVar7);
            iVar5 = (**(code **)(*local_60 + 0x28))(local_60);
            (**(code **)(*local_60 + 0xf8))(local_60,local_74,iVar5 + -1);
            local_68 = local_68 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_44 == 0) {
      FUN_007e41c0(auStack_f8);
    }
    iVar3 = (**(code **)(*local_38 + 0x28))(local_38);
    local_61 = 0 < iVar3;
    iVar3 = (**(code **)(*local_38 + 0x28))();
    local_68 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*local_38 + 0x18))(local_38,&local_88,local_68);
        if ((((PTR_DAT_02005bd0[0xc] != '\0') &&
             (iVar4 = FUN_0044f900(&LAB_007e4d94,local_88), iVar4 == 0)) && (local_58 != 0)) &&
           (iVar4 = FUN_0044f900(&LAB_007e4d94,local_88), iVar4 == 0)) {
          local_a4 = 0;
          if (local_58 != 0) {
            local_a4 = *(undefined4 *)(local_58 + -4);
          }
          FUN_00416dc0(&local_d0,local_58,local_a4,1);
          FUN_007e42a0(auStack_f8,&local_88,local_d0,0);
          local_a8 = 0;
          if (local_58 != 0) {
            local_a8 = *(undefined4 *)(local_58 + -4);
          }
          FUN_00416e20(&local_58,local_a8,1);
        }
        lVar6 = (**(code **)(*local_38 + 0x30))(local_38,local_68);
        FUN_00414ad0(lVar6 + 0x78,local_88);
        local_68 = local_68 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(local_38);
    FUN_00410f20(local_60);
    FUN_00410f20(local_50);
    FUN_00410f20(local_40);
    puVar1 = local_b0;
  }
  local_b0 = puVar1;
  FUN_00414560(&local_d0,4);
  FUN_00414560(&local_90,3);
  FUN_00414480(&local_58);
  FUN_00414480(local_30);
  return local_61;
code_r0x007e4915:
  if (PTR_DAT_02005bd0[0xc] == '\0') {
    FUN_00416ea0(&LAB_007e4d94,&local_88,local_70);
  }
  else {
    FUN_007e42a0(auStack_f8,&local_88,local_80,local_70);
  }
  uVar7 = (**(code **)(*local_50 + 0x30))(local_50,local_68);
  (**(code **)(*local_40 + 0x80))(local_40,local_88,uVar7);
  (**(code **)(*local_50 + 0x98))(local_50,local_68);
code_r0x007e49d6:
  local_68 = local_68 + -1;
  if (local_68 == -1) goto code_r0x007e49eb;
  goto LAB_007e487b;
}


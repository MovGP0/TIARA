/* Ghidra address: 017e3330 */
/* Ghidra symbol: FUN_017e3330 */


void FUN_017e3330(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_e68 [32];
  undefined8 *local_e48;
  longlong local_e40;
  undefined1 local_e38;
  undefined1 local_e28 [256];
  undefined8 local_d28;
  undefined1 *local_d20;
  longlong local_d18;
  undefined1 local_d09;
  undefined8 local_d08 [6];
  undefined1 local_cd8;
  undefined4 local_cd7;
  undefined8 local_ab0 [13];
  undefined8 local_a48;
  int local_a14;
  longlong local_a00;
  longlong local_9f8;
  undefined8 local_9f0;
  undefined8 *local_9e8;
  undefined8 *local_9e0;
  longlong local_9d8;
  undefined8 *local_9d0;
  undefined8 *local_9c8;
  undefined8 *local_9c0;
  undefined8 local_9b0;
  undefined1 local_9a8 [8];
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_948 [6];
  undefined1 local_918 [280];
  longlong local_800;
  longlong local_7a0;
  undefined8 local_740;
  undefined1 local_628 [376];
  undefined4 local_4b0;
  undefined8 local_338 [32];
  byte local_238;
  int local_230;
  ushort local_220 [48];
  undefined2 local_1c0;
  undefined4 local_a0;
  int local_48;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  local_d20 = auStack_e68;
  local_d28 = 0;
  local_9b0 = 0;
  local_d09 = *(undefined1 *)(param_1 + 0x509);
  local_d18 = *(longlong *)(param_1 + 0x4f8);
  FUN_010d3290(local_d18,*(undefined4 *)(param_1 + 0x55c),local_918);
  *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
LAB_017e3fff:
  do {
    while( true ) {
      if (*(int *)(local_d18 + 0x10) + -1 < *(int *)(param_1 + 0x55c)) goto LAB_017e4022;
      FUN_010d3290(local_d18,*(int *)(param_1 + 0x55c),local_338);
      if (3 < local_238) break;
      if (local_238 == 3) {
        FUN_017e26a0(param_1);
        goto LAB_017e4022;
      }
      if (local_238 == 0) {
        local_34 = local_230;
        if (local_230 == 0x105) {
          local_40 = local_a0;
          puVar6 = local_220;
          puVar7 = local_948;
          for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar7 = *(undefined8 *)puVar6;
            puVar6 = puVar6 + 4;
            puVar7 = puVar7 + 1;
          }
          FUN_010d3670(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_40,local_948);
        }
        if (local_34 == 0x104) {
          FUN_00415020(param_1 + 0x898,local_220,0x28);
          local_9c0 = (undefined8 *)FUN_013b3ad0(local_800,local_220);
          if (local_9c0 == (undefined8 *)0x0) {
            local_9c0 = (undefined8 *)FUN_013b3ad0(*(undefined8 *)(param_1 + 0x4e8),local_220);
            if (local_9c0 == (undefined8 *)0x0) {
              local_9c0 = (undefined8 *)FUN_013b3ad0(*(undefined8 *)(param_1 + 0x550),local_220);
              if (local_9c0 == (undefined8 *)0x0) {
                FUN_017e2900(param_1,0x103);
                goto LAB_017e4022;
              }
              local_40 = local_a0;
              FUN_013b4b70(*(undefined8 *)(param_1 + 0x550),local_9c0,local_948);
              FUN_010d3670(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_40,local_948);
            }
            else {
              local_40 = local_a0;
              FUN_013b4b70(*(undefined8 *)(param_1 + 0x4e8),local_9c0,local_948);
              FUN_010d3670(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_40,local_948);
            }
          }
          else {
            local_40 = local_a0;
            FUN_004169a0(&local_d28,local_220);
            FUN_010d36e0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_40,local_d28);
          }
        }
        cVar1 = FUN_017e2800(param_1,local_34);
        if (cVar1 != '\0') {
          FUN_010d3830(*(undefined8 *)(param_1 + 0x4f0),local_220[0],&local_9c8);
          FUN_010d3830(*(undefined8 *)(param_1 + 0x4f0),local_1c0,&local_9d0);
          local_9d8 = local_800;
          cVar1 = FUN_010d15e0(local_800,local_34,local_9c8,local_9d0);
          if (cVar1 == '\0') {
            FUN_017e2900(param_1,0x108);
            goto LAB_017e4022;
          }
          local_9c0 = (undefined8 *)FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
          if ((local_34 == 0x10f) || (local_34 == 0x10e)) {
            local_e48 = local_9d0;
            local_e40 = local_9d8;
            local_e38 = local_d09;
            FUN_017e97d0(param_1,local_34,local_9c0,local_9c8);
          }
          else {
            local_e48 = local_9d0;
            local_e40 = local_9d8;
            FUN_017e9640(param_1,local_34,local_9c0,local_9c8);
          }
          FUN_010d3640(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_a0,local_9c0);
          uVar2 = (**(code **)*local_9c8)(local_9c8);
          FUN_004095f0(uVar2);
          uVar2 = (**(code **)*local_9d0)(local_9d0);
          FUN_004095f0(uVar2);
        }
        cVar1 = FUN_017e2830(param_1,local_34);
        if (cVar1 != '\0') {
          FUN_010d3830(*(undefined8 *)(param_1 + 0x4f0),local_220[0],&local_9c8);
          if ((local_34 == 0x119) || (local_34 == 0x11a)) {
            local_9c0 = (undefined8 *)FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
            FUN_017e9580(param_1,local_34,local_9c0,local_9c8);
            FUN_010d3640(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_a0,local_9c0);
            uVar2 = (**(code **)*local_9c8)(local_9c8);
            FUN_004095f0(uVar2);
          }
          else {
            cVar1 = FUN_010c7da0(local_9c8);
            if (cVar1 == '\0') {
              FUN_017e2900(param_1,0x108);
              goto LAB_017e4022;
            }
            FUN_010d3860(*(undefined8 *)(param_1 + 0x4f0),local_220[0],local_948);
            cVar1 = FUN_010c7eb0(local_34);
            if (cVar1 == '\0') {
              FUN_017e8660(param_1,local_34,local_948);
            }
            else {
              local_e48 = local_948;
              FUN_017e89e0(param_1,local_34,local_338,local_d09);
            }
            cVar1 = FUN_017e28e0(param_1);
            if (cVar1 != '\0') goto LAB_017e4022;
            FUN_010d35f0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_a0,local_948);
          }
        }
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else if (local_238 == 1) {
LAB_017e3f0b:
        FUN_010d3290(local_d18,*(int *)(param_1 + 0x55c) + -1,local_338);
        FUN_010d3830(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_a0,&local_9c8);
        local_9d0 = (undefined8 *)FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
        FUN_010d1490(local_9d0,local_9c8);
        FUN_010d3290(local_d18,*(undefined4 *)(param_1 + 0x55c),local_338);
        if (local_238 == 7) {
          FUN_013b3a30(local_7a0,local_9d0);
        }
        else {
          FUN_013b3a30(local_740,local_9d0);
        }
        uVar2 = (**(code **)*local_9c8)(local_9c8);
        FUN_004095f0(uVar2);
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else if (local_238 == 2) {
        FUN_017e26a0(param_1);
      }
    }
    if (local_238 == 5) {
      FUN_010d3290(local_d18,*(undefined4 *)(param_1 + 0x55c),local_628);
      *(undefined4 *)(param_1 + 0x55c) = local_4b0;
      goto LAB_017e3fff;
    }
    if (local_238 == 7) goto LAB_017e3f0b;
    if (local_238 == 9) {
      local_9d8 = local_800;
      local_3c = *(int *)(local_7a0 + 0x10);
      if (local_3c == *(int *)(local_800 + 0x10)) {
        iVar4 = local_3c + 1;
        FUN_017c5880(&local_9f0,iVar4,1);
        FUN_017c5220(&local_9f8,iVar4);
        FUN_017c5220(&local_a00,iVar4);
        for (local_38 = 0; local_38 <= local_3c + -1; local_38 = local_38 + 1) {
          local_9c0 = (undefined8 *)FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
          FUN_013b4bf0(local_7a0,local_38,&local_9e0);
          FUN_013b4bf0(local_740,local_38,&local_9e8);
          local_e48 = local_9e8;
          local_e40 = local_9d8;
          local_e38 = local_d09;
          FUN_017e97d0(param_1,0x10f,local_9c0,local_9e0);
          cVar1 = FUN_010d15b0(local_9c0);
          if (cVar1 == '\0') {
            FUN_010c7a40(local_d08,0);
            puVar7 = local_d08;
            puVar8 = local_ab0;
            for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            local_cd7 = 0x53595303;
            local_cd8 = 4;
            local_a48 = FUN_013b26e0(0,&PTR_FUN_013b25b8,&local_cd8);
            FUN_00b94f50(local_9c0,0,local_a48);
          }
          for (local_48 = 0; local_48 <= *(int *)(local_9c0 + 2) + -1; local_48 = local_48 + 1) {
            FUN_013b4bc0(local_9c0,local_48,local_9a8);
            FUN_013b4b30(local_9c0,local_48,&local_9b0);
            if (local_48 == 0) {
              cVar1 = FUN_010d15b0(local_9c0);
              if (cVar1 != '\0') {
                FUN_010c8470(local_9a8);
                iVar4 = local_38 + 1;
                iVar5 = local_3c + 1;
                local_e48._0_4_ = iVar5;
                FUN_017dc850(local_9f0,0,local_9a0,iVar4);
                local_e48 = (undefined8 *)CONCAT44(local_e48._4_4_,iVar5);
                FUN_017dc850(local_9f0,1,local_998,iVar4);
              }
            }
            else {
              FUN_00416910(local_e28,local_9b0,0xff);
              local_a14 = FUN_013b3c20(local_9d8,local_e28);
              iVar4 = local_38 + 1;
              iVar5 = local_a14 + 1;
              local_e48._0_4_ = iVar5;
              FUN_017dc850(local_9f0,0,local_9a0,iVar4);
              local_e48 = (undefined8 *)CONCAT44(local_e48._4_4_,iVar5);
              FUN_017dc850(local_9f0,1,local_998,iVar4);
            }
          }
          (**(code **)*local_9c0)(local_9c0);
          FUN_004095f0();
        }
        FUN_017db9e0(local_9f0);
        FUN_017dbf50(local_9f0,local_9f8,local_a00);
        local_48 = 0;
        local_3c = *(int *)(local_9d8 + 0x10);
        for (; local_48 <= local_3c + -1; local_48 = local_48 + 1) {
          FUN_013b4b30(local_9d8,local_48,&local_9b0);
          lVar3 = (longlong)(local_48 + 1);
          cVar1 = FUN_010c7a10(*(undefined8 *)(local_a00 + lVar3 * 8));
          if (cVar1 == '\0') {
            FUN_010c7a60(local_9a8,*(undefined8 *)(local_9f8 + lVar3 * 8),
                         *(undefined8 *)(local_a00 + lVar3 * 8));
          }
          else {
            FUN_010c7a40(local_9a8,*(undefined8 *)(local_9f8 + lVar3 * 8));
          }
          FUN_00416910(local_e28,local_9b0,0xff);
          local_9c0 = (undefined8 *)FUN_013b3ad0(*(undefined8 *)(param_1 + 0x4e8),local_e28);
          if (local_9c0 == (undefined8 *)0x0) {
            FUN_00416910(local_e28,local_9b0,0xff);
            FUN_013b3040(*(undefined8 *)(param_1 + 0x4e8),local_e28,local_9a8);
          }
          else {
            FUN_013b3ec0(local_9d8,local_9c0,local_9a8,local_d09);
          }
        }
        FUN_017c58d0(&local_9f0);
        FUN_017c52d0(&local_9f8);
        FUN_017c52d0(&local_a00);
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
      }
      else {
        FUN_017e2900(param_1,0x109);
      }
LAB_017e4022:
      FUN_00414480(&local_d28);
      FUN_00414480(&local_9b0);
      return;
    }
  } while( true );
}


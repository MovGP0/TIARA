/* Ghidra address: 0131e140 */
/* Ghidra symbol: FUN_0131e140 */


undefined8 FUN_0131e140(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  char *pcVar5;
  byte *pbVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  longlong local_d0 [3];
  double local_b8;
  char local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  char local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  byte local_a3;
  char local_a1;
  undefined8 local_a0;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_e0 = auStack_118;
  local_e8 = 0;
  local_d0[0] = 0;
  local_d8 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  puVar1 = auStack_118;
  if (param_2 == 0) goto LAB_0131f363;
  if ((*PTR_DAT_02003720 == '\0') || (puVar1 = auStack_118, *PTR_DAT_02002b78 != '\0')) {
    (**(code **)(**(longlong **)(param_2 + 0x5c0) + 0x90))(*(longlong **)(param_2 + 0x5c0));
    puVar1 = local_e0;
  }
  local_e0 = puVar1;
  cVar2 = FUN_0198a580(param_1);
  if (cVar2 == '\x04') {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    local_98 = (uint)uVar3;
    cVar2 = FUN_01b07dd0(param_2);
    if ((cVar2 != '\0') && (((local_98 == 0xab || (local_98 == 0xaa)) || (local_98 == 0xac)))) {
      if (local_98 == 0xab) {
        FUN_00414b50(&local_d8,&DAT_0131f588);
      }
      else if (local_98 == 0xaa) {
        FUN_00414b50(&local_d8,L"Freq");
      }
      else if (local_98 == 0xac) {
        FUN_00414b50(&local_d8,&DAT_0131f5b4);
      }
      local_94 = FUN_01d40150(param_1,local_d8);
      puVar1 = local_e0;
      if ((-1 < local_94) && (*(longlong *)(param_2 + 0x118) != 0)) {
        local_b8 = (double)FUN_016ee780(local_94,0,param_2);
        FUN_01d04b50(param_1,&local_b8);
        local_80 = *(undefined8 *)(param_2 + 0x5c0);
        puVar1 = local_e0;
      }
      goto LAB_0131f363;
    }
    local_90 = FUN_01b07e10(param_2,param_1);
    if (*(int *)(param_2 + 0x2d8) < local_90) {
      local_80 = *(undefined8 *)(param_2 + 0x5c0);
      puVar1 = local_e0;
      goto LAB_0131f363;
    }
    local_a0 = *(undefined8 *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)local_90 * 8);
    (**(code **)(*param_1 + 0x288))(param_1,&local_e8);
    FUN_01ce7d90(local_d0,local_e8);
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (uVar3 < 0x23) {
      if (uVar3 == 0x22) {
LAB_0131e68d:
        local_f8 = &local_a5;
        local_f0 = &local_a6;
        FUN_01cfde70(param_1,1,0,&local_a4);
        local_f8 = &local_a5;
        local_f0 = &local_a6;
        pcVar5 = (char *)FUN_01cfde70(param_1,3,0,&local_a4);
        local_a1 = *pcVar5;
        if (local_a1 == '\0') {
          local_8c = FUN_01b05690(local_a0,1,1);
          local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8);
          FUN_00414480(&local_30);
          if (local_d0[0] == 0) {
            FUN_00414b50(&local_30,&DAT_0131f5d8);
          }
          else {
            FUN_00414b50(&local_30,local_d0[0]);
          }
          FUN_0131de10(auStack_118,local_b8,local_30);
          FUN_00414480(&local_30);
          if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
             (dVar7 = (double)FUN_0040c850(local_b8), dVar7 < 1e-10)) {
            local_b8 = 0.0;
          }
          FUN_01d04b50(param_1,&local_b8);
        }
        else {
          FUN_00414480(&local_38);
          if (local_d0[0] == 0) {
            FUN_00414b50(&local_38,&DAT_0131f5d8);
          }
          else {
            FUN_00414b50(&local_38,local_d0[0]);
          }
          FUN_0131de10(auStack_118,0,local_38);
          FUN_00414480(&local_38);
        }
      }
      else if (uVar3 < 8) {
        if (uVar3 == 7) {
          local_f8 = &local_a5;
          local_f0 = &local_a6;
          FUN_01cfde70(param_1,1,0,&local_a4);
          local_84 = FUN_01b05600(local_a0,3);
          local_88 = FUN_01b05600(local_a0,4);
          local_8c = FUN_01b05690(local_a0,1,1);
          FUN_00414480(&local_40);
          if (local_d0[0] == 0) {
            FUN_00414b50(&local_40,&DAT_0131f5e8);
          }
          else {
            FUN_00414b50(&local_40,local_d0[0]);
          }
          FUN_0131de10(auStack_118,
                       *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8) *
                       (*(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8) -
                       *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_88 * 8)),
                       local_40);
          FUN_00414480(&local_40);
        }
        else if (uVar3 == 4) {
          local_f8 = &local_a5;
          local_f0 = &local_a6;
          FUN_01cfde70(param_1,1,0,&local_a4);
          local_84 = FUN_01b05600(local_a0,1);
          FUN_00414480(&local_20);
          if (local_d0[0] == 0) {
            FUN_00414b50(&local_20,&DAT_0131f5c8);
          }
          else {
            FUN_00414b50(&local_20,local_d0[0]);
          }
          FUN_0131de10(auStack_118,
                       *(undefined8 *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8),
                       local_20);
          FUN_00414480(&local_20);
        }
        else {
          if (uVar3 == 5) goto LAB_0131e56c;
          if (uVar3 == 6) goto LAB_0131e68d;
        }
      }
      else if (uVar3 == 8) {
LAB_0131e926:
        local_f8 = &local_a5;
        local_f0 = &local_a6;
        FUN_01cfde70(param_1,2,0,&local_a4);
        local_f8 = &local_a5;
        local_f0 = &local_a6;
        pcVar5 = (char *)FUN_01cfde70(param_1,4,0,&local_a4);
        local_a1 = *pcVar5;
        if (local_a1 == '\0') {
          local_8c = FUN_01b05690(local_a0,1,1);
          if (*(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8) == 0.0) {
            local_b8 = 1e+50;
          }
          else {
            local_b8 = -1.0 / *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8) -
                       1.0;
          }
          FUN_00414480(&local_48);
          if (local_d0[0] == 0) {
            FUN_00414b50(&local_48,&DAT_0131f5f8);
          }
          else {
            FUN_00414b50(&local_48,local_d0[0]);
          }
          FUN_0131de10(auStack_118,local_b8,local_48);
          FUN_00414480(&local_48);
          FUN_01d04b50(param_1,&local_b8);
        }
        else {
          FUN_00414480(&local_50);
          if (local_d0[0] == 0) {
            FUN_00414b50(&local_50,&DAT_0131f5f8);
          }
          else {
            FUN_00414b50(&local_50,local_d0[0]);
          }
          FUN_0131de10(auStack_118,0,local_50);
          FUN_00414480(&local_50);
        }
      }
      else if (uVar3 == 0x21) {
LAB_0131e56c:
        local_f8 = &local_a5;
        local_f0 = &local_a6;
        FUN_01cfde70(param_1,1,0,&local_a4);
        local_84 = FUN_01b05600(local_a0,1);
        local_88 = FUN_01b05600(local_a0,2);
        local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8) -
                   *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_88 * 8);
        FUN_00414480(&local_28);
        if (local_d0[0] == 0) {
          FUN_00414b50(&local_28,&DAT_0131f5c8);
        }
        else {
          FUN_00414b50(&local_28,local_d0[0]);
        }
        FUN_0131de10(auStack_118,local_b8,local_28);
        FUN_00414480(&local_28);
        if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
           (dVar7 = (double)FUN_0040c850(local_b8), dVar7 < 1e-10)) {
          local_b8 = 0.0;
        }
        FUN_01d04b50(param_1,&local_b8);
      }
    }
    else if (uVar3 < 0x6b) {
      if ((uVar3 == 0x6a) || (uVar3 == 0x3f)) {
LAB_0131eacd:
        sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar4 == 0xa4) {
          local_f8 = &local_a5;
          local_f0 = &local_a6;
          pbVar6 = (byte *)FUN_01cfde70(param_1,4,0,&local_a4);
          local_a3 = *pbVar6;
          local_a7 = '\x01';
          local_a8 = 0xb;
          local_a9 = 0xc;
          local_aa = '\t';
        }
        else {
          local_f8 = &local_a5;
          local_f0 = &local_a6;
          pcVar5 = (char *)FUN_01cfde70(param_1,2,0,&local_a4);
          local_a3 = *pcVar5 + 1;
          local_f8 = &local_a5;
          local_f0 = &local_a6;
          pcVar5 = (char *)FUN_01cfde70(param_1,3,0,&local_a4);
          local_a7 = *pcVar5;
          local_a8 = 1;
          local_a9 = 2;
          local_aa = '\x01';
        }
        if (local_a3 < 4) {
          if (local_a3 == 3) {
            sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (sVar4 == 0x6a) {
              local_8c = FUN_01b05690(local_a0,local_aa,1);
            }
            else {
              local_8c = FUN_01b05690(local_a0,local_aa + '\x01',1);
            }
            if (*(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8) == 0.0) {
              local_b8 = 1e+50;
            }
            else {
              local_b8 = -1.0 / *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8)
                         - 1.0;
            }
            sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (sVar4 == 0xa4) {
              FUN_00414480(&local_68);
              if (local_d0[0] == 0) {
                FUN_00414b50(&local_68,&DAT_0131f5f8);
              }
              else {
                FUN_00414b50(&local_68,local_d0[0]);
              }
              FUN_0131de10(auStack_118,local_b8,local_68);
              FUN_00414480(&local_68);
            }
            else {
              FUN_01d04b50(param_1,&local_b8);
            }
          }
          else if (local_a3 == 1) {
            local_84 = FUN_01b05600(local_a0,local_a8);
            local_88 = FUN_01b05600(local_a0,local_a9);
            if ((*PTR_DAT_02002b78 == '\0') || (*(char *)(param_2 + 0xdeb) != '\x02')) {
              local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8) -
                         *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_88 * 8);
            }
            else if (local_a7 == '\0') {
              local_b8 = (double)FUN_01754b40(param_1[0x33]);
            }
            else {
              local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8) -
                         *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_88 * 8);
            }
            sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (sVar4 == 0xa4) {
              FUN_00414480(&local_58);
              if (local_d0[0] == 0) {
                FUN_00414b50(&local_58,&DAT_0131f5c8);
              }
              else {
                FUN_00414b50(&local_58,local_d0[0]);
              }
              FUN_0131de10(auStack_118,local_b8,local_58);
              FUN_00414480(&local_58);
            }
            else {
              if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
                 (dVar7 = (double)FUN_0040c850(local_b8), dVar7 < 1e-10)) {
                local_b8 = 0.0;
              }
              FUN_01d04b50(param_1,&local_b8);
            }
          }
          else if (local_a3 == 2) {
            local_84 = FUN_01b05600(local_a0,local_a8);
            local_88 = FUN_01b05600(local_a0,local_a9);
            if ((*PTR_DAT_02002b78 == '\0') || (*(char *)(param_2 + 0xdeb) != '\x02')) {
              local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8) -
                         *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_88 * 8);
            }
            else if (local_a7 == '\0') {
              local_b8 = (double)FUN_01754bb0(param_1[0x33]);
            }
            else {
              local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8) -
                         *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_88 * 8);
            }
            sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (sVar4 == 0xa4) {
              FUN_00414480(&local_60);
              if (local_d0[0] == 0) {
                FUN_00414b50(&local_60,&DAT_0131f5c8);
              }
              else {
                FUN_00414b50(&local_60,local_d0[0]);
              }
              FUN_0131de10(auStack_118,local_b8,local_60);
              FUN_00414480(&local_60);
            }
            else {
              if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
                 (dVar7 = (double)FUN_0040c850(local_b8), dVar7 < 1e-10)) {
                local_b8 = 0.0;
              }
              FUN_01d04b50(param_1,&local_b8);
            }
          }
        }
        else if (local_a3 == 4) {
          local_8c = FUN_01b05690(local_a0,local_aa,1);
          if ((*PTR_DAT_02002b78 == '\0') || (*(char *)(param_2 + 0xdeb) != '\x02')) {
            local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8);
          }
          else if (local_a7 == '\0') {
            local_b8 = (double)FUN_01754b40(param_1[0x33]);
          }
          else {
            local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8);
          }
          sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar4 == 0xa4) {
            FUN_00414480(&local_70);
            if (local_d0[0] == 0) {
              FUN_00414b50(&local_70,&DAT_0131f5d8);
            }
            else {
              FUN_00414b50(&local_70,local_d0[0]);
            }
            FUN_0131de10(auStack_118,local_b8,local_70);
            FUN_00414480(&local_70);
          }
          else {
            if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
               (dVar7 = (double)FUN_0040c850(local_b8), dVar7 < 1e-10)) {
              local_b8 = 0.0;
            }
            FUN_01d04b50(param_1,&local_b8);
          }
        }
        else if (local_a3 == 5) {
          local_8c = FUN_01b05690(local_a0,local_aa,1);
          if ((*PTR_DAT_02002b78 == '\0') || (*(char *)(param_2 + 0xdeb) != '\x02')) {
            local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8);
          }
          else if (local_a7 == '\0') {
            local_b8 = (double)FUN_01754bb0(param_1[0x33]);
          }
          else {
            local_b8 = *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_8c * 8);
          }
          sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar4 == 0xa4) {
            FUN_00414480(&local_78);
            if (local_d0[0] == 0) {
              FUN_00414b50(&local_78,&DAT_0131f5d8);
            }
            else {
              FUN_00414b50(&local_78,local_d0[0]);
            }
            FUN_0131de10(auStack_118,local_b8,local_78);
            FUN_00414480(&local_78);
          }
          else {
            if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
               (dVar7 = (double)FUN_0040c850(local_b8), dVar7 < 1e-10)) {
              local_b8 = 0.0;
            }
            FUN_01d04b50(param_1,&local_b8);
          }
        }
      }
      else if (uVar3 == 0x62) goto LAB_0131e926;
    }
    else {
      if (uVar3 == 0x77) goto LAB_0131e56c;
      if (uVar3 == 0xa4) goto LAB_0131eacd;
    }
  }
  else {
    local_84 = (**(code **)(*param_1 + 0x210))(param_1,0);
    local_88 = (**(code **)(*param_1 + 0x210))(param_1,1);
    *(double *)PTR_DAT_02005400 =
         *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_84 * 8) -
         *(double *)(*(longlong *)(param_2 + 0x148) + (longlong)local_88 * 8);
  }
  local_80 = *(undefined8 *)(param_2 + 0x5c0);
  puVar1 = local_e0;
LAB_0131f363:
  local_e0 = puVar1;
  FUN_00414480(&local_e8);
  FUN_00414560(&local_d8,2);
  FUN_00414560(&local_78,0xc);
  return local_80;
}


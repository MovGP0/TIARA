/* Ghidra address: 00b3c930 */
/* Ghidra symbol: FUN_00b3c930 */


void FUN_00b3c930(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  short sVar9;
  undefined1 auStack_148 [32];
  char *local_128;
  char *local_120;
  undefined8 local_118;
  undefined *local_110;
  longlong local_100;
  int local_f8;
  ushort local_f4;
  byte local_f1;
  longlong local_f0;
  ushort local_e8;
  byte local_e5;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  ushort local_3f;
  ushort local_3d;
  byte local_3b;
  byte local_3a;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_88 = 0;
  local_90 = (undefined *)0x0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_f8 = ((uint)*(byte *)(param_1 + 0x1d) - (uint)*(byte *)(param_1 + 0x1c)) + 1;
  iVar4 = 0;
  bVar5 = *(byte *)(param_1 + 0x1c);
  local_100 = param_1;
  if (bVar5 <= *(byte *)(param_1 + 0x1d)) {
    cVar7 = (*(byte *)(param_1 + 0x1d) - bVar5) + '\x01';
    do {
      uVar3 = FUN_00b52ce0(*(undefined8 *)(*(longlong *)(local_100 + 8) + 0x18),bVar5);
      iVar1 = FUN_00b51ae0(uVar3);
      iVar4 = iVar4 + iVar1 + 1;
      bVar5 = bVar5 + 1;
      cVar7 = cVar7 + -1;
    } while (cVar7 != '\0');
  }
  FUN_0043f750(local_50,iVar4);
  FUN_00415dd0(&local_58,local_50[0],0);
  local_128 = " style=\"border-collapse:collapse;\"";
  local_120 = ">\r\n";
  FUN_00415980(local_30,4,"<table cellpadding=0 cellspacing=0 border=0 width=",local_58);
  uVar3 = FUN_00414df0(local_30);
  iVar4 = 0;
  if (local_30[0] != 0) {
    iVar4 = *(int *)(local_30[0] + -4);
  }
  FUN_004b89e0(*(undefined8 *)(local_100 + 0x10),uVar3,(longlong)iVar4);
  local_f4 = *(ushort *)(local_100 + 0x18);
  local_e8 = *(ushort *)(local_100 + 0x1a);
  if (local_f4 <= local_e8) {
    local_e8 = (local_e8 - local_f4) + 1;
    do {
      FUN_00414c70(local_30,"<tr>\r\n");
      uVar3 = FUN_00414df0(local_30);
      iVar4 = 0;
      if (local_30[0] != 0) {
        iVar4 = *(int *)(local_30[0] + -4);
      }
      FUN_004b89e0(*(undefined8 *)(local_100 + 0x10),uVar3,(longlong)iVar4);
      local_f1 = *(byte *)(local_100 + 0x1c);
      local_e5 = *(byte *)(local_100 + 0x1d);
      if (local_f1 <= local_e5) {
        local_e5 = (local_e5 - local_f1) + 1;
        do {
          local_f0 = FUN_00b4fb40(*(undefined8 *)(*(longlong *)(local_100 + 8) + 0x10),local_f4,
                                  local_f1);
          bVar5 = FUN_00b4d6e0();
          bVar8 = 0;
          if (bVar5 == 0) {
LAB_00b3cc68:
            uVar2 = FUN_004aeac0(*(undefined8 *)(local_100 + 0x28),
                                 ((uint)local_f4 - (uint)*(ushort *)(local_100 + 0x18)) * local_f8 +
                                 ((uint)local_f1 - (uint)*(byte *)(local_100 + 0x1c)));
            FUN_00b4f780(local_f0,&local_68);
            FUN_00415530(&local_70,local_68,0);
            FUN_00b3c7d0(auStack_148,&local_60,local_70);
            FUN_00414c70(&local_38,local_60);
            FUN_0043f750(&local_78,uVar2);
            FUN_00415dd0(&local_80,local_78,0);
            local_128 = "\"";
            FUN_00415980(local_30,3,"<td class=\"xl",local_80);
            if ((bVar8 & bVar5) == 0) {
              uVar3 = FUN_00b52ce0(*(undefined8 *)(*(longlong *)(local_100 + 8) + 0x18),local_f1);
              local_e4 = FUN_00b51ae0(uVar3);
              local_e4 = local_e4 + 1;
              uVar3 = FUN_00b53830(*(undefined8 *)(*(longlong *)(local_100 + 8) + 0x20),local_f4);
              iVar4 = FUN_00b50950(uVar3);
              iVar4 = iVar4 + 1;
            }
            else {
              FUN_0043f750(&local_88,((uint)local_3a - (uint)local_3b) + 1);
              FUN_00415dd0(&local_90,local_88,0);
              FUN_0043f750(&local_98,((uint)local_3d - (uint)local_3f) + 1);
              FUN_00415dd0(&local_a0,local_98,0);
              local_128 = local_90;
              local_120 = " rowspan=";
              local_118 = local_a0;
              local_110 = &DAT_00b3d480;
              FUN_00415980(local_30,6,local_30[0]," colspan=");
              local_e4 = 0;
              iVar4 = 0;
              if (local_3f <= local_3d) {
                sVar9 = (local_3d - local_3f) + 1;
                uVar6 = local_3f;
                do {
                  uVar3 = FUN_00b53830(*(undefined8 *)(*(longlong *)(local_100 + 8) + 0x20),uVar6);
                  iVar1 = FUN_00b50950(uVar3);
                  iVar4 = iVar4 + iVar1 + 1;
                  uVar6 = uVar6 + 1;
                  sVar9 = sVar9 + -1;
                } while (sVar9 != 0);
              }
              if (local_3b <= local_3a) {
                cVar7 = (local_3a - local_3b) + '\x01';
                bVar5 = local_3b;
                do {
                  uVar3 = FUN_00b52ce0(*(undefined8 *)(*(longlong *)(local_100 + 8) + 0x18),bVar5);
                  iVar1 = FUN_00b51ae0(uVar3);
                  local_e4 = local_e4 + iVar1 + 1;
                  bVar5 = bVar5 + 1;
                  cVar7 = cVar7 + -1;
                } while (cVar7 != '\0');
              }
            }
            FUN_0043f750(&local_a8,local_e4);
            FUN_00415dd0(&local_b0,local_a8,0);
            FUN_0043f750(&local_b8,iVar4);
            FUN_00415dd0(&local_c0,local_b8,0);
            local_128 = (char *)local_b0;
            local_120 = " height=";
            local_118 = local_c0;
            local_110 = &DAT_00b3d4bc;
            FUN_00415980(local_30,6,local_30[0]," width=");
            FUN_00b4f530(local_f0,&local_c8);
            iVar4 = FUN_00416420(local_c8,0);
            if (iVar4 != 0) {
              FUN_00b4f530(local_f0,&local_d0);
              FUN_00415530(&local_d8,local_d0,0);
              local_128 = (char *)local_d8;
              local_120 = "\"";
              FUN_00415980(local_30,4,local_30[0],"<a href=\"");
            }
            FUN_004155b0(local_30,local_38);
            FUN_00b4f530(local_f0,&local_e0);
            iVar4 = FUN_00416420(local_e0,0);
            if (iVar4 != 0) {
              FUN_004155b0(local_30,&DAT_00b3d4e4);
            }
            local_128 = "\r\n";
            FUN_00415980(local_30,3,local_30[0],"</td>");
            uVar3 = FUN_00414df0(local_30);
            iVar4 = 0;
            if (local_30[0] != 0) {
              iVar4 = *(int *)(local_30[0] + -4);
            }
            FUN_004b89e0(*(undefined8 *)(local_100 + 0x10),uVar3,(longlong)iVar4);
          }
          else {
            FUN_00b59030(*(undefined8 *)(local_100 + 8),local_f0,&local_3f);
            if ((*(ushort *)(local_f0 + 0x48) == local_3f) &&
               (*(ushort *)(local_f0 + 0x4a) == (ushort)local_3b)) {
              bVar8 = 1;
            }
            else {
              bVar8 = 0;
            }
            if (bVar8 != 0) goto LAB_00b3cc68;
          }
          local_f1 = local_f1 + 1;
          local_e5 = local_e5 - 1;
        } while (local_e5 != 0);
      }
      FUN_00414c70(local_30,"</tr>\r\n");
      uVar3 = FUN_00414df0(local_30);
      iVar4 = 0;
      if (local_30[0] != 0) {
        iVar4 = *(int *)(local_30[0] + -4);
      }
      FUN_004b89e0(*(undefined8 *)(local_100 + 0x10),uVar3,(longlong)iVar4);
      local_f4 = local_f4 + 1;
      local_e8 = local_e8 - 1;
    } while (local_e8 != 0);
  }
  FUN_00414c70(local_30,"</table>\r\n");
  uVar3 = FUN_00414df0(local_30);
  iVar4 = 0;
  if (local_30[0] != 0) {
    iVar4 = *(int *)(local_30[0] + -4);
  }
  FUN_004b89e0(*(undefined8 *)(local_100 + 0x10),uVar3,(longlong)iVar4);
  FUN_00414520(&local_e0);
  FUN_004144d0(&local_d8);
  FUN_004145c0(&local_d0,2);
  FUN_004144d0(&local_c0);
  FUN_00414480(&local_b8);
  FUN_004144d0(&local_b0);
  FUN_00414480(&local_a8);
  FUN_004144d0(&local_a0);
  FUN_00414480(&local_98);
  FUN_004144d0(&local_90);
  FUN_00414480(&local_88);
  FUN_004144d0(&local_80);
  FUN_00414480(&local_78);
  FUN_004144d0(&local_70);
  FUN_00414520(&local_68);
  FUN_00414590(&local_60,2);
  FUN_00414480(local_50);
  FUN_00414590(&local_38,2);
  return;
}


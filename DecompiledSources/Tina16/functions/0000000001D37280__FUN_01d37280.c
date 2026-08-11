/* Ghidra address: 01d37280 */
/* Ghidra symbol: FUN_01d37280 */


undefined1 FUN_01d37280(longlong *param_1,int param_2,int param_3,char param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 local_479;
  int local_478;
  undefined8 local_468;
  undefined1 local_460 [256];
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348 [768];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte *local_30;
  
  local_468 = 0;
  local_358 = 0;
  local_360 = 0;
  local_350 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  if (param_1[0x18] == 0) {
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar7 = FUN_00409570(uVar3);
    param_1[0x18] = lVar7;
  }
  local_479 = 0;
  if (param_2 <= param_3) {
    iVar13 = (param_3 - param_2) + 1;
    local_478 = param_2;
    do {
      bVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,local_478,&local_30);
      pbVar1 = local_30;
      if (bVar2 < 0xc) {
        if (bVar2 == 0xb) {
          *local_30 = 1;
          pbVar1[0x10] = 1;
          pbVar1[0x11] = 0;
          uVar10 = FUN_00409570((ulonglong)*(ushort *)(local_30 + 0x10) << 3);
          *(undefined8 *)(pbVar1 + 0x18) = uVar10;
          **(undefined8 **)(pbVar1 + 0x18) = 0x3ff0000000000000;
          uVar10 = FUN_004b6930(&PTR_FUN_00478280,1);
          *(undefined8 *)(pbVar1 + 8) = uVar10;
          pbVar1[0x40] = 0;
          pbVar1[0x30] = 0;
          pbVar1[0x31] = 1;
          pbVar1[0x20] = 0;
          pbVar1[0x21] = 0;
          pbVar1[0x22] = 0;
          pbVar1[0x23] = 0;
          pbVar1[0x24] = 0;
          pbVar1[0x25] = 0;
          pbVar1[0x26] = 0;
          pbVar1[0x27] = 0;
          pbVar1[0x28] = 0;
          pbVar1[0x29] = 0;
          pbVar1[0x2a] = 0;
          pbVar1[0x2b] = 0;
          pbVar1[0x2c] = 0;
          pbVar1[0x2d] = 0;
          pbVar1[0x2e] = 0;
          pbVar1[0x2f] = 0;
          pbVar1[0x48] = 0;
          pbVar1[0x49] = 0;
          pbVar1[0x4a] = 0;
          pbVar1[0x4b] = 0;
          pbVar1[0x4c] = 0;
          pbVar1[0x4d] = 0;
          pbVar1[0x4e] = 0;
          pbVar1[0x4f] = 0;
          pbVar1[0x48] = 0;
          pbVar1[0x49] = 0;
          pbVar1[0x50] = 0;
          pbVar1[0x51] = 0;
          pbVar1[0x52] = 0;
          pbVar1[0x53] = 0;
          pbVar1[0x54] = 0;
          pbVar1[0x55] = 0;
          pbVar1[0x56] = 0;
          pbVar1[0x57] = 0;
          pbVar1[0x38] = 0;
          pbVar1[0x39] = 0;
          pbVar1[0x3a] = 0;
          pbVar1[0x3b] = 0;
          pbVar1[0x3c] = 0;
          pbVar1[0x3d] = 0;
          pbVar1[0x3e] = 0;
          pbVar1[0x3f] = 0;
          sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
          if ((sVar4 == 0x14) || (sVar4 = (**(code **)(*param_1 + 0xf8))(param_1), sVar4 == 0x12)) {
            (**(code **)(**(longlong **)(pbVar1 + 8) + 0x78))
                      (*(longlong **)(pbVar1 + 8),&DAT_01d38268);
          }
          sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
          if ((sVar4 == 0x13) || (sVar4 = (**(code **)(*param_1 + 0xf8))(param_1), sVar4 == 0x11)) {
            (**(code **)(**(longlong **)(pbVar1 + 8) + 0x78))
                      (*(longlong **)(pbVar1 + 8),&LAB_01d3827c);
          }
          sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar4 == 0xa1) {
            pbVar1[0x40] = 2;
            uVar10 = FUN_00409570(2);
            *(undefined8 *)(pbVar1 + 0x20) = uVar10;
            **(undefined1 **)(pbVar1 + 0x20) = 0x1f;
          }
        }
        else if (bVar2 < 7) {
          if (bVar2 == 6) {
            if (param_4 == '\0') {
              lVar7 = FUN_01cfd090(param_1,local_478);
              *(undefined8 *)pbVar1 = *(undefined8 *)(lVar7 + 0x3c);
            }
            else {
              lVar7 = FUN_01cfd090(param_1,local_478);
              *(undefined8 *)pbVar1 = *(undefined8 *)(lVar7 + 0x34);
            }
            pbVar1[8] = 0;
            pbVar1[9] = 0;
            pbVar1[10] = 0;
            pbVar1[0xb] = 0;
            pbVar1[0xc] = 0;
            pbVar1[0xd] = 0;
            pbVar1[0xe] = 0;
            pbVar1[0xf] = 0;
            FUN_01d3a010(local_30,6,*(undefined8 *)pbVar1);
            pbVar1[0x10] = 0;
            pbVar1[0x11] = 0;
            pbVar1[0x12] = 0xa0;
            pbVar1[0x13] = 0x40;
            pbVar1[0x18] = 1;
            pbVar1[0x20] = 0;
            pbVar1[0x21] = 0;
            pbVar1[0x22] = 0;
            pbVar1[0x23] = 0;
            pbVar1[0x24] = 0;
            pbVar1[0x25] = 0;
            pbVar1[0x26] = 0;
            pbVar1[0x27] = 0;
          }
          else if (bVar2 < 4) {
            if (bVar2 == 3) {
              if (param_4 == '\0') {
                lVar7 = FUN_01cfd090(param_1,local_478);
                *(undefined8 *)pbVar1 = *(undefined8 *)(lVar7 + 0x3c);
              }
              else {
                lVar7 = FUN_01cfd090(param_1,local_478);
                *(undefined8 *)pbVar1 = *(undefined8 *)(lVar7 + 0x34);
              }
              pbVar1[8] = 0;
              pbVar1[9] = 0;
              pbVar1[10] = 0;
              pbVar1[0xb] = 0;
              pbVar1[0xc] = 0;
              pbVar1[0xd] = 0;
              pbVar1[0xe] = 0;
              pbVar1[0xf] = 0;
              FUN_01d3a010(local_30,3,*(undefined8 *)pbVar1);
            }
            else if (bVar2 == 1) {
              if (param_4 == '\0') {
                lVar7 = FUN_01cfd090(param_1,local_478);
                FUN_00415020(local_30,lVar7 + 0x53,0x1e);
              }
              else {
                lVar7 = FUN_01cfd090(param_1,local_478);
                FUN_00415020(local_30,lVar7 + 0x34,0x1e);
              }
            }
            else if (bVar2 == 2) {
              if (param_4 == '\0') {
                lVar7 = FUN_01cfd090(param_1,local_478);
                *(undefined2 *)local_30 = *(undefined2 *)(lVar7 + 0x36);
              }
              else {
                lVar7 = FUN_01cfd090(param_1,local_478);
                *(undefined2 *)local_30 = *(undefined2 *)(lVar7 + 0x34);
              }
            }
          }
          else if (bVar2 == 4) {
            lVar7 = FUN_01cfd090(param_1,local_478);
            if (param_4 == '\0') {
              iVar12 = FUN_00414f50(lVar7 + 0x38,&DAT_01d38250,
                                    (ulonglong)*(byte *)(lVar7 + 0x38) + 1);
              if (iVar12 == 0) goto LAB_01d37637;
              FUN_00415020(local_30,lVar7 + 0x38,0x14);
              FUN_00415020(local_30 + 0x15,lVar7 + 0x4d,0x10);
            }
            else {
LAB_01d37637:
              FUN_0172c260(local_30,param_1,local_478);
            }
            pbVar1 = local_30;
            if ((*PTR_DAT_02002ce0 == '\0') && (iVar12 = FUN_01d43610(), 0x25 < iVar12)) {
              uVar10 = FUN_004095c0(0x25);
              *(undefined8 *)(pbVar1 + 0x26) = uVar10;
              lVar7 = *(longlong *)(pbVar1 + 0x26);
              FUN_0172c410(param_1,local_478,lVar7 + 1,lVar7 + 9,lVar7 + 0x19,lVar7 + 0x21,
                           lVar7 + 0x23,lVar7);
              if (*PTR_DAT_02002ce0 != '\0') {
                local_479 = 1;
                pbVar1[0x26] = 0;
                pbVar1[0x27] = 0;
                pbVar1[0x28] = 0;
                pbVar1[0x29] = 0;
                pbVar1[0x2a] = 0;
                pbVar1[0x2b] = 0;
                pbVar1[0x2c] = 0;
                pbVar1[0x2d] = 0;
              }
            }
            else {
              local_479 = 1;
              pbVar1[0x26] = 0;
              pbVar1[0x27] = 0;
              pbVar1[0x28] = 0;
              pbVar1[0x29] = 0;
              pbVar1[0x2a] = 0;
              pbVar1[0x2b] = 0;
              pbVar1[0x2c] = 0;
              pbVar1[0x2d] = 0;
            }
            pbVar1[0x2e] = 0;
            pbVar1[0x2f] = 0;
          }
          else if (bVar2 == 5) {
            puVar8 = (undefined *)(**(code **)(*param_1 + 0xf8))(param_1);
            if ((((short)puVar8 == 0xa6) ||
                (puVar8 = (undefined *)(**(code **)(*param_1 + 0xf8))(param_1),
                (short)puVar8 == 0xa7)) || (puVar8 = PTR_DAT_020052b8, *PTR_DAT_020052b8 != '\0')) {
              *pbVar1 = 4;
            }
            else {
              puVar8 = (undefined *)0x0;
              *pbVar1 = PTR_DAT_02004010[0x2ab];
            }
            if (*pbVar1 < 8) {
              uVar5 = (int)CONCAT71((int7)((ulonglong)puVar8 >> 8),1) << (*pbVar1 & 0x1f);
              bVar14 = (uVar5 & 0xfe) != 0;
              uVar9 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar14);
            }
            else {
              uVar9 = 0;
              bVar14 = false;
            }
            if (!bVar14) {
              if ((byte)(*pbVar1 - 8) < 8) {
                bVar14 = ((int)CONCAT71((int7)(uVar9 >> 8),1) << (*pbVar1 - 8 & 0x1f) & 0x70U) != 0;
              }
              else {
                bVar14 = false;
              }
              if (!bVar14) {
                if (*pbVar1 == 9) {
                  pbVar1[9] = 0;
                  pbVar1[10] = 0;
                  pbVar1[0xb] = 0;
                  pbVar1[0xc] = 0;
                  pbVar1[0xd] = 0;
                  pbVar1[0xe] = 0;
                  pbVar1[0xf] = 0;
                  pbVar1[0x10] = 0;
                  pbVar1[0x11] = 0;
                  pbVar1[0x12] = 0;
                  pbVar1[0x13] = 0;
                  pbVar1[0x14] = 0;
                  pbVar1[0x15] = 0;
                  pbVar1[0x16] = 0;
                  pbVar1[0x17] = 0;
                  pbVar1[0x18] = 0;
                  pbVar1[5] = 0;
                  pbVar1[6] = 0;
                  pbVar1[7] = 0;
                  pbVar1[8] = 0;
                  pbVar1[0x19] = 0;
                }
                else if (*pbVar1 == 8) {
                  pbVar1[9] = 0;
                  pbVar1[10] = 0;
                  pbVar1[0xb] = 0;
                  pbVar1[0xc] = 0;
                  pbVar1[0xd] = 0;
                  pbVar1[0xe] = 0;
                  pbVar1[0xf] = 0;
                  pbVar1[0x10] = 0;
                  pbVar1[1] = 0;
                  pbVar1[2] = 0;
                  pbVar1[3] = 0;
                  pbVar1[4] = 0;
                  pbVar1[5] = 0;
                  pbVar1[6] = 0;
                  pbVar1[7] = 0;
                  pbVar1[8] = 0;
                  pbVar1[0x11] = 0xf0;
                  pbVar1[0x12] = 0x68;
                  pbVar1[0x13] = 0xe3;
                  pbVar1[0x14] = 0x88;
                  pbVar1[0x15] = 0xb5;
                  pbVar1[0x16] = 0xf8;
                  pbVar1[0x17] = 0xf4;
                  pbVar1[0x18] = 0x3e;
                  pbVar1[0x19] = 100;
                  pbVar1[0x1a] = 0;
                  pbVar1[0x1b] = 0;
                  pbVar1[0x1c] = 0;
                  pbVar1[0x1d] = 0;
                }
                else if (*pbVar1 == 10) {
                  pbVar1[1] = 0;
                  pbVar1[2] = 0;
                  pbVar1[3] = 0;
                  pbVar1[4] = 0;
                  pbVar1[5] = 0;
                  pbVar1[6] = 0;
                  pbVar1[7] = 0;
                  pbVar1[8] = 0;
                  pbVar1[9] = 0;
                  pbVar1[10] = 0;
                  pbVar1[0xb] = 0;
                  pbVar1[0xc] = 0;
                  pbVar1[0xd] = 0;
                  pbVar1[0xe] = 0;
                  pbVar1[0xf] = 0;
                  pbVar1[0x10] = 0;
                  pbVar1[0x11] = 0;
                  pbVar1[0x12] = 0;
                  pbVar1[0x13] = 0;
                  pbVar1[0x14] = 0;
                  pbVar1[0x15] = 0;
                  pbVar1[0x16] = 0;
                  pbVar1[0x17] = 0;
                  pbVar1[0x18] = 0;
                  pbVar1[0x19] = 0;
                  pbVar1[0x1a] = 0;
                  pbVar1[0x1b] = 0;
                  pbVar1[0x1c] = 0xf0;
                  pbVar1[0x1d] = 0x3f;
                }
                else if (*pbVar1 == 0xb) {
                  pbVar1[1] = 0;
                  pbVar1[2] = 1;
                  pbVar1[3] = 0x8d;
                  pbVar1[4] = 0xed;
                  pbVar1[5] = 0xb5;
                  pbVar1[6] = 0xa0;
                  pbVar1[7] = 0xf7;
                  pbVar1[8] = 0xc6;
                  pbVar1[9] = 0xb0;
                  pbVar1[10] = 0x3e;
                  pbVar1[0xb] = 0;
                  pbVar1[0xc] = 0;
                  pbVar1[0xd] = 0;
                  pbVar1[0xe] = 0;
                  pbVar1[0xf] = 0xd0;
                  pbVar1[0x10] = 0x12;
                  pbVar1[0x11] = 99;
                  pbVar1[0x12] = 0x41;
                  pbVar1[0x17] = 0;
                  pbVar1[0x18] = 0;
                  pbVar1[0x19] = 0;
                  pbVar1[0x1a] = 0;
                  pbVar1[0x1b] = 0;
                  pbVar1[0x1c] = 0;
                  pbVar1[0x1d] = 0;
                  pbVar1[0x1e] = 0;
                }
                else if ((*pbVar1 == 0xf) &&
                        (FUN_00b909a0(pbVar1 + 1,0x68), *(longlong *)(pbVar1 + 1) == 0)) {
                  local_479 = 1;
                }
                goto LAB_01d3818e;
              }
            }
            *(ushort *)(pbVar1 + 0x11) = (ushort)(byte)(&DAT_01ff4ec2)[*pbVar1] * 8;
            FUN_00b909a0(pbVar1 + 1,*(undefined2 *)(pbVar1 + 0x11));
            if (*(longlong *)(pbVar1 + 1) == 0) {
              local_479 = 1;
            }
            else {
              FUN_016d7ec0(*(undefined8 *)(pbVar1 + 1),*pbVar1,param_1);
            }
            uVar10 = FUN_00409570((ulonglong)(byte)(&DAT_01ff4ec2)[*pbVar1] << 3);
            *(undefined8 *)(pbVar1 + 9) = uVar10;
            uVar5 = (uint)(byte)(&DAT_01ff4ec2)[*pbVar1];
            iVar12 = 0;
            if (-1 < (int)(uVar5 - 1)) {
              do {
                FUN_01d3a230(*(longlong *)(pbVar1 + 1),*(undefined8 *)(pbVar1 + 9),iVar12,
                             *(undefined8 *)(*(longlong *)(pbVar1 + 1) + (longlong)iVar12 * 8));
                iVar12 = iVar12 + 1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
          }
        }
        else {
          if (bVar2 != 7) {
            if (bVar2 == 8) {
              if (param_4 == '\0') {
                lVar7 = FUN_01cfd090(param_1,local_478);
                *local_30 = *(byte *)(lVar7 + 0x35);
              }
              else {
                lVar7 = FUN_01cfd090(param_1,local_478);
                *local_30 = *(byte *)(lVar7 + 0x34);
              }
            }
            else if (bVar2 == 9) {
              pbVar1[0x1f] = 0xff;
              pbVar1[0x20] = 0xff;
              pbVar1[0x23] = 0xff;
              pbVar1[0x24] = 0xff;
              if (param_4 == '\0') {
                lVar7 = FUN_01cfd090(param_1,local_478);
                FUN_00415020(local_30,lVar7 + 0x53,0x1e);
              }
              else {
                lVar7 = FUN_01cfd090(param_1,local_478);
                FUN_00415020(local_30,lVar7 + 0x34,0x1e);
              }
            }
            else if (bVar2 == 10) {
              *local_30 = 1;
              pbVar1[0x18] = 0;
              pbVar1[0x19] = 0;
              pbVar1[0x1a] = 0;
              pbVar1[0x1b] = 0;
              uVar10 = FUN_01d3aa60(0,&PTR_FUN_01d35400,5,2);
              *(undefined8 *)(pbVar1 + 8) = uVar10;
              pbVar1[0x10] = 0;
              pbVar1[0x11] = 0;
              pbVar1[0x12] = 0;
              pbVar1[0x13] = 0;
              pbVar1[0x14] = 0;
              pbVar1[0x15] = 0;
              pbVar1[0x16] = 0;
              pbVar1[0x17] = 0;
              FUN_01d3aad0(*(undefined8 *)(pbVar1 + 8),0,0);
            }
            goto LAB_01d3818e;
          }
          lVar7 = FUN_01cfd090(param_1,local_478);
          if (param_4 == '\0') {
            iVar12 = FUN_00414f50(lVar7 + 0x38,&DAT_01d38250,(ulonglong)*(byte *)(lVar7 + 0x38) + 1)
            ;
            if (iVar12 == 0) goto LAB_01d37ac2;
            FUN_00415020(pbVar1,lVar7 + 0x38,0x14);
            FUN_004169a0(&local_38,pbVar1);
            FUN_00415020(pbVar1 + 0x15,lVar7 + 0x4d,0x10);
            FUN_004169a0(&local_40,pbVar1 + 0x15);
            pbVar1[0x2f] = *(byte *)(lVar7 + 0x5e);
            if (pbVar1[0x2f] == 0) {
              pbVar1[0x38] = 5;
              pbVar1[0x39] = 0x5b;
              pbVar1[0x3a] = 0x41;
              pbVar1[0x3b] = 0x6c;
              pbVar1[0x3c] = 0x6c;
              pbVar1[0x3d] = 0x5d;
              pbVar1[0x138] = 0;
              pbVar1[0x139] = 0;
              pbVar1[0x13a] = 0;
              pbVar1[0x13b] = 0;
              pbVar1[0x13c] = 0;
              pbVar1[0x13d] = 0;
              pbVar1[0x13e] = 0;
              pbVar1[0x13f] = 0;
            }
            else {
              uVar10 = FUN_017105e0(0);
              FUN_01717180(uVar10,&local_350,(longlong)*(short *)(lVar7 + 0x5f));
              uVar10 = FUN_00416740(local_350);
              uVar10 = FUN_00442bd0(uVar10);
              *(undefined8 *)(pbVar1 + 0x138) = uVar10;
              uVar10 = FUN_017105e0(0);
              FUN_004167d0(&local_360,*(undefined8 *)(pbVar1 + 0x138));
              FUN_017170e0(uVar10,&local_358,local_360);
              FUN_00416910(pbVar1 + 0x38,local_358,0xff);
            }
          }
          else {
LAB_01d37ac2:
            FUN_0172c260(pbVar1,param_1,local_478);
            pbVar1[0x2f] = 0;
            pbVar1[0x38] = 5;
            pbVar1[0x39] = 0x5b;
            pbVar1[0x3a] = 0x41;
            pbVar1[0x3b] = 0x6c;
            pbVar1[0x3c] = 0x6c;
            pbVar1[0x3d] = 0x5d;
            pbVar1[0x138] = 0;
            pbVar1[0x139] = 0;
            pbVar1[0x13a] = 0;
            pbVar1[0x13b] = 0;
            pbVar1[0x13c] = 0;
            pbVar1[0x13d] = 0;
            pbVar1[0x13e] = 0;
            pbVar1[0x13f] = 0;
          }
          if ((*PTR_DAT_02002ce0 == '\0') && (iVar12 = FUN_01d43610(), 0x25 < iVar12)) {
            uVar10 = FUN_004095c0(0x25);
            *(undefined8 *)(pbVar1 + 0x26) = uVar10;
            lVar7 = *(longlong *)(pbVar1 + 0x26);
            FUN_0172c410(param_1,local_478,lVar7 + 1,lVar7 + 9,lVar7 + 0x19,lVar7 + 0x21,
                         lVar7 + 0x23,lVar7);
            if (*PTR_DAT_02002ce0 != '\0') {
              if (pbVar1[0x2f] == 0) {
                local_479 = 1;
                pbVar1[0x26] = 0;
                pbVar1[0x27] = 0;
                pbVar1[0x28] = 0;
                pbVar1[0x29] = 0;
                pbVar1[0x2a] = 0;
                pbVar1[0x2b] = 0;
                pbVar1[0x2c] = 0;
                pbVar1[0x2d] = 0;
              }
              else {
                FUN_0172c260(pbVar1,param_1,local_478);
                lVar7 = *(longlong *)(pbVar1 + 0x26);
                FUN_0172c410(param_1,local_478,lVar7 + 1,lVar7 + 9,lVar7 + 0x19,lVar7 + 0x21,
                             lVar7 + 0x23,lVar7);
                FUN_0172d980(param_1,0,local_40,&local_48);
                FUN_00416910(local_460,local_38,0xff);
                FUN_00415020(pbVar1,local_460,0x14);
                FUN_00416910(local_460,local_40,0xff);
                FUN_00415020(pbVar1 + 0x15,local_460,0x10);
                uVar10 = FUN_017105e0(0);
                FUN_004169a0(&local_468,pbVar1);
                uVar11 = FUN_016ffb50(local_468,0,param_1,uVar10);
                *(undefined8 *)(pbVar1 + 0x30) = uVar11;
                FUN_01710700(uVar10);
              }
            }
          }
          else {
            local_479 = 1;
            pbVar1[0x26] = 0;
            pbVar1[0x27] = 0;
            pbVar1[0x28] = 0;
            pbVar1[0x29] = 0;
            pbVar1[0x2a] = 0;
            pbVar1[0x2b] = 0;
            pbVar1[0x2c] = 0;
            pbVar1[0x2d] = 0;
          }
          pbVar1[0x2e] = 0;
          pbVar1[0x140] = 0;
          pbVar1[0x141] = 0;
          pbVar1[0x142] = 0;
          pbVar1[0x143] = 0;
          pbVar1[0x144] = 0;
          pbVar1[0x145] = 0;
          pbVar1[0x146] = 0;
          pbVar1[0x147] = 0;
          pbVar1[0x148] = 0;
        }
      }
      else if (bVar2 < 0x11) {
        if (bVar2 == 0x10) {
          if (param_4 == '\0') {
            lVar7 = FUN_01cfd090(param_1,local_478);
            *(undefined8 *)local_30 = *(undefined8 *)(lVar7 + 0x3c);
          }
          else {
            lVar7 = FUN_01cfd090(param_1,local_478);
            *(undefined8 *)local_30 = *(undefined8 *)(lVar7 + 0x34);
          }
        }
        else if (bVar2 == 0xc) {
          uVar6 = FUN_01d03160(param_1);
          FUN_013a5ad0(local_30,uVar6);
        }
        else if (bVar2 == 0xd) {
          if (param_4 == '\0') {
            lVar7 = FUN_01cfd090(param_1,local_478);
            *(undefined8 *)pbVar1 = *(undefined8 *)(lVar7 + 0x3e);
            lVar7 = FUN_01cfd090(param_1,local_478);
            pbVar1[8] = *(byte *)(lVar7 + 0x35);
          }
          else {
            lVar7 = FUN_01cfd090(param_1,local_478);
            *(undefined8 *)pbVar1 = *(undefined8 *)(lVar7 + 0x36);
            lVar7 = FUN_01cfd090(param_1,local_478);
            pbVar1[8] = *(byte *)(lVar7 + 0x34);
          }
          pbVar1[0x10] = 0;
          pbVar1[0x11] = 0;
          pbVar1[0x12] = 0;
          pbVar1[0x13] = 0;
          pbVar1[0x14] = 0;
          pbVar1[0x15] = 0;
          pbVar1[0x16] = 0;
          pbVar1[0x17] = 0;
          FUN_01d3a010(local_30,0xd,*(undefined8 *)pbVar1);
        }
        else if (bVar2 == 0xe) {
          uVar10 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
          *(undefined8 *)(pbVar1 + 8) = uVar10;
          uVar10 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
          *(undefined8 *)(pbVar1 + 0x10) = uVar10;
          FUN_01d03160(param_1);
          FUN_01d3da40(local_348,param_1);
          iVar12 = FUN_01d3e250(local_348,1);
          if (0 < iVar12) {
            do {
              FUN_01d3c020(*(undefined8 *)(pbVar1 + 8),4);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          iVar12 = FUN_01d3e250(local_348,2);
          if (0 < iVar12) {
            do {
              FUN_01d3c020(*(undefined8 *)(pbVar1 + 0x10),4);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        else if (bVar2 == 0xf) {
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0xf0;
          pbVar1[7] = 0x3f;
          pbVar1[8] = 0;
          pbVar1[9] = 0;
          pbVar1[10] = 0;
          pbVar1[0xb] = 0;
          pbVar1[0xc] = 0;
          pbVar1[0xd] = 0;
          pbVar1[0xe] = 0;
          pbVar1[0xf] = 0;
          uVar10 = FUN_01d3c1c0(0,&PTR_FUN_01d35570,0x32,0x19);
          *(undefined8 *)(pbVar1 + 0x10) = uVar10;
          FUN_01d3c230(*(undefined8 *)(pbVar1 + 0x10),0x3bc79ca10c924223,0x3ff0000000000000,0);
        }
      }
      else if (bVar2 == 0x11) {
        uVar10 = FUN_004b6930(&PTR_FUN_00478280,1);
        *(undefined8 *)pbVar1 = uVar10;
      }
      else if (bVar2 == 0x12) {
        uVar3 = FUN_01d03160(param_1);
        FUN_013a5b70(local_30,uVar3);
        local_30[0x10] = 0;
        local_30[0x11] = 0;
        local_30[0x12] = 0;
        local_30[0x13] = 0;
        local_30[0x20] = 0x8d;
        local_30[0x21] = 0xed;
        local_30[0x22] = 0xb5;
        local_30[0x23] = 0xa0;
        local_30[0x24] = 0xf7;
        local_30[0x25] = 0xc6;
        local_30[0x26] = 0xb0;
        local_30[0x27] = 0x3e;
        local_30[0x18] = 0;
        local_30[0x19] = 0;
        local_30[0x1a] = 0;
        local_30[0x1b] = 0;
        local_30[0x1c] = 7;
        local_30[0x1d] = 0;
        local_30[0x1e] = 0;
        local_30[0x1f] = 0;
        local_30[0x28] = 0;
        local_30[0x29] = 0;
        local_30[0x2a] = 0;
        local_30[0x2b] = 0;
        local_30[0x34] = 0;
        local_30[0x35] = 0;
        local_30[0x36] = 0;
        local_30[0x37] = 0;
        local_30[0x38] = 1;
        local_30[0x39] = 0;
        local_30[0x3a] = 0;
        local_30[0x3b] = 0;
        *(uint *)(local_30 + 0x3c) = (uint)*(ushort *)(local_30 + 2);
        local_30[0x2c] = 0;
        local_30[0x2d] = 0;
        local_30[0x2e] = 0;
        local_30[0x2f] = 0;
        local_30[0x30] = 7;
        local_30[0x31] = 0;
        local_30[0x32] = 0;
        local_30[0x33] = 0;
        local_30[0x40] = 0;
      }
      else if (bVar2 == 0x13) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
      }
      else if (bVar2 == 0x14) {
        uVar3 = FUN_01d03160(param_1);
        FUN_013a5bd0(local_30,uVar3);
        local_30[0x10] = 1;
        local_30[0x11] = 0;
        local_30[0x12] = 0;
        local_30[0x13] = 0;
        local_30[0x28] = 0x8d;
        local_30[0x29] = 0xed;
        local_30[0x2a] = 0xb5;
        local_30[0x2b] = 0xa0;
        local_30[0x2c] = 0xf7;
        local_30[0x2d] = 0xc6;
        local_30[0x2e] = 0xb0;
        local_30[0x2f] = 0x3e;
        local_30[0x1c] = 0;
        local_30[0x1d] = 0;
        local_30[0x1e] = 0;
        local_30[0x1f] = 0;
        local_30[0x20] = 7;
        local_30[0x21] = 0;
        local_30[0x22] = 0;
        local_30[0x23] = 0;
        local_30[0x38] = 0;
        local_30[0x39] = 0;
        local_30[0x3a] = 0;
        local_30[0x3b] = 0;
        local_30[0x44] = 0;
        local_30[0x45] = 0;
        local_30[0x46] = 0;
        local_30[0x47] = 0;
        local_30[0x48] = 1;
        local_30[0x49] = 0;
        local_30[0x4a] = 0;
        local_30[0x4b] = 0;
        local_30[0x4c] = 0;
        local_30[0x4d] = 0;
        local_30[0x4e] = 0;
        local_30[0x4f] = 0;
        local_30[0x3c] = 0;
        local_30[0x3d] = 0;
        local_30[0x3e] = 0;
        local_30[0x3f] = 0;
        local_30[0x40] = 7;
        local_30[0x41] = 0;
        local_30[0x42] = 0;
        local_30[0x43] = 0;
        local_30[0x18] = 0x12;
        local_30[0x19] = 0;
        local_30[0x1a] = 0;
        local_30[0x1b] = 0;
        local_30[0x30] = 0x3f;
        local_30[0x31] = 0xab;
        local_30[0x32] = 0xcc;
        local_30[0x33] = 0x94;
        local_30[0x34] = 0xd6;
        local_30[0x35] = 0xdf;
        local_30[0x36] = 0xf2;
        local_30[0x37] = 0x3e;
        local_30[0x50] = 0;
      }
LAB_01d3818e:
      local_478 = local_478 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  FUN_00414480(&local_468);
  FUN_00414560(&local_360,3);
  FUN_00414560(&local_48,3);
  return local_479;
}


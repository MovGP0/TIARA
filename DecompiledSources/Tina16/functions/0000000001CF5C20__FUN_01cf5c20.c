/* Ghidra address: 01cf5c20 */
/* Ghidra symbol: FUN_01cf5c20 */


undefined1 FUN_01cf5c20(longlong *param_1,undefined8 param_2,undefined4 param_3,ushort param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 local_res10 [3];
  undefined1 local_19b;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [264];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ushort *local_60;
  undefined4 local_58;
  short local_52;
  undefined4 local_50;
  int local_4c;
  short local_46;
  undefined1 local_43;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_190 = 0;
  local_198 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  bVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,param_3,&local_60);
  puVar2 = local_60;
  if (bVar3 < 0xc) {
    if (bVar3 == 0xb) {
      FUN_01d30f00(local_res10[0],local_60 + 0x20,1);
      FUN_01d30f00(local_res10[0],local_60,1);
      uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(local_60 + 4) = uVar5;
      uVar5 = FUN_01d32040(local_res10[0],uVar5);
      *(byte *)(local_60 + 0x18) = 0;
      *(byte *)((longlong)local_60 + 0x31) = 1;
      puVar2[0x1c] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x1f] = 0;
      if ((byte)local_60[0x20] < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)local_60[0x20] & 0x1f) &
                 3U) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        FUN_01d30f00(local_res10[0],local_60 + 8,2);
        uVar5 = FUN_00409570((ulonglong)local_60[8] << 3);
        *(undefined8 *)(local_60 + 0xc) = uVar5;
        FUN_01d30f00(local_res10[0],*(undefined8 *)(local_60 + 0xc),(ulonglong)local_60[8] << 3);
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x16] = 0;
        puVar2[0x17] = 0;
        local_60[0x24] = 0;
        puVar2[0x28] = 0;
        puVar2[0x29] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x2b] = 0;
      }
      else {
        FUN_01d30f00(local_res10[0],&local_52,2);
        uVar5 = FUN_004095c0(local_52);
        *(undefined8 *)(local_60 + 0x10) = uVar5;
        FUN_01d30f00(local_res10[0],*(undefined8 *)(local_60 + 0x10),local_52);
        local_60[8] = (ushort)(byte)*local_60;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x16] = 0;
        puVar2[0x17] = 0;
        uVar5 = FUN_00409570((ulonglong)local_60[8] << 3);
        *(undefined8 *)(local_60 + 0xc) = uVar5;
        if ((byte)local_60[0x20] == 3) {
          FUN_01d30f00(local_res10[0],local_60 + 0x24,2);
          uVar5 = FUN_00409570((ulonglong)local_60[0x24] << 3);
          *(undefined8 *)(local_60 + 0x28) = uVar5;
          FUN_01d30f00(local_res10[0],*(undefined8 *)(local_60 + 0x28),
                       (ulonglong)local_60[0x24] << 3);
        }
        else {
          local_60[0x24] = 0;
          puVar2[0x28] = 0;
          puVar2[0x29] = 0;
          puVar2[0x2a] = 0;
          puVar2[0x2b] = 0;
        }
      }
    }
    else if (bVar3 < 7) {
      if (bVar3 == 6) {
        FUN_01d30f00(local_res10[0],local_60,8);
        if (param_4 < 0x43) {
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          FUN_01d3a010(local_60,6,*(undefined8 *)puVar2);
        }
        else {
          FUN_01d30f00(local_res10[0],&local_52,2);
          uVar5 = FUN_004095c0(local_52);
          *(undefined8 *)(puVar2 + 4) = uVar5;
          FUN_01d30f00(local_res10[0],uVar5,local_52);
        }
        FUN_01d30f00(local_res10[0],puVar2 + 8,4);
        FUN_01d30f00(local_res10[0],puVar2 + 0xc,1);
        if (param_4 < 0x13) {
          *(byte *)(puVar2 + 0xc) = (byte)puVar2[0xc] - 1;
        }
        if ((byte)puVar2[0xc] == 2) {
          FUN_00b909a0(puVar2 + 0x10,0x13);
          if (*(longlong *)(puVar2 + 0x10) != 0) {
            FUN_01d30f00(local_res10[0],*(undefined8 *)(puVar2 + 0x10),0x13);
          }
        }
        else {
          puVar2[0x10] = 0;
          puVar2[0x11] = 0;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
        }
      }
      else if (bVar3 < 4) {
        if (bVar3 == 3) {
          FUN_01d30f00(local_res10[0],local_60,8);
          if (param_4 < 0x43) {
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[7] = 0;
            FUN_01d3a010(local_60,3,*(undefined8 *)puVar2);
          }
          else {
            FUN_01d30f00(local_res10[0],&local_52,2);
            uVar5 = FUN_004095c0(local_52);
            *(undefined8 *)(puVar2 + 4) = uVar5;
            FUN_01d30f00(local_res10[0],uVar5,local_52);
          }
        }
        else if (bVar3 == 1) {
          FUN_01d312b0(local_res10[0],local_60,0x1e);
        }
        else if (bVar3 == 2) {
          FUN_01d30f00(local_res10[0],local_60,2);
        }
      }
      else if (bVar3 == 4) {
        FUN_01d312b0(local_res10[0],local_60,0x14);
        FUN_004169a0(&local_30,puVar2);
        FUN_01d312b0(local_res10[0],(byte *)((longlong)puVar2 + 0x15),0x10);
        FUN_004169a0(&local_38,(byte *)((longlong)puVar2 + 0x15));
        if ((param_4 < 0x13) &&
           (iVar4 = FUN_00414f50((byte *)((longlong)puVar2 + 0x15),&DAT_01cf74d4,
                                 (ulonglong)*(byte *)((longlong)puVar2 + 0x15) + 1), iVar4 == 0)) {
          pbVar1 = (byte *)((longlong)puVar2 + 0x15);
          pbVar1[0] = 8;
          pbVar1[1] = 0x48;
          pbVar1[2] = 0x69;
          pbVar1[3] = 0x62;
          pbVar1[4] = 0x72;
          pbVar1[5] = 0x69;
          pbVar1[6] = 100;
          pbVar1[7] = 0x2d;
          *(char *)((longlong)puVar2 + 0x1d) = 'P';
        }
        iVar4 = FUN_01d43610();
        if (iVar4 < 0x26) {
          puVar2[0x13] = 0;
          puVar2[0x14] = 0;
          puVar2[0x15] = 0;
          puVar2[0x16] = 0;
          *(byte *)(puVar2 + 0x17) = 0;
          *(byte *)((longlong)puVar2 + 0x2f) = 0;
        }
        else {
          *(byte *)(puVar2 + 0x17) = 0;
          *(byte *)((longlong)puVar2 + 0x2f) = 0;
          lVar6 = FUN_004095c0(0x25);
          *(longlong *)(puVar2 + 0x13) = lVar6;
          if (0x20 < param_4) {
            FUN_01d30f00(local_res10[0],(byte *)((longlong)puVar2 + 0x2f),1);
          }
          FUN_0172c410(param_1,param_3,lVar6 + 1,lVar6 + 9,lVar6 + 0x19,lVar6 + 0x21,lVar6 + 0x23,
                       lVar6);
          FUN_01d30f00(local_res10[0],puVar2 + 0x17,1);
          if ((byte)puVar2[0x17] == 1) {
            if (param_4 < 0x17) {
              if (*PTR_DAT_02002ce0 == '\0') {
                FUN_01d30f00(local_res10[0],*(undefined8 *)(lVar6 + 9),*(undefined2 *)(lVar6 + 0x23)
                            );
              }
            }
            else {
              FUN_01d30f00(local_res10[0],&local_52,2);
              if ((*PTR_DAT_02002ce0 == '\0') && (local_52 == *(short *)(lVar6 + 0x23))) {
                FUN_01d30f00(local_res10[0],*(undefined8 *)(lVar6 + 9),*(undefined2 *)(lVar6 + 0x23)
                            );
              }
              else {
                uVar5 = FUN_004095c0(local_52);
                FUN_01d30f00(local_res10[0],uVar5,local_52);
                FUN_004095f0(uVar5,local_52);
              }
            }
          }
          if (*PTR_DAT_02002ce0 != '\0') {
            *(byte *)(puVar2 + 0x17) = 0;
            *(byte *)((longlong)puVar2 + 0x2f) = 0;
            FUN_0172c260(local_60,param_1,param_3);
            FUN_0172c410(param_1,param_3,lVar6 + 1,lVar6 + 9,lVar6 + 0x19,lVar6 + 0x21,lVar6 + 0x23,
                         lVar6);
            FUN_00416910(local_188,local_30,0xff);
            FUN_00415020(puVar2,local_188,0x14);
            FUN_00416910(local_188,local_38,0xff);
            FUN_00415020((byte *)((longlong)puVar2 + 0x15),local_188,0x10);
            *PTR_DAT_02002ce0 = 0;
          }
        }
      }
      else if (bVar3 == 5) {
        FUN_01d30f00(local_res10[0],&local_42,1);
        *(byte *)local_60 = local_42;
        if (local_42 == 8) {
          pbVar1 = (byte *)((longlong)local_60 + 0x11);
          pbVar1[0] = 0xf0;
          pbVar1[1] = 0x68;
          pbVar1[2] = 0xe3;
          pbVar1[3] = 0x88;
          pbVar1[4] = 0xb5;
          pbVar1[5] = 0xf8;
          pbVar1[6] = 0xf4;
          pbVar1[7] = 0x3e;
          pbVar1 = (byte *)((longlong)local_60 + 0x19);
          pbVar1[0] = 100;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(byte *)((longlong)local_60 + 0x1d) = 0;
          uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
          *(undefined8 *)((longlong)local_60 + 9) = uVar5;
          if (param_4 < 0x13) {
            FUN_00ef4110(local_res10,*(undefined8 *)((longlong)local_60 + 9));
          }
          else {
            FUN_01d32040(local_res10[0],*(undefined8 *)((longlong)local_60 + 9));
            if (0x22 < param_4) {
              FUN_01d30f00(local_res10[0],(byte *)((longlong)local_60 + 0x11),0x10);
            }
          }
          pbVar1 = (byte *)((longlong)local_60 + 1);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
        else if (local_42 == 9) {
          uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
          *(undefined8 *)((longlong)local_60 + 0x11) = uVar5;
          FUN_01d30f00(local_res10[0],(byte *)((longlong)local_60 + 5),4);
          FUN_01d32040(local_res10[0],*(undefined8 *)((longlong)local_60 + 0x11));
          if (0 < *(int *)((longlong)local_60 + 5)) {
            (**(code **)(**(longlong **)((longlong)local_60 + 0x11) + 0x38))
                      (*(longlong **)((longlong)local_60 + 0x11),&local_198);
            FUN_0043e130(&local_190,local_198);
            iVar4 = FUN_004170c0(L"FOREVER",local_190,1);
            if (iVar4 == 0) {
              (**(code **)(**(longlong **)((longlong)local_60 + 0x11) + 200))
                        (*(longlong **)((longlong)local_60 + 0x11),2,L"REPEAT FOREVER");
              (**(code **)(**(longlong **)((longlong)local_60 + 0x11) + 0x78))
                        (*(longlong **)((longlong)local_60 + 0x11),L"ENDREPEAT");
            }
          }
          pbVar1 = (byte *)((longlong)local_60 + 9);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(byte *)((longlong)local_60 + 0x19) = 0;
        }
        else if (local_42 == 10) {
          FUN_01d30f00(local_res10[0],&local_41,1);
          if (param_4 < 0x44) {
            FUN_01d312f0(local_res10[0],&local_40);
          }
          else {
            FUN_01d316c0(local_res10[0],&local_40);
          }
          if (param_4 < 0x42) {
            puVar2[0xb] = 0;
            puVar2[0xc] = 0;
            puVar2[0xd] = 0;
            puVar2[0xe] = 0x3ff0;
          }
          else {
            FUN_01d30f00(local_res10[0],local_60 + 0xb,8);
          }
          uVar5 = FUN_00416740(local_40);
          uVar5 = FUN_00442bd0(uVar5);
          *(undefined8 *)(local_60 + 1) = uVar5;
          *(byte *)((longlong)local_60 + 1) = local_41 & 0xef;
          local_41 = local_41 & 0x10;
          if (local_41 == 0) {
            puVar2[7] = 0;
            puVar2[8] = 0;
            puVar2[9] = 0;
            puVar2[10] = 0;
          }
          else {
            FUN_01d30f00(local_res10[0],&local_58,4);
            uVar5 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
            *(undefined8 *)(local_60 + 7) = uVar5;
            FUN_01d32710(local_res10[0],*(undefined8 *)(local_60 + 7),local_58);
            FUN_004b6dc0(*(undefined8 *)(local_60 + 7),0);
          }
          puVar2[5] = 0;
          puVar2[6] = 0;
        }
        else if (local_42 == 0xb) {
          FUN_01d30f00(local_res10[0],(byte *)((longlong)local_60 + 1),1);
          FUN_01d30f00(local_res10[0],local_60 + 1,1);
          FUN_01d30f00(local_res10[0],(byte *)((longlong)local_60 + 3),8);
          FUN_01d30f00(local_res10[0],(byte *)((longlong)local_60 + 0xb),8);
          pbVar1 = (byte *)((longlong)local_60 + 0x17);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
        else {
          *(ushort *)((longlong)local_60 + 0x11) =
               (ushort)(byte)PTR_DAT_02001408[(ulonglong)local_42 - 1] * 8;
          FUN_00b909a0((byte *)((longlong)local_60 + 1),*(undefined2 *)((longlong)local_60 + 0x11));
          uVar5 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)local_42 - 1] << 3);
          *(undefined8 *)((longlong)local_60 + 9) = uVar5;
          if (*(longlong *)((longlong)local_60 + 1) != 0) {
            FUN_01d30f00(local_res10[0],*(undefined8 *)((longlong)local_60 + 1),
                         (ulonglong)(byte)PTR_DAT_02001408[(ulonglong)local_42 - 1] << 3);
          }
          uVar9 = (uint)(byte)PTR_DAT_02001408[(ulonglong)local_42 - 1];
          iVar4 = 0;
          if (-1 < (int)(uVar9 - 1)) {
            do {
              if (param_4 < 0x43) {
                FUN_01d3a230(*(undefined8 *)((longlong)local_60 + 1),
                             *(undefined8 *)((longlong)local_60 + 9),iVar4,
                             *(undefined8 *)
                              (*(longlong *)((longlong)local_60 + 1) + (longlong)iVar4 * 8));
              }
              else {
                FUN_01d30f00(local_res10[0],&local_52,2);
                uVar5 = FUN_004095c0(local_52);
                *(undefined8 *)(*(longlong *)((longlong)local_60 + 9) + (longlong)iVar4 * 8) = uVar5
                ;
                FUN_01d30f00(local_res10[0],
                             *(undefined8 *)
                              (*(longlong *)((longlong)local_60 + 9) + (longlong)iVar4 * 8),local_52
                            );
              }
              iVar4 = iVar4 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
      }
    }
    else if (bVar3 == 7) {
      FUN_01d312b0(local_res10[0],local_60,0x14);
      FUN_004169a0(&local_30,local_60);
      FUN_01d312b0(local_res10[0],(byte *)((longlong)local_60 + 0x15),0x10);
      FUN_004169a0(&local_38,(byte *)((longlong)local_60 + 0x15));
      if ((param_4 < 0x13) &&
         (iVar4 = FUN_00414f50((byte *)((longlong)local_60 + 0x15),&DAT_01cf74d4,
                               (ulonglong)*(byte *)((longlong)local_60 + 0x15) + 1), iVar4 == 0)) {
        pbVar1 = (byte *)((longlong)local_60 + 0x15);
        pbVar1[0] = 8;
        pbVar1[1] = 0x48;
        pbVar1[2] = 0x69;
        pbVar1[3] = 0x62;
        pbVar1[4] = 0x72;
        pbVar1[5] = 0x69;
        pbVar1[6] = 100;
        pbVar1[7] = 0x2d;
        *(char *)((longlong)local_60 + 0x1d) = 'P';
      }
      iVar4 = FUN_01d43610();
      if (iVar4 < 0x26) {
        puVar2[0x13] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x16] = 0;
        *(byte *)(local_60 + 0x17) = 0;
        *(byte *)((longlong)local_60 + 0x2f) = 0;
      }
      else {
        *(byte *)(local_60 + 0x17) = 0;
        *(byte *)((longlong)local_60 + 0x2f) = 0;
        puVar2[0x1c] = 0x5b05;
        puVar2[0x1d] = 0x6c41;
        local_60[0x1e] = 0x5d6c;
        puVar2[0x18] = 0;
        puVar2[0x19] = 0;
        puVar2[0x1a] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x9c] = 0;
        puVar2[0x9d] = 0;
        puVar2[0x9e] = 0;
        puVar2[0x9f] = 0;
        lVar6 = FUN_004095c0(0x25);
        *(longlong *)(local_60 + 0x13) = lVar6;
        if (0x20 < param_4) {
          FUN_01d30f00(local_res10[0],(byte *)((longlong)local_60 + 0x2f),1);
        }
        if (*(byte *)((longlong)local_60 + 0x2f) != 0) {
          FUN_0172c260(local_60,param_1,param_3);
        }
        FUN_0172c410(param_1,param_3,lVar6 + 1,lVar6 + 9,lVar6 + 0x19,lVar6 + 0x21,lVar6 + 0x23,
                     lVar6);
        if (*(byte *)((longlong)local_60 + 0x2f) != 0) {
          FUN_00416910(local_188,local_30,0xff);
          FUN_00415020(local_60,local_188,0x14);
          FUN_00416910(local_188,local_38,0xff);
          FUN_00415020((byte *)((longlong)local_60 + 0x15),local_188,0x10);
          if (param_4 < 0x2e) {
            uVar5 = FUN_017105e0(0);
            uVar7 = FUN_016ffb50(local_30,0,param_1,uVar5);
            *(undefined8 *)(local_60 + 0x18) = uVar7;
            FUN_01710700(uVar5);
          }
          else {
            uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
            *(undefined8 *)(local_60 + 0x18) = uVar5;
            FUN_01d32040(local_res10[0],*(undefined8 *)(local_60 + 0x18));
            if (0x30 < param_4) {
              FUN_01d312b0(local_res10[0],local_60 + 0x1c,0xff);
            }
          }
        }
        FUN_01d30f00(local_res10[0],local_60 + 0x17,1);
        if ((byte)local_60[0x17] == 1) {
          if (param_4 < 0x17) {
            if (*PTR_DAT_02002ce0 == '\0') {
              FUN_01d30f00(local_res10[0],*(undefined8 *)(lVar6 + 9),*(undefined2 *)(lVar6 + 0x23));
            }
          }
          else {
            FUN_01d30f00(local_res10[0],&local_52,2);
            if ((*PTR_DAT_02002ce0 == '\0') && (local_52 == *(short *)(lVar6 + 0x23))) {
              FUN_01d30f00(local_res10[0],*(undefined8 *)(lVar6 + 9),*(undefined2 *)(lVar6 + 0x23));
            }
            else {
              uVar5 = FUN_004095c0(local_52);
              FUN_01d30f00(local_res10[0],uVar5,local_52);
              FUN_004095f0(uVar5,local_52);
            }
          }
        }
        if (*PTR_DAT_02002ce0 != '\0') {
          *(byte *)(local_60 + 0x17) = 0;
          *(byte *)((longlong)local_60 + 0x2f) = 0;
          FUN_0172c260(local_60,param_1,param_3);
          FUN_0172c410(param_1,param_3,lVar6 + 1,lVar6 + 9,lVar6 + 0x19,lVar6 + 0x21,lVar6 + 0x23,
                       lVar6);
          FUN_00416910(local_188,local_30,0xff);
          FUN_00415020(local_60,local_188,0x14);
          FUN_00416910(local_188,local_38,0xff);
          FUN_00415020((byte *)((longlong)local_60 + 0x15),local_188,0x10);
          *PTR_DAT_02002ce0 = 0;
        }
      }
      FUN_01d30f00(local_res10[0],&local_42,1);
      if (local_42 == 0) {
        puVar2[0xa0] = 0;
        puVar2[0xa1] = 0;
        puVar2[0xa2] = 0;
        puVar2[0xa3] = 0;
        *(byte *)(local_60 + 0xa4) = 0;
      }
      else {
        puVar2 = local_60 + 0xa0;
        iVar4 = FUN_01d43610();
        if ((iVar4 < 0x21) || (*PTR_DAT_02002ce0 != '\0')) {
          puVar2[0] = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *(byte *)(local_60 + 0xa4) = 0;
        }
        else {
          *(byte *)(local_60 + 0xa4) = 0;
          uVar5 = FUN_004095c0(0x20);
          *(undefined8 *)puVar2 = uVar5;
          lVar6 = *(longlong *)puVar2;
          FUN_0172c310(param_1,param_3,*(undefined1 *)(*(longlong *)(local_60 + 0x13) + 0x21),
                       lVar6 + 8,lVar6 + 0x10,lVar6 + 0x19,lVar6 + 0x1a);
          *(undefined1 *)(lVar6 + 0x18) = *(undefined1 *)(*(longlong *)(local_60 + 0x13) + 0x21);
          FUN_01d30f00(local_res10[0],local_60 + 0xa4,1);
          if (((byte)local_60[0xa4] == 1) && (*PTR_DAT_02002ce0 == '\0')) {
            FUN_01d30f00(local_res10[0],*(undefined8 *)(lVar6 + 0x10),*(undefined2 *)(lVar6 + 0x1a))
            ;
          }
          if (*PTR_DAT_02002ce0 != '\0') {
            FUN_004095f0(*(undefined8 *)puVar2);
            *(byte *)(local_60 + 0xa4) = 0;
            puVar2[0] = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *PTR_DAT_02002ce0 = 0;
          }
        }
      }
    }
    else if (bVar3 == 8) {
      FUN_01d30f00(local_res10[0],local_60,1);
    }
    else if (bVar3 == 9) {
      FUN_01d312b0(local_res10[0],local_60,0x1e);
    }
    else if (bVar3 == 10) {
      FUN_01d30f00(local_res10[0],local_60,1);
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      if (0x2e < param_4) {
        FUN_01d30f00(local_res10[0],local_60 + 0xc,4);
      }
      if ((byte)*local_60 == 1) {
        local_4c = 0;
        if (param_4 < 0x38) {
          FUN_01d30f00(local_res10[0],&local_4c,1);
        }
        else {
          FUN_01d30f00(local_res10[0],&local_4c,4);
        }
        uVar5 = FUN_01d3aa60(0,&PTR_FUN_01d35400,5,2);
        *(undefined8 *)(local_60 + 4) = uVar5;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        *(undefined4 *)(*(longlong *)(local_60 + 4) + 0x20) = *(undefined4 *)(local_60 + 0xc);
        iVar4 = local_4c;
        if (-1 < local_4c + -1) {
          do {
            FUN_01d30f00(local_res10[0],&local_68,8);
            FUN_01d30f00(local_res10[0],&local_43,1);
            FUN_01d3aad0(*(undefined8 *)(local_60 + 4),local_68,local_43);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else if ((byte)*local_60 == 2) {
        FUN_00ef40a0(local_res10,local_60 + 8);
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
      }
    }
  }
  else if (bVar3 < 0x11) {
    if (bVar3 == 0x10) {
      FUN_01d30f00(local_res10[0],local_60,8);
    }
    else if (bVar3 == 0xc) {
      FUN_01d30f00(local_res10[0],local_60 + 1,2);
      FUN_01d30f00(local_res10[0],local_60,2);
      uVar5 = FUN_004095c0((uint)*local_60 * 2);
      *(undefined8 *)(local_60 + 4) = uVar5;
      uVar9 = (uint)*local_60;
      iVar4 = 0;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          FUN_01d30f00(local_res10[0],*(longlong *)(local_60 + 4) + (longlong)iVar4 * 2,2);
          iVar4 = iVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else if (bVar3 == 0xd) {
      FUN_01d30f00(local_res10[0],local_60,8);
      FUN_01d30f00(local_res10[0],puVar2 + 4,1);
      if (param_4 < 0x43) {
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        FUN_01d3a010(local_60,0xd,*(undefined8 *)puVar2);
      }
      else {
        FUN_01d30f00(local_res10[0],&local_52,2);
        uVar5 = FUN_004095c0(local_52);
        *(undefined8 *)(puVar2 + 8) = uVar5;
        FUN_01d30f00(local_res10[0],*(undefined8 *)(puVar2 + 8),local_52);
      }
    }
    else if (bVar3 == 0xe) {
      FUN_01d30f00(local_res10[0],local_60,1);
      FUN_01d30f00(local_res10[0],&local_42,1);
      uVar5 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
      *(undefined8 *)(local_60 + 4) = uVar5;
      uVar9 = (uint)local_42;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          FUN_01d30f00(local_res10[0],&local_50,4);
          FUN_01d3c020(*(undefined8 *)(local_60 + 4),local_50);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      FUN_01d30f00(local_res10[0],&local_42,1);
      uVar5 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
      *(undefined8 *)(local_60 + 8) = uVar5;
      uVar9 = (uint)local_42;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          FUN_01d30f00(local_res10[0],&local_50,4);
          FUN_01d3c020(*(undefined8 *)(local_60 + 8),local_50);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else if (bVar3 == 0xf) {
      FUN_01d30f00(local_res10[0],local_60,8);
      FUN_01d30f00(local_res10[0],local_60 + 4,8);
      FUN_01d30f00(local_res10[0],&local_46,2);
      uVar5 = FUN_01d3c1c0(0,&PTR_FUN_01d35570,0x32,0x19);
      *(undefined8 *)(local_60 + 8) = uVar5;
      iVar4 = (int)local_46;
      if (-1 < iVar4 + -1) {
        do {
          FUN_01d30f00(local_res10[0],&local_70,8);
          FUN_01d30f00(local_res10[0],&local_78,8);
          FUN_01d30f00(local_res10[0],&local_80,8);
          FUN_01d3c230(*(undefined8 *)(local_60 + 8),local_70,local_78,local_80);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  else if (bVar3 == 0x11) {
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)local_60 = uVar5;
    FUN_01d32040(local_res10[0],uVar5);
  }
  else if (bVar3 == 0x12) {
    FUN_01d30f00(local_res10[0],local_60 + 8,4);
    FUN_01d30f00(local_res10[0],local_60 + 0xc,0x10);
    FUN_01d30f00(local_res10[0],local_60 + 0x14,0x18);
    FUN_01d30f00(local_res10[0],local_60 + 1,2);
    FUN_01d30f00(local_res10[0],local_60,2);
    uVar5 = FUN_004095c0((uint)*local_60 * 2);
    *(undefined8 *)(local_60 + 4) = uVar5;
    uVar9 = (uint)*local_60;
    iVar4 = 0;
    if (-1 < (int)(uVar9 - 1)) {
      do {
        FUN_01d30f00(local_res10[0],*(longlong *)(local_60 + 4) + (longlong)iVar4 * 2,2);
        iVar4 = iVar4 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (0x31 < param_4) {
      FUN_01d30f00(local_res10[0],local_60 + 0x20,1);
    }
  }
  else if (bVar3 == 0x13) {
    FUN_01d30f00(local_res10[0],local_60,4);
    FUN_01d30f00(local_res10[0],local_60 + 2,4);
    FUN_01d30f00(local_res10[0],local_60 + 4,4);
  }
  else if (bVar3 == 0x14) {
    FUN_01d30f00(local_res10[0],local_60 + 8,4);
    FUN_01d30f00(local_res10[0],local_60 + 0xc,0x20);
    FUN_01d30f00(local_res10[0],local_60 + 0x1c,0x18);
    FUN_01d30f00(local_res10[0],local_60 + 2,4);
    FUN_01d30f00(local_res10[0],local_60,4);
    uVar5 = FUN_004095c0((longlong)(*(int *)local_60 * 4));
    *(undefined8 *)(local_60 + 4) = uVar5;
    iVar4 = *(int *)local_60;
    iVar8 = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_01d30f00(local_res10[0],*(longlong *)(local_60 + 4) + (longlong)iVar8 * 4,4);
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (0x31 < param_4) {
      FUN_01d30f00(local_res10[0],local_60 + 0x28,1);
    }
  }
  FUN_00414560(&local_198,2);
  FUN_00414560(&local_40,3);
  return local_19b;
}


/* Ghidra address: 015f79c0 */
/* Ghidra symbol: FUN_015f79c0 */


void FUN_015f79c0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  short *psVar11;
  undefined2 *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  int local_104;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  char local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [3];
  undefined4 local_74;
  undefined1 local_70 [24];
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_90[0] = 0;
  local_98 = 0;
  local_a0 = 0;
  FUN_00417580(local_58,&DAT_00e021a8);
  FUN_00417580(local_70,&DAT_00e021a8);
  iVar15 = *(int *)(param_1 + 0x10);
  local_104 = 0;
  if (-1 < iVar15 + -1) {
    do {
      lVar8 = FUN_004aeac0(param_1,local_104);
      if (*(char *)(lVar8 + 0x18) != '\0' || param_3 != '\0') {
        plVar1 = *(longlong **)(lVar8 + 0x10);
        sVar4 = FUN_01d03160();
        if ((char)plVar1[0xac] == '\0') {
          if (((sVar4 == 0x460) || (sVar4 == 0x461)) || (sVar4 == 0x2c)) {
            pcVar9 = (char *)FUN_01cfde70(plVar1,1,1,&local_3a,&local_3b,&local_39);
            cVar2 = FUN_01576400(lVar8,0);
            if (sVar4 == 0x2c) {
              uVar5 = FUN_01576400(lVar8,1);
              if ((cVar2 == '\x01') && (cVar2 = FUN_01600360(uVar5), cVar2 != '\0')) {
                *pcVar9 = '\x01';
              }
              else {
                *pcVar9 = '\0';
              }
            }
            else if (cVar2 == '\x01') {
              *pcVar9 = '\x01';
            }
            else {
              *pcVar9 = '\0';
            }
            local_a8 = 1;
            local_a4 = *pcVar9;
            FUN_01d04b50(plVar1,&local_a8);
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
            FUN_017ff4f0(plVar1,local_90);
            if (*pcVar9 == '\x01') {
              FUN_00416cd0(&local_98,3,L"SetState(",local_90[0],&DAT_015f8758);
            }
            else {
              FUN_00416cd0(&local_98,3,L"SetState(",local_90[0],&DAT_015f876c);
            }
            if (param_2 != (longlong *)0x0) {
              puVar17 = &local_a0;
              puVar16 = &local_30;
              FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_b0,local_90[0],L"SetState",puVar17
                           ,puVar16,&local_34);
              uVar7 = (undefined4)((ulonglong)puVar16 >> 0x20);
              uVar5 = (undefined4)((ulonglong)puVar17 >> 0x20);
              iVar6 = FUN_00416db0(local_98,local_b0);
              if (iVar6 != 0) {
                FUN_00415dd0(&local_b8,local_90[0],0);
                FUN_00415dd0(&local_c0,local_a0,0);
                FUN_00415dd0(&local_c8,local_98,0);
                FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_b8,local_c0,local_c8,
                             CONCAT44(uVar5,local_30),CONCAT44(uVar7,local_34));
                (**(code **)(*param_2 + 0x78))(param_2,local_98);
              }
            }
          }
          else if (sVar4 == 0x32) {
            FUN_01cfde70(plVar1,1,1,&local_3a,&local_3b,&local_39);
            uVar5 = FUN_01576400(lVar8,0);
            uVar7 = FUN_01576400(lVar8,1);
            if (((char)uVar5 == '\x01') && (cVar2 = FUN_01600360(uVar7), cVar2 != '\0')) {
              local_38 = 100;
            }
            else {
              cVar2 = FUN_01600360(uVar5);
              if ((cVar2 == '\0') || ((char)uVar7 != '\x01')) {
                local_38 = 0;
              }
              else {
                local_38 = 0xffffff9c;
              }
            }
            FUN_01d04b50(plVar1,&local_38);
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
            FUN_017ff4f0(plVar1,local_90);
            FUN_0043f750(&local_d0,local_38);
            FUN_00416cd0(&local_98,5,L"SetState(",local_90[0],&DAT_015f87a0,local_d0,&LAB_015f87b4);
            if (param_2 != (longlong *)0x0) {
              puVar17 = &local_a0;
              puVar16 = &local_30;
              FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_d8,local_90[0],L"SetState",puVar17
                           ,puVar16,&local_34);
              uVar7 = (undefined4)((ulonglong)puVar16 >> 0x20);
              uVar5 = (undefined4)((ulonglong)puVar17 >> 0x20);
              iVar6 = FUN_00416db0(local_98,local_d8);
              if (iVar6 != 0) {
                FUN_00415dd0(&local_e0,local_90[0],0);
                FUN_00415dd0(&local_e8,local_a0,0);
                FUN_00415dd0(&local_f0,local_98,0);
                FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_e0,local_e8,local_f0,
                             CONCAT44(uVar5,local_30),CONCAT44(uVar7,local_34));
                (**(code **)(*param_2 + 0x78))(param_2,local_98);
              }
            }
          }
          else if (sVar4 == 0xbb9) {
            FUN_015f7850(lVar8,plVar1);
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0xbba) {
            iVar6 = 0;
            do {
              FUN_015f7850(lVar8,plVar1);
              iVar6 = iVar6 + 1;
            } while (iVar6 != 4);
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0x8a) {
            sVar4 = 0;
            iVar6 = 3;
            do {
              cVar2 = FUN_01576400(lVar8,iVar6);
              if (cVar2 == '\x01') {
                sVar4 = sVar4 + 1;
              }
              if (0 < iVar6) {
                sVar4 = sVar4 * 2;
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != -1);
            psVar11 = (short *)FUN_01cfde70(plVar1,2,1,&local_3a,&local_3b,&local_39);
            *psVar11 = sVar4;
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0x8e) {
            iVar6 = 4;
            puVar16 = &local_74;
            do {
              cVar2 = FUN_01576400(lVar8,iVar6);
              if (cVar2 == '\x01') {
                *puVar16 = 1;
              }
              else {
                cVar2 = FUN_01576400(lVar8,iVar6);
                if (cVar2 == '\0') {
                  *puVar16 = 0;
                }
                else {
                  *puVar16 = 0xffffffff;
                }
              }
              iVar6 = iVar6 + -1;
              puVar16 = puVar16 + -1;
            } while (iVar6 != -1);
            sVar4 = 0;
            iVar6 = 3;
            do {
              cVar2 = FUN_01576400(lVar8,iVar6);
              if (cVar2 == '\x01') {
                sVar4 = sVar4 + 1;
              }
              if (0 < iVar6) {
                sVar4 = sVar4 * 2;
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != -1);
            sVar4 = sVar4 * 2;
            cVar2 = FUN_01576400(lVar8,4);
            if (cVar2 == '\x01') {
              sVar4 = sVar4 + 1;
            }
            psVar11 = (short *)FUN_01cfde70(plVar1,2,1,&local_3a,&local_3b,&local_39);
            *psVar11 = sVar4;
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0x87) {
            iVar6 = 0;
            iVar14 = 2;
            do {
              cVar2 = FUN_01576400(lVar8,iVar14);
              if (cVar2 == '\x01') {
                iVar6 = iVar6 + 1;
              }
              if (0 < iVar14) {
                iVar6 = iVar6 * 2;
              }
              iVar14 = iVar14 + -1;
            } while (iVar14 != -1);
            local_2c = iVar6;
            FUN_01d04b50(plVar1,&local_2c);
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0x8b) {
            iVar6 = 0;
            iVar14 = 7;
            do {
              cVar2 = FUN_01576400(lVar8,iVar14);
              if (cVar2 == '\x01') {
                iVar6 = iVar6 + 1;
              }
              if (0 < iVar14) {
                iVar6 = iVar6 * 2;
              }
              iVar14 = iVar14 + -1;
            } while (iVar14 != -1);
            local_2c = iVar6;
            puVar12 = (undefined2 *)FUN_01cfde70(plVar1,1,1,&local_3a,&local_3b,&local_39);
            *puVar12 = (undefined2)local_2c;
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0x8d) {
            FUN_01576450(lVar8,local_58,0);
            puVar12 = (undefined2 *)FUN_01cfde70(plVar1,1,1,&local_3a,&local_3b,&local_39);
            if (local_50 < 0) {
              *puVar12 = 0;
            }
            else {
              *puVar12 = (undefined2)local_50;
            }
            cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (cVar2 != '\0') {
              uVar10 = FUN_019a45d0();
              uVar10 = FUN_0198d430(uVar10);
              (**(code **)(*(longlong *)plVar1[0x33] + 0x68))((longlong *)plVar1[0x33],uVar10);
            }
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0xa3) {
            iVar6 = 0;
            iVar14 = 0xf;
            do {
              cVar2 = FUN_01576400(lVar8,iVar14);
              if (cVar2 == '\x01') {
                iVar6 = iVar6 + 1;
              }
              if (0 < iVar14) {
                iVar6 = iVar6 * 2;
              }
              iVar14 = iVar14 + -1;
            } while (iVar14 != -1);
            local_2c = iVar6;
            puVar12 = (undefined2 *)FUN_01cfde70(plVar1,1,1,&local_3a,&local_3b,&local_39);
            *puVar12 = (undefined2)local_2c;
            uVar10 = FUN_019a45d0();
            uVar10 = FUN_0198d430(uVar10);
            FUN_01d04aa0(plVar1,uVar10);
          }
          else if (sVar4 == 0x81) {
            if (*(longlong *)(lVar8 + 0x20) == 0) {
              lVar13 = FUN_01aa8d90(0,&PTR_FUN_01aa3608);
              *(longlong *)(lVar8 + 0x20) = lVar13;
              *(longlong **)(lVar13 + 0x550) = plVar1;
            }
            iVar6 = *(int *)(*(longlong *)(lVar8 + 8) + 0x10);
            iVar14 = 0;
            if (-1 < iVar6 + -1) {
              do {
                uVar3 = FUN_01576400(lVar8,iVar14);
                *(undefined1 *)(*(longlong *)(lVar8 + 0x20) + 0x587 + (longlong)(iVar14 + 1)) =
                     uVar3;
                iVar14 = iVar14 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            FUN_014fb0b0(*(undefined8 *)(lVar8 + 0x20),0);
          }
          *(undefined1 *)(lVar8 + 0x18) = 0;
        }
      }
      local_104 = local_104 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  FUN_00414590(&local_f0,3);
  FUN_00414560(&local_d8,2);
  FUN_00414590(&local_c8,3);
  FUN_00414480(&local_b0);
  FUN_00414560(&local_a0,3);
  FUN_00417840(local_70,&DAT_00e021a8,2);
  return;
}


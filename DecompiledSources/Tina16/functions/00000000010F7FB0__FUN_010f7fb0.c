/* Ghidra address: 010f7fb0 */
/* Ghidra symbol: FUN_010f7fb0 */


void FUN_010f7fb0(longlong *param_1,undefined8 param_2,char param_3,ushort param_4,uint param_5,
                 uint param_6)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  longlong *plVar9;
  longlong lVar10;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 uVar11;
  int extraout_var_05;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 in_stack_ffffffffffffff78;
  uint uVar18;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 *in_stack_ffffffffffffff80;
  uint7 uVar20;
  undefined4 uVar21;
  undefined8 uVar19;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  
  uVar18 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_68 = 0;
  lVar2 = param_1[0x136];
  if (*(longlong *)(lVar2 + 0x50) == 0) goto LAB_010f9707;
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  uVar20 = (uint7)((ulonglong)in_stack_ffffffffffffff80 >> 8);
  if ((param_3 == '\0') && ((param_4 & 1) != 0)) {
    if ((char)param_1[0xf5] == '\0') {
      plVar9 = param_1 + 0xee;
      in_stack_ffffffffffffff80 = (undefined4 *)((ulonglong)uVar20 << 8);
      FUN_01acf730(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,param_1 + 0xed,plVar9,
                   in_stack_ffffffffffffff80);
      uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
      *(undefined4 *)(param_1 + 0xef) = 0;
      *(undefined4 *)(param_1 + 0x15d) = 0;
      *(undefined4 *)((longlong)param_1 + 0xaec) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      *(undefined4 *)((longlong)param_1 + 0xae4) = 0;
      *(undefined4 *)((longlong)param_1 + 0xadc) = 0;
      *(undefined4 *)(param_1 + 0x15b) = 0;
    }
  }
  else if (param_3 == '\0') {
    uVar13 = (ulonglong)*(byte *)(param_1 + 0xf5);
    if (uVar13 < 0xb) {
      if (uVar13 == 10) {
        plVar9 = (longlong *)param_1[0x155];
        FUN_01d2c460(plVar9,param_5,param_6);
        uVar11 = CONCAT44(uVar18,*(undefined4 *)((longlong)param_1 + 0x774));
        FUN_01a8de70(*(undefined8 *)(lVar2 + 0x68),(int)param_1[0xed],
                     *(undefined4 *)((longlong)param_1 + 0x76c),(int)param_1[0xee],uVar11);
        uVar18 = (uint)((ulonglong)uVar11 >> 0x20);
        (**(code **)(*plVar9 + 0x70))(plVar9,*(undefined8 *)(lVar2 + 0x68));
        *(uint *)(param_1 + 0xed) = param_5;
        *(uint *)((longlong)param_1 + 0x76c) = param_6;
        *(uint *)(param_1 + 0xee) = param_5;
        *(uint *)((longlong)param_1 + 0x774) = param_6;
      }
      else if (uVar13 < 7) {
        if (uVar13 == 6) {
          cVar5 = FUN_01acff30(*(undefined8 *)(lVar2 + 0x50),&local_30);
          if (cVar5 == '\x02') {
            plVar9 = (longlong *)FUN_004aeac0(local_30,0);
            *(longlong **)(param_1[0x157] + 0xa8) = plVar9;
            (**(code **)(*plVar9 + 0x100))(plVar9,param_1[0x157]);
            *(undefined8 *)(param_1[0x157] + 0xb0) = 0x46293e5939a08cea;
            *(undefined8 *)(param_1[0x157] + 0xb8) = 0x46293e5939a08cea;
          }
          local_60 = FUN_00498310(param_5,param_6);
          (**(code **)(*(longlong *)param_1[0x157] + 200))((longlong *)param_1[0x157],&local_60);
          plVar9 = (longlong *)param_1[0x157];
          plVar9[0x11] = *(longlong *)(lVar2 + 0x50);
          (**(code **)(*plVar9 + 0xe8))(plVar9);
          FUN_01a5f250(param_1[0x157]);
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x50) + 0xe0);
          (**(code **)(*plVar9 + 0x80))(plVar9,L"Text",param_1[0x157]);
          *(undefined1 *)(param_1[0x157] + 0x80) = 0;
          lVar10 = param_1[0x15c];
          iVar7 = *(int *)((longlong)param_1 + 0xae4);
          lVar16 = (ulonglong)uVar18 << 0x20;
          FUN_00498350(&local_48,0,0,0,lVar16);
          uVar11 = CONCAT44((int)((ulonglong)lVar16 >> 0x20),iVar7 + (int)param_1[0x15b]);
          in_stack_ffffffffffffff80 = &local_48;
          FUN_01a8dd40(*(undefined8 *)(lVar2 + 0x68),(int)lVar10,iVar7,
                       (int)lVar10 + *(int *)((longlong)param_1 + 0xadc),uVar11,
                       in_stack_ffffffffffffff80);
          uVar18 = (uint)((ulonglong)uVar11 >> 0x20);
          FUN_01a8dee0(*(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0xe8),param_1[0x157]);
          FUN_01ae5650(*(undefined8 *)(lVar2 + 0x50));
          param_1[0x157] = 0;
          *(undefined1 *)(param_1 + 0xf5) = 0;
        }
        else if (uVar13 == 0) {
          plVar9 = param_1 + 0xee;
          in_stack_ffffffffffffff80 = (undefined4 *)CONCAT71(uVar20,*(byte *)(param_1 + 0xf5));
          FUN_01acf0c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,param_1 + 0xed,plVar9,
                       in_stack_ffffffffffffff80);
          *(undefined4 *)(param_1 + 0xef) = 0;
          cVar5 = FUN_01acff30(*(undefined8 *)(lVar2 + 0x50),&local_30);
          uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
          if (cVar5 == '\b') {
            lVar10 = FUN_004aeac0(local_30,0);
            param_1[0x159] = lVar10;
            lVar10 = param_1[0x159];
            cVar3 = FUN_004113d0(lVar10,&PTR_FUN_010eecc0);
            if (cVar3 != '\0') {
              cVar3 = FUN_010ef5e0(lVar10,param_5,param_6);
              if (cVar3 != '\0') {
                lVar10 = param_1[0x159];
                uVar4 = FUN_010ef5e0(lVar10,param_5,param_6);
                *(undefined1 *)(lVar10 + 0x58) = uVar4;
                FUN_010ef4e0(lVar10,*(undefined8 *)(lVar2 + 0x68));
                *(undefined1 *)(param_1 + 0xf5) = 0x16;
                goto LAB_010f9707;
              }
            }
            lVar10 = param_1[0x159];
            cVar3 = FUN_004113d0(lVar10,&PTR_FUN_01a5c280);
            if (cVar3 == '\0') {
              cVar3 = FUN_004113d0(lVar10,&PTR_FUN_010ecd58);
              if (cVar3 == '\0') {
                cVar3 = FUN_004113d0(lVar10,&LAB_00f10748);
                if (cVar3 == '\0') {
                  cVar3 = FUN_004113d0(lVar10,&PTR_FUN_010ef9a8);
                  uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
                  if (cVar3 != '\0') {
                    plVar8 = (longlong *)FUN_004113f0(lVar10,&PTR_FUN_010ef9a8);
                    uVar6 = (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)(param_1 + 0x15d) = uVar6;
                    (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)((longlong)param_1 + 0xaec) = extraout_var_01;
                    uVar6 = (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)(param_1 + 0x15c) = uVar6;
                    (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)((longlong)param_1 + 0xae4) = extraout_var_02;
                    *(int *)((longlong)param_1 + 0xadc) = (int)plVar8[0x11] - (int)plVar8[0x10];
                    *(int *)(param_1 + 0x15b) =
                         *(int *)((longlong)plVar8 + 0x8c) - *(int *)((longlong)plVar8 + 0x84);
                    uVar13 = (ulonglong)plVar9 & 0xffffffff00000000;
                    FUN_00498350(&local_48,0,0,0,uVar13);
                    uVar18 = (uint)(uVar13 >> 0x20);
                    param_1[0x15e] = CONCAT44(local_44,local_48);
                    param_1[0x15f] = CONCAT44(local_3c,local_40);
                    *(undefined1 *)(param_1 + 0xf5) = 0x11;
                  }
                }
                else {
                  lVar10 = FUN_004113f0(lVar10,&LAB_00f10748);
                  FUN_00f11460(lVar10,&local_48);
                  *(undefined4 *)(param_1 + 0x15d) = local_48;
                  FUN_00f11460(lVar10,&local_48);
                  *(undefined4 *)((longlong)param_1 + 0xaec) = local_44;
                  FUN_00f11460(lVar10,&local_48);
                  *(undefined4 *)(param_1 + 0x15c) = local_48;
                  FUN_00f11460(lVar10,&local_48);
                  *(undefined4 *)((longlong)param_1 + 0xae4) = local_44;
                  FUN_00f11460(lVar10,&local_48);
                  FUN_00f11460(lVar10,&local_58);
                  *(int *)((longlong)param_1 + 0xadc) = local_40 - local_58;
                  FUN_00f11460(lVar10,&local_48);
                  FUN_00f11460(lVar10,&local_58);
                  uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
                  *(int *)(param_1 + 0x15b) = local_3c - local_54;
                  if (*(longlong *)(lVar10 + 0x80) == 0) {
                    uVar13 = (ulonglong)plVar9 & 0xffffffff00000000;
                    FUN_00498350(&local_48,0,0,0,uVar13);
                    uVar18 = (uint)(uVar13 >> 0x20);
                    param_1[0x15e] = CONCAT44(local_44,local_48);
                    param_1[0x15f] = CONCAT44(local_3c,local_40);
                  }
                  else {
                    lVar10 = *(longlong *)(lVar10 + 0x80);
                    param_1[0x15e] = *(longlong *)(lVar10 + 0x14);
                    param_1[0x15f] = *(longlong *)(lVar10 + 0x1c);
                  }
                  *(undefined1 *)(param_1 + 0xf5) = 0x11;
                }
              }
              else {
                lVar10 = FUN_004113f0(lVar10,&PTR_FUN_010ecd58);
                uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
                *(undefined4 *)(param_1 + 0x15d) = *(undefined4 *)(lVar10 + 0x68);
                *(undefined4 *)((longlong)param_1 + 0xaec) = *(undefined4 *)(lVar10 + 0x6c);
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar10 + 0x68);
                *(undefined4 *)((longlong)param_1 + 0xae4) = *(undefined4 *)(lVar10 + 0x6c);
                uVar12 = *(int *)(lVar10 + 0x70) - *(int *)(lVar10 + 0x68);
                uVar14 = (int)uVar12 >> 0x1f;
                *(uint *)((longlong)param_1 + 0xadc) = (uVar12 ^ uVar14) - uVar14;
                uVar12 = *(int *)(lVar10 + 0x74) - *(int *)(lVar10 + 0x6c);
                uVar14 = (int)uVar12 >> 0x1f;
                *(uint *)(param_1 + 0x15b) = (uVar12 ^ uVar14) - uVar14;
                if (*(longlong *)(lVar10 + 0x80) == 0) {
                  uVar13 = (ulonglong)plVar9 & 0xffffffff00000000;
                  FUN_00498350(&local_48,0,0,0,uVar13);
                  uVar18 = (uint)(uVar13 >> 0x20);
                  param_1[0x15e] = CONCAT44(local_44,local_48);
                  param_1[0x15f] = CONCAT44(local_3c,local_40);
                }
                else {
                  lVar10 = *(longlong *)(lVar10 + 0x80);
                  param_1[0x15e] = *(longlong *)(lVar10 + 0x14);
                  param_1[0x15f] = *(longlong *)(lVar10 + 0x1c);
                }
                *(undefined1 *)(param_1 + 0xf5) = 0x11;
              }
            }
            else {
              plVar8 = (longlong *)FUN_004113f0(lVar10,&PTR_FUN_01a5c280);
              uVar6 = (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)(param_1 + 0x15d) = uVar6;
              (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)((longlong)param_1 + 0xaec) = extraout_var;
              uVar6 = (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)(param_1 + 0x15c) = uVar6;
              (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)((longlong)param_1 + 0xae4) = extraout_var_00;
              uVar6 = FUN_01a5ee60(plVar8,*(undefined8 *)(lVar2 + 0x68));
              *(undefined4 *)((longlong)param_1 + 0xadc) = uVar6;
              uVar6 = FUN_01a5eed0(plVar8,*(undefined8 *)(lVar2 + 0x68));
              uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
              *(undefined4 *)(param_1 + 0x15b) = uVar6;
              if (plVar8[0x15] == 0) {
                uVar13 = (ulonglong)plVar9 & 0xffffffff00000000;
                FUN_00498350(&local_48,0,0,0,uVar13);
                uVar18 = (uint)(uVar13 >> 0x20);
                param_1[0x15e] = CONCAT44(local_44,local_48);
                param_1[0x15f] = CONCAT44(local_3c,local_40);
              }
              else {
                lVar10 = plVar8[0x15];
                param_1[0x15e] = *(longlong *)(lVar10 + 0x14);
                param_1[0x15f] = *(longlong *)(lVar10 + 0x1c);
              }
              *(undefined1 *)(param_1 + 0xf5) = 0x11;
            }
            *(uint *)(param_1 + 0xed) = param_5;
            *(uint *)((longlong)param_1 + 0x76c) = param_6;
            *(int *)(param_1 + 0x15d) = (int)param_1[0x15c];
            *(undefined4 *)((longlong)param_1 + 0xaec) = *(undefined4 *)((longlong)param_1 + 0xae4);
          }
          else if (cVar5 == '\x04') {
            *(undefined4 *)(param_1 + 0xef) = 0;
            *(uint *)(param_1 + 0xed) = param_5;
            *(uint *)((longlong)param_1 + 0x76c) = param_6;
            *(undefined1 *)(param_1 + 0xf5) = 4;
          }
          if (cVar5 == '\x10') {
            *(undefined4 *)(param_1 + 0xef) = 0;
            *(uint *)(param_1 + 0xed) = param_5;
            *(uint *)((longlong)param_1 + 0x76c) = param_6;
            *(undefined1 *)(param_1 + 0xf5) = 5;
          }
          if (cVar5 == '\x02') {
            plVar9 = (longlong *)FUN_004aeac0(local_30,0);
            (**(code **)(*plVar9 + 0xa0))(plVar9,*(undefined8 *)(lVar2 + 0x68));
          }
        }
        else if (uVar13 == 1) {
          lVar10 = FUN_01ad08c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6);
          param_1[0x15a] = lVar10;
          local_34 = param_5;
          local_38 = param_6;
          FUN_01ce2130(param_1[0x15a],&local_34,&local_38);
          *(uint *)(param_1 + 0xed) = local_34;
          *(uint *)((longlong)param_1 + 0x76c) = local_38;
          *(uint *)(param_1 + 0xee) = local_34;
          *(uint *)((longlong)param_1 + 0x774) = local_38;
          uVar11 = CONCAT44(uVar18,local_38);
          in_stack_ffffffffffffff80 = *(undefined4 **)(lVar2 + 0x68);
          (**(code **)(*(longlong *)param_1[0x15a] + 0x140))
                    ((longlong *)param_1[0x15a],(int)param_1[0xed],
                     *(undefined4 *)((longlong)param_1 + 0x76c),(int)param_1[0xee],uVar11,
                     in_stack_ffffffffffffff80);
          uVar18 = (uint)((ulonglong)uVar11 >> 0x20);
          *(undefined1 *)(param_1 + 0xf5) = 2;
        }
        else if (uVar13 == 3) {
          cVar5 = FUN_01ace900(*(undefined8 *)(lVar2 + 0x50),param_5,param_6);
          if (cVar5 != '\0') {
            plVar9 = param_1 + 0xee;
            in_stack_ffffffffffffff80 =
                 (undefined4 *)
                 CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff80 >> 8),(char)param_1[0xf5]);
            uVar11 = FUN_01acf0c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,param_1 + 0xed,
                                  plVar9,in_stack_ffffffffffffff80);
            uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
            lVar10 = *(longlong *)(lVar2 + 0x50);
            if (*(char *)(lVar10 + 0x108) == '\0') {
LAB_010f923c:
              FUN_01acfc60(lVar10);
            }
            else {
              if (*(byte *)(lVar10 + 0xb0) < 8) {
                bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1) <<
                          (*(byte *)(lVar10 + 0xb0) & 0x1f) & 1U) != 0;
              }
              else {
                bVar15 = false;
              }
              if (!bVar15) goto LAB_010f923c;
              FUN_01acfa60(lVar10);
            }
            FUN_01aceb90(lVar10,1);
            *(undefined1 *)(param_1 + 0xf5) = 0;
          }
        }
      }
      else if (uVar13 == 7) {
        plVar9 = (longlong *)param_1[0x156];
        lVar10 = FUN_00498310(param_5,param_6);
        plVar9[0xd] = lVar10;
        lVar10 = FUN_00498310(param_5,param_6);
        plVar9[0xe] = lVar10;
        FUN_01ae4b90(*(undefined8 *)(lVar2 + 0x50),param_1[0x156]);
        (**(code **)(*plVar9 + 0x78))(plVar9,*(undefined8 *)(lVar2 + 0x68));
        *(undefined1 *)(param_1 + 0xf5) = 8;
      }
      else if (uVar13 == 9) {
        FUN_01d2c460(param_1[0x155],param_5,param_6);
        FUN_01ae4b90(*(undefined8 *)(lVar2 + 0x50),param_1[0x155]);
        *(uint *)(param_1 + 0xed) = param_5;
        *(uint *)((longlong)param_1 + 0x76c) = param_6;
        *(uint *)(param_1 + 0xee) = param_5;
        *(uint *)((longlong)param_1 + 0x774) = param_6;
        uVar11 = CONCAT44(uVar18,param_6);
        FUN_01a8de70(*(undefined8 *)(lVar2 + 0x68),(int)param_1[0xed],
                     *(undefined4 *)((longlong)param_1 + 0x76c),(int)param_1[0xee],uVar11);
        uVar18 = (uint)((ulonglong)uVar11 >> 0x20);
        *(undefined1 *)(param_1 + 0xf5) = 10;
      }
    }
    else if (uVar13 < 0x11) {
      if (uVar13 == 0x10) {
        plVar9 = (longlong *)param_1[0x158];
        plVar9[0x15] = *(longlong *)(lVar2 + 0x50);
        local_60 = FUN_00498310(param_5,param_6);
        (**(code **)(*plVar9 + 200))(plVar9,&local_60);
        (**(code **)(*(longlong *)param_1[0x158] + 0xe8))((longlong *)param_1[0x158]);
        plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x50) + 0xe0);
        (**(code **)(*plVar9 + 0x80))(plVar9,&DAT_010f9760,param_1[0x158]);
        FUN_01a8dee0(*(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0xe8),param_1[0x158]);
        FUN_01ae5650(*(undefined8 *)(lVar2 + 0x50));
        param_1[0x158] = 0;
        *(undefined1 *)(param_1 + 0xf5) = 0;
      }
      else if (uVar13 - 0xc < 2) {
        FUN_00410f20(local_30);
        local_30 = 0;
        cVar5 = FUN_01ace420(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,&local_30);
        if (cVar5 != '\x02') {
          lVar10 = FUN_01ad08c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6);
          if (*(byte *)(lVar10 + 0x58) < 8) {
            bVar15 = ((int)CONCAT71((int7)((ulonglong)lVar10 >> 8),1) <<
                      (*(byte *)(lVar10 + 0x58) & 0x1f) & 2U) != 0;
          }
          else {
            bVar15 = false;
          }
          if (!bVar15) goto LAB_010f957d;
        }
        lVar10 = FUN_01ad08c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6);
        if (*(byte *)(lVar10 + 0x58) < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)lVar10 >> 8),1) <<
                    (*(byte *)(lVar10 + 0x58) & 0x1f) & 2U) != 0;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          uVar11 = FUN_01ad08c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6);
          local_60 = FUN_00498310(param_5,param_6);
          puVar17 = &local_60;
          in_stack_ffffffffffffff80 =
               (undefined4 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff80 >> 8),1);
          FUN_01ae1eb0(*(undefined8 *)(lVar2 + 0x50),(char)param_1[0xf5] == '\f',0,uVar11,puVar17,
                       in_stack_ffffffffffffff80);
          uVar18 = (uint)((ulonglong)puVar17 >> 0x20);
        }
        else {
          uVar11 = FUN_004aeac0(local_30,0);
          local_60 = FUN_00498310(param_5,param_6);
          puVar17 = &local_60;
          in_stack_ffffffffffffff80 =
               (undefined4 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff80 >> 8),1);
          FUN_01ae1eb0(*(undefined8 *)(lVar2 + 0x50),(char)param_1[0xf5] == '\f',uVar11,0,puVar17,
                       in_stack_ffffffffffffff80);
          uVar18 = (uint)((ulonglong)puVar17 >> 0x20);
        }
        FUN_01ae4310(*(undefined8 *)(lVar2 + 0x50));
        *(undefined1 *)(param_1 + 0xf5) = 0;
      }
      else if (uVar13 == 0xe) {
        FUN_00410f20(local_30);
        local_30 = 0;
        cVar5 = FUN_01ace420(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,&local_30);
        if (cVar5 == '\b') {
          uVar11 = FUN_004aeac0(local_30,0);
          cVar5 = FUN_004113d0(uVar11,&PTR_FUN_01a5c280);
          if (cVar5 != '\0') {
            lVar10 = FUN_004aeac0(local_30,0);
            uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
            param_1[0x157] = lVar10;
            uVar6 = (**(code **)(*(longlong *)param_1[0x157] + 0xd0))((longlong *)param_1[0x157]);
            *(undefined4 *)(param_1 + 0x15c) = uVar6;
            (**(code **)(*(longlong *)param_1[0x157] + 0xd0))((longlong *)param_1[0x157]);
            *(undefined4 *)((longlong)param_1 + 0xae4) = extraout_var_03;
            uVar6 = FUN_01a5eed0(param_1[0x157],*(undefined8 *)(lVar2 + 0x68));
            *(undefined4 *)(param_1 + 0x15b) = uVar6;
            uVar6 = FUN_01a5ee60(param_1[0x157],*(undefined8 *)(lVar2 + 0x68));
            *(undefined4 *)((longlong)param_1 + 0xadc) = uVar6;
            uVar11 = CONCAT44(uVar18,*(undefined4 *)((longlong)param_1 + 0xadc));
            uVar19 = CONCAT44(uVar21,(int)param_1[0x15b]);
            uVar6 = FUN_01a8e3e0(param_5,param_6,(int)param_1[0x15c],
                                 *(undefined4 *)((longlong)param_1 + 0xae4),uVar11,uVar19);
            *(undefined4 *)(param_1 + 0xed) = uVar6;
            uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),
                              *(undefined4 *)((longlong)param_1 + 0xadc));
            in_stack_ffffffffffffff80 =
                 (undefined4 *)CONCAT44((int)((ulonglong)uVar19 >> 0x20),(int)param_1[0x15b]);
            FUN_01a8e3e0(param_5,param_6,(int)param_1[0x15c],
                         *(undefined4 *)((longlong)param_1 + 0xae4),uVar11,in_stack_ffffffffffffff80
                        );
            *(undefined4 *)((longlong)param_1 + 0x76c) = extraout_var_04;
            *(uint *)(param_1 + 0xee) = param_5;
            *(uint *)((longlong)param_1 + 0x774) = param_6;
            uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),
                              *(undefined4 *)((longlong)param_1 + 0x774));
            FUN_01a8de70(*(undefined8 *)(lVar2 + 0x68),(int)param_1[0xed],
                         *(undefined4 *)((longlong)param_1 + 0x76c),(int)param_1[0xee],uVar11);
            uVar18 = (uint)((ulonglong)uVar11 >> 0x20);
            *(undefined1 *)(param_1 + 0xf5) = 0xf;
          }
        }
      }
      else if (uVar13 == 0xf) {
        FUN_00410f20(local_30);
        local_30 = 0;
        cVar5 = FUN_01ace420(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,&local_30);
        if (cVar5 == '\x02') {
          plVar9 = (longlong *)FUN_004aeac0(local_30,0);
          local_60 = (**(code **)(*(longlong *)param_1[0x157] + 0xd0))((longlong *)param_1[0x157]);
          cVar5 = (**(code **)(*plVar9 + 0x110))(plVar9,&local_60);
          if (cVar5 != '\0') {
            FUN_01a8de70(*(undefined8 *)(lVar2 + 0x68),(int)param_1[0xed],
                         *(undefined4 *)((longlong)param_1 + 0x76c),(int)param_1[0xee],
                         CONCAT44(uVar18,*(undefined4 *)((longlong)param_1 + 0x774)));
            plVar9 = (longlong *)param_1[0x157];
            (**(code **)(*plVar9 + 0x120))(plVar9,param_1,*(undefined8 *)(lVar2 + 0x68));
            if (plVar9[0x15] != 0) {
              (**(code **)(*(longlong *)plVar9[0x15] + 0x108))
                        ((longlong *)plVar9[0x15],param_1[0x157]);
            }
            lVar10 = FUN_004aeac0(local_30,0);
            plVar9[0x15] = lVar10;
            (**(code **)(*(longlong *)plVar9[0x15] + 0x100))
                      ((longlong *)plVar9[0x15],param_1[0x157]);
            plVar8 = plVar9 + 0x17;
            (**(code **)(*(longlong *)plVar9[0x15] + 0xf8))
                      ((longlong *)plVar9[0x15],param_5,param_6,plVar9 + 0x16,plVar8);
            uVar18 = (uint)((ulonglong)plVar8 >> 0x20);
            (**(code **)(*plVar9 + 0xe8))(plVar9);
            (**(code **)(*plVar9 + 0x128))(plVar9,param_1,*(undefined8 *)(lVar2 + 0x68));
            param_1[0x157] = 0;
            *(undefined1 *)(param_1 + 0xf5) = 0;
          }
        }
      }
    }
    else if (uVar13 == 0x14) {
      FUN_00410f20(local_30);
      local_30 = 0;
      cVar5 = FUN_01ace420(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,&local_30);
      if (cVar5 == '\x02') {
        lVar10 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
        param_1[0x157] = lVar10;
        plVar8 = (longlong *)param_1[0x157];
        lVar10 = FUN_004aeac0(local_30,0);
        plVar8[0x15] = lVar10;
        (**(code **)(*(longlong *)plVar8[0x15] + 0x100))((longlong *)plVar8[0x15],param_1[0x157]);
        plVar9 = plVar8 + 0x17;
        (**(code **)(*(longlong *)plVar8[0x15] + 0xf8))
                  ((longlong *)plVar8[0x15],param_5,param_6,plVar8 + 0x16,plVar9);
        uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
        *(undefined1 *)(plVar8[0x12] + 0x98) = 1;
        FUN_01ae7d50(*(undefined8 *)(lVar2 + 0x50),&local_68,param_5,param_6);
        (**(code **)(**(longlong **)(plVar8[0x12] + 0xa0) + 0x78))
                  (*(longlong **)(plVar8[0x12] + 0xa0),local_68);
        lVar10 = FUN_01ad08c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6);
        FUN_005fce30(*(undefined8 *)(plVar8[0x12] + 0x80),*(undefined4 *)(lVar10 + 0x90));
        *(undefined1 *)((longlong)plVar8 + 0x99) = 1;
        *(undefined1 *)(plVar8 + 0x14) = 1;
        local_60 = FUN_00498310(param_5 + 0xf,param_6 - 0xf);
        (**(code **)(*plVar8 + 200))(plVar8,&local_60);
        plVar8[0x11] = *(longlong *)(lVar2 + 0x50);
        (**(code **)(*plVar8 + 0xe8))(plVar8);
        FUN_01a5f250(plVar8);
        (**(code **)(*plVar8 + 0x128))(plVar8,param_1,*(undefined8 *)(lVar2 + 0x68));
        plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x50) + 0xe0);
        (**(code **)(*plVar9 + 0x80))(plVar9,L"Text",param_1[0x157]);
        param_1[0x157] = 0;
        *(undefined1 *)(param_1 + 0xf5) = 0;
      }
      else {
        cVar5 = FUN_01ace420(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,&local_30);
        if (cVar5 == '\b') {
          uVar11 = FUN_004aeac0(local_30,0);
          cVar5 = FUN_004113d0(uVar11,&LAB_00f12330);
          if (cVar5 != '\0') {
            uVar11 = FUN_004aeac0(local_30,0);
            plVar9 = (longlong *)FUN_00f15c70(uVar11);
            (**(code **)(*plVar9 + 0x128))(plVar9,param_1,*(undefined8 *)(lVar2 + 0x68));
            *(undefined1 *)(param_1 + 0xf5) = 0;
          }
        }
      }
    }
    else if (uVar13 == 0x15) {
      plVar9 = param_1 + 0xee;
      in_stack_ffffffffffffff80 = (undefined4 *)((ulonglong)uVar20 << 8);
      FUN_01acf0c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,param_1 + 0xed,plVar9,
                   in_stack_ffffffffffffff80);
      uVar18 = (uint)((ulonglong)plVar9 >> 0x20);
      *(undefined4 *)(param_1 + 0xef) = 0;
      FUN_01acff30(*(undefined8 *)(lVar2 + 0x50),&local_30);
      uVar11 = FUN_004aeac0(local_30,0);
      cVar5 = FUN_01ad1090(*(undefined8 *)(lVar2 + 0x50),uVar11,param_1 + 0x15a);
      if (cVar5 != '\0') {
        bVar1 = *(byte *)(param_1[0x15a] + 0x58);
        if (bVar1 < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)param_1[0x15a] >> 8),1) << (bVar1 & 0x1f) & 1U)
                   != 0;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          lVar10 = FUN_004aeac0(local_30,0);
          FUN_010f2ba0(*(undefined8 *)(lVar10 + 0xe0),*(undefined8 *)(lVar10 + 200));
        }
      }
    }
  }
LAB_010f957d:
  if (param_3 == '\x01') {
    if ((char)param_1[0xf5] == '\n') {
      FUN_01a8de70(*(undefined8 *)(lVar2 + 0x68),(int)param_1[0xed],
                   *(undefined4 *)((longlong)param_1 + 0x76c),(int)param_1[0xee],
                   CONCAT44(uVar18,*(undefined4 *)((longlong)param_1 + 0x774)));
      (**(code **)(*(longlong *)param_1[0x155] + 0xe8))((longlong *)param_1[0x155]);
      param_1[0x155] = 0;
      *(undefined1 *)(param_1 + 0xf5) = 0;
    }
    else {
      cVar5 = FUN_01ace170(*(undefined8 *)(lVar2 + 0x50),param_5,param_6);
      if (cVar5 != '\0') {
        FUN_01acf0c0(*(undefined8 *)(lVar2 + 0x50),param_5,param_6,param_1 + 0xed,param_1 + 0xee,
                     (ulonglong)in_stack_ffffffffffffff80 & 0xffffffffffffff00);
      }
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x50) + 0xb0);
      if (bVar1 < 8) {
        bVar15 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x50) >> 8),1) <<
                  (bVar1 & 0x1f) & 6U) != 0;
      }
      else {
        bVar15 = false;
      }
      if (!bVar15) {
        FUN_010fb6a0(param_1);
        if (*(char *)(param_1[0x150] + 0x81) != '\0') {
          iVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
          (**(code **)(*param_1 + 0xd8))(param_1);
          (**(code **)(*(longlong *)param_1[0x13b] + 0xa8))
                    ((longlong *)param_1[0x13b],param_5 + iVar7,param_6 + extraout_var_05);
        }
      }
    }
  }
  FUN_00410f20(local_30);
LAB_010f9707:
  FUN_00414480(&local_68);
  return;
}


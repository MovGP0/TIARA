/* Ghidra address: 01a730e0 */
/* Ghidra symbol: FUN_01a730e0 */


void FUN_01a730e0(longlong *param_1,undefined8 param_2,char param_3,ushort param_4,uint param_5,
                 uint param_6)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  longlong *plVar11;
  int extraout_var_05;
  int extraout_var_06;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 in_stack_ffffffffffffff68;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined4 *in_stack_ffffffffffffff70;
  uint7 uVar19;
  undefined4 uVar20;
  undefined8 uVar18;
  undefined8 local_70;
  int local_68;
  int local_64;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  if (param_1[0xf1] != 0) {
    FUN_013d2660(param_1[0xf1],param_5,param_6,param_1[0x14d],*(undefined8 *)(param_1[0xf4] + 0x10))
    ;
    goto LAB_01a749e5;
  }
  if (param_1[0xf3] == 0) goto LAB_01a749e5;
  uVar10 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff68 >> 0x20),param_6);
  FUN_01aee850(&local_40,0x41a,(int)param_1[0xd7],param_5,uVar10);
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_01aed640(*(undefined8 *)PTR_DAT_020041a8,local_40);
  local_30[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  if ((param_3 == '\0') && ((param_4 & 1) != 0)) {
    if ((char)param_1[0xf5] == '\0') {
      plVar11 = param_1 + 0xee;
      in_stack_ffffffffffffff70 =
           (undefined4 *)((ulonglong)in_stack_ffffffffffffff70 & 0xffffffffffffff00);
      FUN_01acf730(param_1[0xf3],param_5,param_6,param_1 + 0xed,plVar11,in_stack_ffffffffffffff70);
      uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
      *(undefined4 *)(param_1 + 0xef) = 0;
      *(undefined4 *)(param_1 + 0x204) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1024) = 0;
      *(undefined4 *)(param_1 + 0x203) = 0;
      *(undefined4 *)((longlong)param_1 + 0x101c) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1014) = 0;
      *(undefined4 *)(param_1 + 0x202) = 0;
    }
  }
  else if (param_3 == '\0') {
    uVar16 = CONCAT44(uVar5,param_6);
    FUN_01aee850(&local_48,0x41b,(int)param_1[0xd7],param_5,uVar16);
    FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_48);
    uVar5 = (undefined4)(uVar16 >> 0x20);
    uVar13 = (ulonglong)*(byte *)(param_1 + 0xf5);
    uVar19 = (uint7)((ulonglong)in_stack_ffffffffffffff70 >> 8);
    if (uVar13 < 0xb) {
      if (uVar13 == 10) {
        plVar11 = (longlong *)param_1[0x1fc];
        FUN_01d2c460(plVar11,param_5,param_6);
        uVar10 = CONCAT44(uVar5,*(undefined4 *)((longlong)param_1 + 0x774));
        FUN_01a8de70(param_1[0xf0],(int)param_1[0xed],*(undefined4 *)((longlong)param_1 + 0x76c),
                     (int)param_1[0xee],uVar10);
        uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
        (**(code **)(*plVar11 + 0x70))(plVar11,param_1[0xf0]);
        *(uint *)(param_1 + 0xed) = param_5;
        *(uint *)((longlong)param_1 + 0x76c) = param_6;
        *(uint *)(param_1 + 0xee) = param_5;
        *(uint *)((longlong)param_1 + 0x774) = param_6;
      }
      else if (uVar13 < 7) {
        if (uVar13 == 6) {
          cVar4 = FUN_01acff30(param_1[0xf3],local_30);
          if ((cVar4 == '\x02') && (*(longlong *)(param_1[0x1fe] + 0xa8) == 0)) {
            uVar10 = FUN_004aeac0(local_30[0],0);
            *(undefined8 *)(param_1[0x1fe] + 0xa8) = uVar10;
            (**(code **)(**(longlong **)(param_1[0x1fe] + 0xa8) + 0x100))
                      (*(longlong **)(param_1[0x1fe] + 0xa8),param_1[0x1fe]);
            *(undefined8 *)(param_1[0x1fe] + 0xb0) = 0x46293e5939a08cea;
            *(undefined8 *)(param_1[0x1fe] + 0xb8) = 0x46293e5939a08cea;
          }
          local_70 = FUN_00498310(param_5,param_6);
          (**(code **)(*(longlong *)param_1[0x1fe] + 200))((longlong *)param_1[0x1fe],&local_70);
          plVar11 = (longlong *)param_1[0x1fe];
          plVar11[0x11] = param_1[0xf3];
          (**(code **)(*plVar11 + 0xe8))(plVar11);
          FUN_01a5f250(param_1[0x1fe]);
          (**(code **)(**(longlong **)(param_1[0xf3] + 0xe0) + 0x80))
                    (*(longlong **)(param_1[0xf3] + 0xe0),L"Text",param_1[0x1fe]);
          *(undefined1 *)(param_1[0x1fe] + 0x80) = 0;
          lVar9 = param_1[0x203];
          iVar7 = *(int *)((longlong)param_1 + 0x101c);
          uVar16 = uVar16 & 0xffffffff00000000;
          FUN_00498350(&local_58,0,0,0,uVar16);
          uVar10 = CONCAT44((int)(uVar16 >> 0x20),iVar7 + (int)param_1[0x202]);
          in_stack_ffffffffffffff70 = &local_58;
          FUN_01a8dd40(param_1[0xf0],(int)lVar9,iVar7,
                       (int)lVar9 + *(int *)((longlong)param_1 + 0x1014),uVar10,
                       in_stack_ffffffffffffff70);
          uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
          FUN_01a8dee0(*(undefined8 *)(param_1[0xf3] + 0xe8),param_1[0x1fe]);
          FUN_01ae5650(param_1[0xf3]);
          param_1[0x1fe] = 0;
          FUN_0082a6c0(param_1[0x152],1);
          *(undefined1 *)(param_1 + 0xf5) = 0;
        }
        else if (uVar13 == 0) {
          plVar11 = param_1 + 0xee;
          in_stack_ffffffffffffff70 = (undefined4 *)CONCAT71(uVar19,*(byte *)(param_1 + 0xf5));
          FUN_01acf0c0(param_1[0xf3],param_5,param_6,param_1 + 0xed,plVar11,
                       in_stack_ffffffffffffff70);
          *(undefined4 *)(param_1 + 0xef) = 0;
          cVar4 = FUN_01acff30(param_1[0xf3],local_30);
          uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
          if (cVar4 == '\b') {
            lVar9 = FUN_004aeac0(local_30[0],0);
            param_1[0x200] = lVar9;
            lVar9 = param_1[0x200];
            cVar2 = FUN_004113d0(lVar9,&PTR_FUN_010eecc0);
            if (cVar2 != '\0') {
              cVar2 = FUN_010ef5e0(lVar9,param_5,param_6);
              if (cVar2 != '\0') {
                lVar9 = param_1[0x200];
                uVar3 = FUN_010ef5e0(lVar9,param_5,param_6);
                *(undefined1 *)(lVar9 + 0x58) = uVar3;
                FUN_010ef4e0(lVar9,param_1[0xf0]);
                *(undefined1 *)(param_1 + 0xf5) = 0x16;
                goto LAB_01a749e5;
              }
            }
            lVar9 = param_1[0x200];
            cVar2 = FUN_004113d0(lVar9,&PTR_FUN_01a5c280);
            if (cVar2 == '\0') {
              cVar2 = FUN_004113d0(lVar9,&PTR_FUN_010ecd58);
              if (cVar2 == '\0') {
                cVar2 = FUN_004113d0(lVar9,&LAB_00f10748);
                if (cVar2 == '\0') {
                  cVar2 = FUN_004113d0(lVar9,&PTR_FUN_010ef9a8);
                  uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
                  if (cVar2 != '\0') {
                    plVar8 = (longlong *)FUN_004113f0(lVar9,&PTR_FUN_010ef9a8);
                    uVar5 = (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)(param_1 + 0x204) = uVar5;
                    (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)((longlong)param_1 + 0x1024) = extraout_var_01;
                    uVar5 = (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)(param_1 + 0x203) = uVar5;
                    (**(code **)(*plVar8 + 0xd0))(plVar8);
                    *(undefined4 *)((longlong)param_1 + 0x101c) = extraout_var_02;
                    *(int *)((longlong)param_1 + 0x1014) = (int)plVar8[0x11] - (int)plVar8[0x10];
                    *(int *)(param_1 + 0x202) =
                         *(int *)((longlong)plVar8 + 0x8c) - *(int *)((longlong)plVar8 + 0x84);
                    uVar13 = (ulonglong)plVar11 & 0xffffffff00000000;
                    FUN_00498350(&local_58,0,0,0,uVar13);
                    uVar5 = (undefined4)(uVar13 >> 0x20);
                    param_1[0x205] = CONCAT44(local_54,local_58);
                    param_1[0x206] = CONCAT44(local_4c,local_50);
                    *(undefined1 *)(param_1 + 0xf5) = 0x11;
                  }
                }
                else {
                  lVar9 = FUN_004113f0(lVar9,&LAB_00f10748);
                  FUN_00f11460(lVar9,&local_58);
                  *(undefined4 *)(param_1 + 0x204) = local_58;
                  FUN_00f11460(lVar9,&local_58);
                  *(undefined4 *)((longlong)param_1 + 0x1024) = local_54;
                  FUN_00f11460(lVar9,&local_58);
                  *(undefined4 *)(param_1 + 0x203) = local_58;
                  FUN_00f11460(lVar9,&local_58);
                  *(undefined4 *)((longlong)param_1 + 0x101c) = local_54;
                  FUN_00f11460(lVar9,&local_58);
                  FUN_00f11460(lVar9,&local_68);
                  *(int *)((longlong)param_1 + 0x1014) = local_50 - local_68;
                  FUN_00f11460(lVar9,&local_58);
                  FUN_00f11460(lVar9,&local_68);
                  uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
                  *(int *)(param_1 + 0x202) = local_4c - local_64;
                  if (*(longlong *)(lVar9 + 0x80) == 0) {
                    uVar13 = (ulonglong)plVar11 & 0xffffffff00000000;
                    FUN_00498350(&local_58,0,0,0,uVar13);
                    uVar5 = (undefined4)(uVar13 >> 0x20);
                    param_1[0x205] = CONCAT44(local_54,local_58);
                    param_1[0x206] = CONCAT44(local_4c,local_50);
                  }
                  else {
                    lVar9 = *(longlong *)(lVar9 + 0x80);
                    param_1[0x205] = *(longlong *)(lVar9 + 0x14);
                    param_1[0x206] = *(longlong *)(lVar9 + 0x1c);
                  }
                  *(undefined1 *)(param_1 + 0xf5) = 0x11;
                }
              }
              else {
                lVar9 = FUN_004113f0(lVar9,&PTR_FUN_010ecd58);
                uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
                *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(lVar9 + 0x68);
                *(undefined4 *)((longlong)param_1 + 0x1024) = *(undefined4 *)(lVar9 + 0x6c);
                *(undefined4 *)(param_1 + 0x203) = *(undefined4 *)(lVar9 + 0x68);
                *(undefined4 *)((longlong)param_1 + 0x101c) = *(undefined4 *)(lVar9 + 0x6c);
                uVar12 = *(int *)(lVar9 + 0x70) - *(int *)(lVar9 + 0x68);
                uVar14 = (int)uVar12 >> 0x1f;
                *(uint *)((longlong)param_1 + 0x1014) = (uVar12 ^ uVar14) - uVar14;
                uVar12 = *(int *)(lVar9 + 0x74) - *(int *)(lVar9 + 0x6c);
                uVar14 = (int)uVar12 >> 0x1f;
                *(uint *)(param_1 + 0x202) = (uVar12 ^ uVar14) - uVar14;
                if (*(longlong *)(lVar9 + 0x80) == 0) {
                  uVar13 = (ulonglong)plVar11 & 0xffffffff00000000;
                  FUN_00498350(&local_58,0,0,0,uVar13);
                  uVar5 = (undefined4)(uVar13 >> 0x20);
                  param_1[0x205] = CONCAT44(local_54,local_58);
                  param_1[0x206] = CONCAT44(local_4c,local_50);
                }
                else {
                  lVar9 = *(longlong *)(lVar9 + 0x80);
                  param_1[0x205] = *(longlong *)(lVar9 + 0x14);
                  param_1[0x206] = *(longlong *)(lVar9 + 0x1c);
                }
                *(undefined1 *)(param_1 + 0xf5) = 0x11;
              }
            }
            else {
              plVar8 = (longlong *)FUN_004113f0(lVar9,&PTR_FUN_01a5c280);
              uVar5 = (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)(param_1 + 0x204) = uVar5;
              (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)((longlong)param_1 + 0x1024) = extraout_var;
              uVar5 = (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)(param_1 + 0x203) = uVar5;
              (**(code **)(*plVar8 + 0xd0))(plVar8);
              *(undefined4 *)((longlong)param_1 + 0x101c) = extraout_var_00;
              uVar5 = FUN_01a5ee60(plVar8,param_1[0xf0]);
              *(undefined4 *)((longlong)param_1 + 0x1014) = uVar5;
              uVar6 = FUN_01a5eed0(plVar8,param_1[0xf0]);
              uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
              *(undefined4 *)(param_1 + 0x202) = uVar6;
              if (plVar8[0x15] == 0) {
                uVar13 = (ulonglong)plVar11 & 0xffffffff00000000;
                FUN_00498350(&local_58,0,0,0,uVar13);
                uVar5 = (undefined4)(uVar13 >> 0x20);
                param_1[0x205] = CONCAT44(local_54,local_58);
                param_1[0x206] = CONCAT44(local_4c,local_50);
              }
              else {
                lVar9 = plVar8[0x15];
                param_1[0x205] = *(longlong *)(lVar9 + 0x14);
                param_1[0x206] = *(longlong *)(lVar9 + 0x1c);
              }
              *(undefined1 *)(param_1 + 0xf5) = 0x11;
            }
            *(uint *)(param_1 + 0xed) = param_5;
            *(uint *)((longlong)param_1 + 0x76c) = param_6;
            *(int *)(param_1 + 0x204) = (int)param_1[0x203];
            *(undefined4 *)((longlong)param_1 + 0x1024) =
                 *(undefined4 *)((longlong)param_1 + 0x101c);
          }
          else if (cVar4 == '\x04') {
            *(undefined4 *)(param_1 + 0xef) = 0;
            *(uint *)(param_1 + 0xed) = param_5;
            *(uint *)((longlong)param_1 + 0x76c) = param_6;
            *(undefined1 *)(param_1 + 0xf5) = 4;
          }
          if (cVar4 == '\x10') {
            *(undefined4 *)(param_1 + 0xef) = 0;
            *(uint *)(param_1 + 0xed) = param_5;
            *(uint *)((longlong)param_1 + 0x76c) = param_6;
            *(undefined1 *)(param_1 + 0xf5) = 5;
          }
        }
        else if (uVar13 == 1) {
          lVar9 = FUN_01ad08c0(param_1[0xf3],param_5,param_6);
          param_1[0x201] = lVar9;
          if (lVar9 != 0) {
            local_34 = param_5;
            local_38 = param_6;
            FUN_01ce2130(param_1[0x201],&local_34,&local_38);
            *(uint *)(param_1 + 0xed) = local_34;
            *(uint *)((longlong)param_1 + 0x76c) = local_38;
            *(uint *)(param_1 + 0xee) = local_34;
            *(uint *)((longlong)param_1 + 0x774) = local_38;
            uVar10 = CONCAT44(uVar5,local_38);
            in_stack_ffffffffffffff70 = (undefined4 *)param_1[0xf0];
            (**(code **)(*(longlong *)param_1[0x201] + 0x140))
                      ((longlong *)param_1[0x201],(int)param_1[0xed],
                       *(undefined4 *)((longlong)param_1 + 0x76c),(int)param_1[0xee],uVar10,
                       in_stack_ffffffffffffff70);
            uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
            *(undefined1 *)(param_1 + 0xf5) = 2;
          }
        }
        else if (uVar13 == 3) {
          cVar4 = FUN_01ace900(param_1[0xf3],param_5,param_6);
          if (cVar4 != '\0') {
            plVar11 = param_1 + 0xee;
            in_stack_ffffffffffffff70 =
                 (undefined4 *)
                 CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff70 >> 8),(char)param_1[0xf5]);
            FUN_01acf0c0(param_1[0xf3],param_5,param_6,param_1 + 0xed,plVar11,
                         in_stack_ffffffffffffff70);
            uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
            lVar9 = param_1[0xf3];
            if (*(char *)(lVar9 + 0x108) == '\0') {
LAB_01a74602:
              FUN_01acfc60(lVar9);
            }
            else {
              if (*(byte *)(lVar9 + 0xb0) < 8) {
                bVar15 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                          (*(byte *)(lVar9 + 0xb0) & 0x1f) & 1U) != 0;
              }
              else {
                bVar15 = false;
              }
              if (!bVar15) goto LAB_01a74602;
              FUN_01acfa60(lVar9);
            }
            FUN_01aceb90(lVar9,1);
            FUN_0082a6c0(param_1[0x152],1);
            *(undefined1 *)(param_1 + 0xf5) = 0;
          }
        }
      }
      else if (uVar13 == 7) {
        plVar11 = (longlong *)param_1[0x1fd];
        lVar9 = FUN_00498310(param_5,param_6);
        plVar11[0xd] = lVar9;
        lVar9 = FUN_00498310(param_5,param_6);
        plVar11[0xe] = lVar9;
        FUN_01ae4b90(param_1[0xf3],param_1[0x1fd]);
        (**(code **)(*plVar11 + 0x78))(plVar11,param_1[0xf0]);
        *(undefined1 *)(param_1 + 0xf5) = 8;
      }
      else if (uVar13 == 9) {
        FUN_01d2c460(param_1[0x1fc],param_5,param_6);
        FUN_01ae4b90(param_1[0xf3],param_1[0x1fc]);
        *(uint *)(param_1 + 0xed) = param_5;
        *(uint *)((longlong)param_1 + 0x76c) = param_6;
        *(uint *)(param_1 + 0xee) = param_5;
        *(uint *)((longlong)param_1 + 0x774) = param_6;
        uVar10 = CONCAT44(uVar5,param_6);
        FUN_01a8de70(param_1[0xf0],(int)param_1[0xed],*(undefined4 *)((longlong)param_1 + 0x76c),
                     (int)param_1[0xee],uVar10);
        uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
        *(undefined1 *)(param_1 + 0xf5) = 10;
      }
    }
    else if (uVar13 < 0x11) {
      if (uVar13 == 0x10) {
        plVar11 = (longlong *)param_1[0x1ff];
        plVar11[0x15] = param_1[0xf3];
        local_70 = FUN_00498310(param_5,param_6);
        (**(code **)(*plVar11 + 200))(plVar11,&local_70);
        (**(code **)(*(longlong *)param_1[0x1ff] + 0xe8))((longlong *)param_1[0x1ff]);
        (**(code **)(**(longlong **)(param_1[0xf3] + 0xe0) + 0x80))
                  (*(longlong **)(param_1[0xf3] + 0xe0),&DAT_01a74a44,param_1[0x1ff]);
        FUN_01a8dee0(*(undefined8 *)(param_1[0xf3] + 0xe8),param_1[0x1ff]);
        FUN_01ae5650(param_1[0xf3]);
        param_1[0x1ff] = 0;
        FUN_0082a6c0(param_1[0x152],1);
        *(undefined1 *)(param_1 + 0xf5) = 0;
      }
      else if (uVar13 - 0xc < 2) {
        FUN_00410f20(local_30[0]);
        local_30[0] = 0;
        cVar4 = FUN_01ace420(param_1[0xf3],param_5,param_6,local_30);
        if (cVar4 != '\x02') {
          lVar9 = FUN_01ad08c0(param_1[0xf3],param_5,param_6);
          if (*(byte *)(lVar9 + 0x58) < 8) {
            bVar15 = ((int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1) <<
                      (*(byte *)(lVar9 + 0x58) & 0x1f) & 2U) != 0;
          }
          else {
            bVar15 = false;
          }
          if (!bVar15) goto LAB_01a74792;
        }
        lVar9 = FUN_01ad08c0(param_1[0xf3],param_5,param_6);
        if (*(byte *)(lVar9 + 0x58) < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1) <<
                    (*(byte *)(lVar9 + 0x58) & 0x1f) & 2U) != 0;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          uVar10 = FUN_01ad08c0(param_1[0xf3],param_5,param_6);
          local_70 = FUN_00498310(param_5,param_6);
          puVar17 = &local_70;
          in_stack_ffffffffffffff70 =
               (undefined4 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff70 >> 8),1);
          FUN_01ae1eb0(param_1[0xf3],(char)param_1[0xf5] == '\f',0,uVar10,puVar17,
                       in_stack_ffffffffffffff70);
          uVar5 = (undefined4)((ulonglong)puVar17 >> 0x20);
        }
        else {
          uVar10 = FUN_004aeac0(local_30[0],0);
          local_70 = FUN_00498310(param_5,param_6);
          puVar17 = &local_70;
          in_stack_ffffffffffffff70 =
               (undefined4 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff70 >> 8),1);
          FUN_01ae1eb0(param_1[0xf3],(char)param_1[0xf5] == '\f',uVar10,0,puVar17,
                       in_stack_ffffffffffffff70);
          uVar5 = (undefined4)((ulonglong)puVar17 >> 0x20);
        }
        FUN_01ae4310(param_1[0xf3]);
        FUN_0082a6c0(param_1[0x152],1);
        *(undefined1 *)(param_1 + 0xf5) = 0;
      }
      else if (uVar13 == 0xe) {
        FUN_00410f20(local_30[0]);
        local_30[0] = 0;
        cVar4 = FUN_01ace420(param_1[0xf3],param_5,param_6,local_30);
        if (cVar4 == '\b') {
          uVar10 = FUN_004aeac0(local_30[0],0);
          cVar4 = FUN_004113d0(uVar10,&PTR_FUN_01a5c280);
          if (cVar4 != '\0') {
            lVar9 = FUN_004aeac0(local_30[0],0);
            uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
            param_1[0x1fe] = lVar9;
            uVar6 = (**(code **)(*(longlong *)param_1[0x1fe] + 0xd0))((longlong *)param_1[0x1fe]);
            *(undefined4 *)(param_1 + 0x203) = uVar6;
            (**(code **)(*(longlong *)param_1[0x1fe] + 0xd0))((longlong *)param_1[0x1fe]);
            *(undefined4 *)((longlong)param_1 + 0x101c) = extraout_var_03;
            uVar6 = FUN_01a5eed0(param_1[0x1fe],param_1[0xf0]);
            *(undefined4 *)(param_1 + 0x202) = uVar6;
            uVar6 = FUN_01a5ee60(param_1[0x1fe],param_1[0xf0]);
            *(undefined4 *)((longlong)param_1 + 0x1014) = uVar6;
            uVar10 = CONCAT44(uVar5,*(undefined4 *)((longlong)param_1 + 0x1014));
            uVar18 = CONCAT44(uVar20,(int)param_1[0x202]);
            uVar5 = FUN_01a8e3e0(param_5,param_6,(int)param_1[0x203],
                                 *(undefined4 *)((longlong)param_1 + 0x101c),uVar10,uVar18);
            *(undefined4 *)(param_1 + 0xed) = uVar5;
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                              *(undefined4 *)((longlong)param_1 + 0x1014));
            in_stack_ffffffffffffff70 =
                 (undefined4 *)CONCAT44((int)((ulonglong)uVar18 >> 0x20),(int)param_1[0x202]);
            FUN_01a8e3e0(param_5,param_6,(int)param_1[0x203],
                         *(undefined4 *)((longlong)param_1 + 0x101c),uVar10,
                         in_stack_ffffffffffffff70);
            *(undefined4 *)((longlong)param_1 + 0x76c) = extraout_var_04;
            *(uint *)(param_1 + 0xee) = param_5;
            *(uint *)((longlong)param_1 + 0x774) = param_6;
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                              *(undefined4 *)((longlong)param_1 + 0x774));
            FUN_01a8de70(param_1[0xf0],(int)param_1[0xed],*(undefined4 *)((longlong)param_1 + 0x76c)
                         ,(int)param_1[0xee],uVar10);
            uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
            *(undefined1 *)(param_1 + 0xf5) = 0xf;
          }
        }
      }
      else if (uVar13 == 0xf) {
        FUN_00410f20(local_30[0]);
        local_30[0] = 0;
        cVar4 = FUN_01ace420(param_1[0xf3],param_5,param_6,local_30);
        if (cVar4 == '\x02') {
          plVar11 = (longlong *)FUN_004aeac0(local_30[0],0);
          local_70 = (**(code **)(*(longlong *)param_1[0x1fe] + 0xd0))((longlong *)param_1[0x1fe]);
          cVar4 = (**(code **)(*plVar11 + 0x110))(plVar11,&local_70);
          if (cVar4 != '\0') {
            FUN_01a8de70(param_1[0xf0],(int)param_1[0xed],*(undefined4 *)((longlong)param_1 + 0x76c)
                         ,(int)param_1[0xee],
                         CONCAT44(uVar5,*(undefined4 *)((longlong)param_1 + 0x774)));
            plVar11 = (longlong *)param_1[0x1fe];
            (**(code **)(*plVar11 + 0x120))(plVar11,DAT_01fcab48,param_1[0xf0]);
            if (plVar11[0x15] != 0) {
              (**(code **)(*(longlong *)plVar11[0x15] + 0x108))
                        ((longlong *)plVar11[0x15],param_1[0x1fe]);
            }
            lVar9 = FUN_004aeac0(local_30[0],0);
            plVar11[0x15] = lVar9;
            (**(code **)(*(longlong *)plVar11[0x15] + 0x100))
                      ((longlong *)plVar11[0x15],param_1[0x1fe]);
            plVar8 = plVar11 + 0x17;
            (**(code **)(*(longlong *)plVar11[0x15] + 0xf8))
                      ((longlong *)plVar11[0x15],param_5,param_6,plVar11 + 0x16,plVar8);
            uVar5 = (undefined4)((ulonglong)plVar8 >> 0x20);
            (**(code **)(*plVar11 + 0xe8))(plVar11);
            (**(code **)(*plVar11 + 0x128))(plVar11,DAT_01fcab48,param_1[0xf0]);
            param_1[0x1fe] = 0;
            FUN_0082a6c0(param_1[0x152],1);
            *(undefined1 *)(param_1 + 0xf5) = 0;
          }
        }
      }
    }
    else if (uVar13 == 0x14) {
      plVar11 = (longlong *)FUN_01ae39d0(param_1[0xf3],param_5,param_6);
      param_1[0x1fe] = (longlong)plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x128))(plVar11,DAT_01fcab48,param_1[0xf0]);
        FUN_0082a6c0(param_1[0x152],1);
        *(undefined1 *)(param_1 + 0xf5) = 0;
      }
    }
    else if (uVar13 == 0x15) {
      plVar11 = param_1 + 0xee;
      in_stack_ffffffffffffff70 = (undefined4 *)((ulonglong)uVar19 << 8);
      FUN_01acf0c0(param_1[0xf3],param_5,param_6,param_1 + 0xed,plVar11,in_stack_ffffffffffffff70);
      uVar5 = (undefined4)((ulonglong)plVar11 >> 0x20);
      *(undefined4 *)(param_1 + 0xef) = 0;
      FUN_01acff30(param_1[0xf3],local_30);
      if (param_1[0x201] != 0) {
        uVar10 = FUN_004aeac0(local_30[0],0);
        cVar4 = FUN_01ad1090(param_1[0xf3],uVar10,param_1 + 0x201);
        if (cVar4 != '\0') {
          bVar1 = *(byte *)(param_1[0x201] + 0x58);
          if (bVar1 < 8) {
            bVar15 = ((int)CONCAT71((int7)((ulonglong)param_1[0x201] >> 8),1) << (bVar1 & 0x1f) & 1U
                     ) != 0;
          }
          else {
            bVar15 = false;
          }
          if (bVar15) {
            lVar9 = FUN_004aeac0(local_30[0],0);
            FUN_010f2ba0(*(undefined8 *)(lVar9 + 0xe0),*(undefined8 *)(lVar9 + 200));
          }
        }
      }
    }
  }
LAB_01a74792:
  if (param_3 == '\x01') {
    if ((char)param_1[0xf5] == '\n') {
      FUN_01a8de70(param_1[0xf0],(int)param_1[0xed],*(undefined4 *)((longlong)param_1 + 0x76c),
                   (int)param_1[0xee],CONCAT44(uVar5,*(undefined4 *)((longlong)param_1 + 0x774)));
      (**(code **)(*(longlong *)param_1[0x1fc] + 0xe8))((longlong *)param_1[0x1fc]);
      param_1[0x1fc] = 0;
      FUN_0082a6c0(param_1[0x152],1);
      *(undefined1 *)(param_1 + 0xf5) = 0;
    }
    else {
      uVar13 = (ulonglong)param_5;
      cVar4 = FUN_01ace170(param_1[0xf3],uVar13,param_6);
      if (cVar4 != '\0') {
        uVar13 = (ulonglong)param_5;
        FUN_01acf0c0(param_1[0xf3],uVar13,param_6,param_1 + 0xed,param_1 + 0xee,
                     (ulonglong)in_stack_ffffffffffffff70 & 0xffffffffffffff00);
      }
      bVar1 = *(byte *)(param_1[0xf3] + 0xb0);
      if (bVar1 < 8) {
        bVar15 = ((int)CONCAT71((int7)(uVar13 >> 8),1) << (bVar1 & 0x1f) & 6U) != 0;
      }
      else {
        bVar15 = false;
      }
      if (!bVar15) {
        FUN_01ad7f60(param_1[0xf3]);
        if (*(char *)(param_1[0xf7] + 0xa9) == '\0') {
          iVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
          (**(code **)(*param_1 + 0xd8))(param_1);
          (**(code **)(*(longlong *)param_1[0x102] + 0xa8))
                    ((longlong *)param_1[0x102],param_5 + iVar7,param_6 + extraout_var_06);
        }
        else {
          iVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
          (**(code **)(*param_1 + 0xd8))(param_1);
          (**(code **)(*(longlong *)param_1[0x102] + 0xa8))
                    ((longlong *)param_1[0x102],param_5 + iVar7 + *(int *)(param_1[0xf7] + 0x90),
                     param_6 + extraout_var_05 + *(int *)(param_1[0xf7] + 0x94));
        }
      }
    }
  }
  FUN_00410f20(local_30[0]);
  FUN_01a7fc90(param_1);
LAB_01a749e5:
  FUN_00414560(&local_48,2);
  return;
}


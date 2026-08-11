/* Ghidra address: 01372020 */
/* Ghidra symbol: FUN_01372020 */


double FUN_01372020(longlong param_1,char param_2,undefined8 *param_3,char param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_130;
  int local_12c;
  double local_128;
  double local_120;
  char local_112;
  double local_111;
  double local_109;
  byte local_e9;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8 [21];
  
  puVar3 = local_d8;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00414610(param_6);
  if (param_4 == '\0') {
    FUN_01371260(param_1);
  }
  FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_013729bc,1);
  if ((param_4 == '\0') && (*PTR_DAT_020023b0 == '\0')) {
    FUN_01af2ae0(*(undefined8 *)(param_1 + 0xf10));
  }
  iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
  iVar9 = 0;
  if (-1 < iVar11 + -1) {
    do {
      puVar3 = (undefined8 *)
               FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x468),iVar9);
      puVar4 = (undefined8 *)
               FUN_01cfde70(*puVar3,*(undefined1 *)(puVar3 + 1),
                            *(undefined1 *)((longlong)puVar3 + 9),(longlong)&uStack_e0 + 7,
                            (longlong)&uStack_e0 + 6,&local_e9);
      uVar5 = (**(code **)(*(longlong *)*puVar3 + 0x2d0))
                        ((longlong *)*puVar3,*(byte *)(puVar3 + 1) - 1,&local_e8);
      uStack_e0._7_1_ = (byte)uVar5;
      if (uStack_e0._7_1_ < 8) {
        uVar2 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (uStack_e0._7_1_ & 0x1f);
        uVar6 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0x90) != 0);
      }
      else {
        uVar6 = 0;
      }
      if (((char)uVar6 != '\0') && (*(char *)((longlong)puVar3 + 9) != '\0')) {
        if (uStack_e0._7_1_ == 4) {
          *(undefined1 *)(local_e8 + 0x2e) = 1;
          uVar6 = local_e8;
        }
        else {
          uVar6 = 0;
          if (uStack_e0._7_1_ == 7) {
            *(undefined1 *)(local_e8 + 0x2e) = 1;
            uVar6 = local_e8;
          }
        }
      }
      if (uStack_e0._7_1_ < 8) {
        uVar2 = (int)CONCAT71((int7)(uVar6 >> 8),1) << (uStack_e0._7_1_ & 0x1f);
        bVar12 = (uVar2 & 0x48) != 0;
        uVar6 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar12);
      }
      else {
        uVar6 = 0;
        bVar12 = false;
      }
      if (bVar12) {
        FUN_01d3a010(puVar4,uVar5 & 0xff,(&uStack_e0)[iVar9 + 1]);
      }
      else {
        if (uStack_e0._7_1_ == 5) {
          if (local_e9 < 8) {
            bVar12 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (local_e9 & 0x1f) & 0x90U) != 0;
          }
          else {
            bVar12 = false;
          }
          if ((!bVar12) || (*(char *)((longlong)puVar3 + 9) != '\x03')) {
            FUN_01d3a230(*(undefined8 *)(local_e8 + 1),*(undefined8 *)(local_e8 + 9),
                         *(byte *)((longlong)puVar3 + 9) - 1,(&uStack_e0)[iVar9 + 1]);
            goto LAB_013722b1;
          }
        }
        *puVar4 = (&uStack_e0)[iVar9 + 1];
      }
LAB_013722b1:
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  FUN_016f5520(param_1,0);
  if (param_2 == '\x01') {
    FUN_01374d30(param_1,0);
    FUN_00f51be0(param_1,param_4,param_5,param_6);
  }
  else if (param_2 == '\x03') {
    FUN_01374d30(param_1,0);
    FUN_01cc60b0(*(undefined8 *)(param_1 + 0xb0),0);
    FUN_00f51d50(param_1,param_4,param_5,param_6);
  }
  else if (param_2 == '\x04') {
    FUN_01374d30(param_1,0);
    FUN_01cc60b0(*(undefined8 *)(param_1 + 0xb0),0);
    FUN_00f52320(param_1,param_4,param_5,param_6);
  }
  else if (param_2 == '\b') {
    FUN_01374e80(param_1,0);
    FUN_01cc60b0(*(undefined8 *)(param_1 + 0xb0),0);
    FUN_00f528c0(param_1,*(undefined1 *)(param_1 + 0x333),param_4,param_5,param_6);
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  *(undefined1 *)(param_1 + 0x1439) = 0;
  local_128 = 0.0;
  local_12c = 0;
  dVar21 = 0.0;
  iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x478) + 0x10);
  local_130 = 0;
  dVar13 = 0.0;
  if (iVar11 - 1U < 0x80000000) {
    do {
      puVar3 = (undefined8 *)
               FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x478),local_130);
      uVar15 = *(undefined8 *)((longlong)puVar3 + 0x2b);
      dVar13 = (double)FUN_013711f0(param_1,*puVar3);
      dVar19 = 0.0;
      dVar14 = 0.0;
      if (param_2 == '\x01') {
        if ((*(char *)(puVar3 + 1) == '\0') &&
           (0 < *(int *)(*(longlong *)((longlong)puVar3 + 0x23) + 0x10))) {
          pcVar7 = (char *)FUN_004aeac0(*(longlong *)((longlong)puVar3 + 0x23),0);
          pcVar10 = &local_112;
          for (lVar8 = 5; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined8 *)pcVar10 = *(undefined8 *)pcVar7;
            pcVar7 = pcVar7 + 8;
            pcVar10 = pcVar10 + 8;
          }
          *pcVar10 = *pcVar7;
          if (local_112 == '\x01') {
            lVar8 = *(longlong *)(param_1 + 0x4f0);
            uVar2 = *(uint *)((longlong)puVar3 + 0x33);
            if (*(uint *)(lVar8 + 0x10) <= uVar2) {
              FUN_00594f90();
            }
            local_120 = (double)FUN_017c83b0(param_1,*(undefined8 *)
                                                      (*(longlong *)(lVar8 + 8) +
                                                      (longlong)(int)uVar2 * 8));
            dVar19 = (double)FUN_0040c850(local_111 - local_120);
            uVar15 = FUN_0040c850(local_111);
            uVar16 = FUN_0040c850(local_120);
            dVar17 = (double)FUN_00b90620(uVar15,uVar16);
            dVar19 = dVar19 / (dVar17 + dVar13);
            dVar19 = dVar19 * dVar19;
            uVar15 = FUN_0040c850(local_111);
            uVar16 = FUN_0040c850(local_120);
            dVar17 = (double)FUN_00b90620(uVar15,uVar16);
            dVar20 = local_109 / 100.0;
            if ((*(char *)(param_1 + 0x1439) != '\0') ||
               (dVar18 = (double)FUN_0040c850(local_111 - local_120),
               dVar20 * (dVar17 + dVar13) < dVar18)) {
              uVar1 = 1;
            }
            else {
              uVar1 = 0;
            }
            *(undefined1 *)(param_1 + 0x1439) = uVar1;
          }
          else if (local_112 == '\x02') {
            lVar8 = *(longlong *)(param_1 + 0x4f0);
            uVar2 = *(uint *)((longlong)puVar3 + 0x33);
            if (*(uint *)(lVar8 + 0x10) <= uVar2) {
              FUN_00594f90();
            }
            dVar14 = (double)FUN_017c83b0(param_1,*(undefined8 *)
                                                   (*(longlong *)(lVar8 + 8) +
                                                   (longlong)(int)uVar2 * 8));
            dVar14 = -dVar14;
            local_12c = local_12c + 1;
          }
          else if (local_112 == '\x03') {
            lVar8 = *(longlong *)(param_1 + 0x4f0);
            uVar2 = *(uint *)((longlong)puVar3 + 0x33);
            if (*(uint *)(lVar8 + 0x10) <= uVar2) {
              FUN_00594f90();
            }
            dVar14 = (double)FUN_017c83b0(param_1,*(undefined8 *)
                                                   (*(longlong *)(lVar8 + 8) +
                                                   (longlong)(int)uVar2 * 8));
            local_12c = local_12c + 1;
          }
        }
      }
      else if ((byte)(param_2 - 3U) < 2) {
        if (*(char *)(puVar3 + 1) == '\0') {
          if (0 < *(int *)(*(longlong *)((longlong)puVar3 + 0x23) + 0x10)) {
            pcVar7 = (char *)FUN_004aeac0(*(longlong *)((longlong)puVar3 + 0x23),0);
            pcVar10 = &local_112;
            for (lVar8 = 5; lVar8 != 0; lVar8 = lVar8 + -1) {
              *(undefined8 *)pcVar10 = *(undefined8 *)pcVar7;
              pcVar7 = pcVar7 + 8;
              pcVar10 = pcVar10 + 8;
            }
            *pcVar10 = *pcVar7;
            if (local_112 == '\x01') {
              lVar8 = *(longlong *)(param_1 + 0x4f0);
              uVar2 = *(uint *)((longlong)puVar3 + 0x33);
              if (*(uint *)(lVar8 + 0x10) <= uVar2) {
                FUN_00594f90();
              }
              local_120 = (double)FUN_017c83b0(param_1,*(undefined8 *)
                                                        (*(longlong *)(lVar8 + 8) +
                                                        (longlong)(int)uVar2 * 8));
            }
            else if (local_112 == '\x02') {
              if (*(char *)(puVar3 + 1) == '\x03') {
                local_120 = (double)(**(code **)(**(longlong **)(param_1 + 0x1440) + 0x70))
                                              (*(longlong **)(param_1 + 0x1440),uVar15);
              }
              else {
                local_120 = (double)(**(code **)(**(longlong **)(param_1 + 0x1440) + 0x68))
                                              (*(longlong **)(param_1 + 0x1440),uVar15);
              }
            }
            dVar19 = (double)FUN_0040c850(local_111 - local_120);
            uVar15 = FUN_0040c850(local_111);
            uVar16 = FUN_0040c850(local_120);
            dVar17 = (double)FUN_00b90620(uVar15,uVar16);
            dVar19 = dVar19 / (dVar17 + dVar13);
            dVar19 = dVar19 * dVar19;
            uVar15 = FUN_0040c850(local_111);
            uVar16 = FUN_0040c850(local_120);
            dVar17 = (double)FUN_00b90620(uVar15,uVar16);
            dVar20 = local_109 / 100.0;
            if ((*(char *)(param_1 + 0x1439) != '\0') ||
               (dVar18 = (double)FUN_0040c850(local_111 - local_120),
               dVar20 * (dVar17 + dVar13) < dVar18)) {
              uVar1 = 1;
            }
            else {
              uVar1 = 0;
            }
            *(undefined1 *)(param_1 + 0x1439) = uVar1;
          }
        }
        else if (*(char *)(puVar3 + 1) == '\x03') {
          dVar19 = (double)FUN_01371330(param_1,param_2,local_130);
          dVar19 = dVar19 * dVar19;
        }
      }
      else if (param_2 == '\b') {
        if (*(char *)(puVar3 + 1) == '\x01') {
          dVar19 = (double)FUN_01371330(param_1,8,local_130);
          dVar19 = dVar19 * dVar19;
        }
        else if (*(char *)(puVar3 + 1) == '\x02') {
          dVar19 = (double)FUN_013715b0(param_1,puVar3);
          dVar19 = dVar19 * dVar19;
        }
      }
      local_128 = local_128 + dVar19;
      dVar21 = dVar21 + dVar14;
      local_130 = local_130 + 1;
      iVar11 = iVar11 + -1;
      dVar13 = dVar21;
    } while (iVar11 != 0);
  }
  iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x478) + 0x10);
  if (local_12c < iVar11) {
    local_128 = (double)FUN_0040c760(local_128 / (double)(iVar11 - local_12c));
  }
  if (0 < local_12c) {
    local_128 = local_128 + dVar13 / (double)local_12c;
  }
  FUN_00414480(&param_6);
  return local_128;
}


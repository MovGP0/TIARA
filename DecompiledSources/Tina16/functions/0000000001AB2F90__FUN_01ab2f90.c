/* Ghidra address: 01ab2f90 */
/* Ghidra symbol: FUN_01ab2f90 */


void FUN_01ab2f90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 in_stack_ffffffffffffff18;
  undefined1 *puVar23;
  int local_c4;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined8 local_68;
  double local_60 [7];
  
  cVar9 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar9 != '\0') {
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
    if ((*(char *)(*(longlong *)(param_1[0x1a] + 8) + 0x434) == '\x03') &&
       (cVar9 = FUN_004113d0(param_1[0x19],&PTR_FUN_01cb8940), cVar9 != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x5d) = 1;
    }
    lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x58))
                       ((longlong *)param_1[0x19],param_1[0x1c]);
    param_1[0x10] = lVar17;
    lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x60))
                       ((longlong *)param_1[0x19],param_1[0x1c]);
    param_1[0x11] = lVar17;
    lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x68))
                       ((longlong *)param_1[0x19],param_1[0x1c]);
    param_1[0x12] = lVar17;
    lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x70))
                       ((longlong *)param_1[0x19],param_1[0x1c]);
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
    param_1[0x13] = lVar17;
    iVar16 = *(int *)(param_1[0x21] + 0x10);
    local_c4 = 0;
    if (-1 < iVar16 + -1) {
      do {
        plVar14 = (longlong *)FUN_004aeac0(param_1[0x21],local_c4);
        (**(code **)(*plVar14 + 0x120))(plVar14,param_3,param_2);
        (**(code **)(*plVar14 + 0x118))(plVar14);
        (**(code **)(*plVar14 + 0x128))(plVar14,param_3,param_2);
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        local_c4 = local_c4 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    (**(code **)(*param_1 + 0x68))(param_1);
    uVar10 = FUN_01cc7250(param_1[0x19],param_1[0x1c]);
    FUN_01d2c610(param_1,uVar10);
    if (((param_1[0x19] != 0) && (param_1[0x1f] != 0)) && (param_1[0x20] != 0)) {
      uVar10 = *(undefined4 *)(param_1[0x1f] + 0xe8);
      uVar1 = *(undefined4 *)(param_1[0x20] + 0xec);
      uVar2 = *(undefined4 *)(param_1[0x1f] + 0xec);
      uVar3 = *(undefined4 *)(param_1[0x20] + 0xe8);
      FUN_00498350(local_88,uVar10,uVar1,uVar2,CONCAT44(uVar11,uVar3));
      (**(code **)(*param_1 + 0xb0))(param_1,local_88);
      if ((*(char *)((longlong)param_1 + 0x5d) == '\0') || (*(int *)(param_1[0x1c] + 0x2c) < 2)) {
        (**(code **)(*(longlong *)param_1[0x19] + 0x10))((longlong *)param_1[0x19],param_1[0x1c],0);
      }
      else {
        (**(code **)(*(longlong *)param_1[0x19] + 0x18))
                  ((longlong *)param_1[0x19],param_1[0x1c],*(undefined8 *)(param_1[0x1f] + 0xb8),0);
      }
      *(undefined8 *)PTR_DAT_02005620 = 0;
      *(undefined8 *)PTR_DAT_020041f8 = 0;
      if ((*(longlong *)PTR_DAT_02001e00 == 0) || (param_3 != *(longlong *)PTR_DAT_02001e00)) {
        cVar9 = '\0';
      }
      else {
        cVar9 = *(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xa18) + 0x80);
      }
      local_b4 = 0x7fffffff;
      iVar16 = 0x7fffffff;
      if ((cVar9 == '\0') || (*(char *)(param_1[0x1c] + 0x2b) != '\0')) {
        do {
          do {
            cVar9 = (**(code **)(*(longlong *)param_1[0x19] + 0x30))
                              ((longlong *)param_1[0x19],local_60,&local_68,0);
            if (cVar9 == '\0') goto code_r0x01ab3506;
          } while ((*(double *)(param_1[0xf] + 0xa0) != 0.0) &&
                  (*(double *)(param_1[0xf] + 0xa0) < local_60[0]));
          local_60[0] = local_60[0] + (double)param_1[0x1e];
          iVar12 = FUN_01cd60f0(param_1[0x1f],local_60[0]);
          if ((local_b4 != iVar12) ||
             (iVar12 = FUN_01cd60f0(param_1[0x20],local_68), iVar16 != iVar12)) {
            local_b4 = FUN_01cd60f0(param_1[0x1f],local_60[0]);
            iVar16 = FUN_01cd60f0(param_1[0x20],local_68);
            FUN_01d2c460(param_1,local_b4,iVar16);
          }
        } while ((*(char *)((longlong)param_1 + 0x5d) == '\0') ||
                (local_60[0] < *(double *)(param_1[0x1f] + 0xc0) ||
                 local_60[0] == *(double *)(param_1[0x1f] + 0xc0)));
code_r0x01ab3506:
        if (*(double *)(param_1[0xf] + 0xa0) != 0.0) {
          uVar21 = *(undefined8 *)(param_1[0xf] + 0xa0);
          (**(code **)(*(longlong *)param_1[0x19] + 0x10))
                    ((longlong *)param_1[0x19],param_1[0x1c],0);
          uVar20 = (**(code **)(*(longlong *)param_1[0x19] + 0x48))
                             ((longlong *)param_1[0x19],uVar21);
          uVar11 = FUN_01cd60f0(param_1[0x1f],uVar21);
          uVar13 = FUN_01cd60f0(param_1[0x20],uVar20);
          FUN_01d2c460(param_1,uVar11,uVar13);
        }
      }
      else {
        lVar17 = param_1[0x1f];
        iVar16 = FUN_01cd60f0(lVar17,*(undefined8 *)(lVar17 + 0xb8));
        dVar18 = (double)FUN_01cd62b0(lVar17,iVar16 + 1);
        uVar11 = FUN_01cd60f0(lVar17,*(undefined8 *)(lVar17 + 0xb8));
        dVar19 = (double)FUN_01cd62b0(lVar17,uVar11);
        for (dVar22 = *(double *)(lVar17 + 0xb8); dVar22 < *(double *)(param_1[0x1f] + 0xc0);
            dVar22 = dVar22 + (dVar18 - dVar19)) {
          uVar21 = (**(code **)(*(longlong *)param_1[0x19] + 0x48))
                             ((longlong *)param_1[0x19],dVar22);
          uVar11 = FUN_01cd60f0(param_1[0x1f],dVar22);
          uVar13 = FUN_01cd60f0(param_1[0x20],uVar21);
          FUN_01d2c460(param_1,uVar11,uVar13);
        }
      }
      if ((char)param_1[0x15] != '\0') {
        uVar21 = FUN_01ab2a30(param_1);
        (**(code **)(*param_1 + 0xf0))(param_1,uVar21,param_1[0x12],&local_6c,local_70);
        uVar21 = FUN_01ab2a60(param_1);
        puVar23 = local_78;
        (**(code **)(*param_1 + 0xf0))(param_1,uVar21,param_1[0x13],&local_74,puVar23);
        iVar16 = *(int *)(param_1[0x1f] + 0xec);
        if (local_74 < *(int *)(param_1[0x1f] + 0xec)) {
          iVar16 = local_74;
        }
        iVar12 = *(int *)(param_1[0x1f] + 0xe8);
        if (*(int *)(param_1[0x1f] + 0xe8) < local_6c) {
          iVar12 = local_6c;
        }
        uVar11 = FUN_0040c840((double)(((iVar16 - iVar12) - (int)param_1[0x18]) + -2) /
                              (double)(int)param_1[0x17]);
        *(undefined4 *)((longlong)param_1 + 0xbc) = uVar11;
        local_c4 = 2;
        while (((int *)param_1[10])[(longlong)local_c4 * 2 + -2] == *(int *)param_1[10]) {
          local_c4 = local_c4 + 1;
        }
        piVar6 = (int *)param_1[10];
        bVar7 = *piVar6 < piVar6[(longlong)local_c4 * 2 + -2];
        local_b4 = *piVar6;
        local_c4 = 2;
        if (1 < (int)param_1[9]) {
          iVar16 = (int)param_1[9] + -1;
          local_b0 = local_b4;
          local_ac = piVar6[1];
          do {
            iVar12 = *(int *)(param_1[10] + -8 + (longlong)local_c4 * 8);
            iVar4 = *(int *)(param_1[10] + -4 + (longlong)local_c4 * 8);
            if ((bool)(bVar7 & iVar12 < local_b4)) {
              bVar7 = false;
              local_b4 = local_b4 + *(int *)((longlong)param_1 + 0xbc);
            }
            else if ((local_b4 < iVar12) && (!bVar7)) {
              bVar7 = true;
              local_b4 = local_b4 - *(int *)((longlong)param_1 + 0xbc);
            }
            while( true ) {
              iVar8 = local_b4;
              uVar11 = (undefined4)((ulonglong)puVar23 >> 0x20);
              uVar15 = iVar12 - local_b4 >> 0x1f;
              iVar5 = *(int *)((longlong)param_1 + 0xbc);
              if ((int)((iVar12 - local_b4 ^ uVar15) - uVar15) < iVar5) break;
              if (local_b4 < iVar12) {
                local_b4 = local_b4 + iVar5;
              }
              else if (iVar12 < local_b4) {
                local_b4 = local_b4 - iVar5;
              }
              plVar14 = (longlong *)
                        FUN_01d2dd40(&PTR_FUN_01d2a288,CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1))
              ;
              *(char *)(plVar14 + 10) = (char)param_1[0x15];
              *(int *)((longlong)plVar14 + 0x5c) = (int)param_1[0x18];
              (**(code **)(*(longlong *)plVar14[9] + 0x10))((longlong *)plVar14[9],param_1[0xc]);
              uVar13 = FUN_0040c770((double)((local_b4 - local_b0) * (iVar4 - local_ac)) /
                                    (double)(iVar12 - local_b0) + (double)local_ac);
              local_90 = FUN_00498310(local_b4,uVar13);
              (**(code **)(*plVar14 + 200))(plVar14,&local_90);
              puVar23 = (undefined1 *)CONCAT44(uVar11,uVar3);
              FUN_00498350(local_88,uVar10,uVar1,uVar2,puVar23);
              (**(code **)(*plVar14 + 0xb0))(plVar14,local_88);
              (**(code **)(*plVar14 + 0x50))(plVar14,(char)param_1[2]);
              (**(code **)(*(longlong *)param_1[0x16] + 0x80))
                        ((longlong *)param_1[0x16],L"Marker",plVar14);
            }
            local_c4 = local_c4 + 1;
            iVar16 = iVar16 + -1;
            local_b0 = iVar12;
            local_ac = iVar4;
          } while (iVar16 != 0);
        }
      }
      FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
    }
  }
  return;
}


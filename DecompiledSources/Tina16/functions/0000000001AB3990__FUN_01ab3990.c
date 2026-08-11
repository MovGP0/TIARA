/* Ghidra address: 01ab3990 */
/* Ghidra symbol: FUN_01ab3990 */


void FUN_01ab3990(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 in_stack_ffffffffffffff28;
  undefined1 *puVar23;
  int local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined8 local_68;
  double local_60 [7];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  if ((*(char *)(*(longlong *)(param_1[0x1a] + 8) + 0x434) == '\x03') &&
     (cVar9 = FUN_004113d0(param_1[0x19],&PTR_FUN_01cb8940), cVar9 != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x5d) = 1;
  }
  lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x58))((longlong *)param_1[0x19],param_1[0x1c])
  ;
  param_1[0x10] = lVar17;
  lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x60))((longlong *)param_1[0x19],param_1[0x1c])
  ;
  param_1[0x11] = lVar17;
  lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x68))((longlong *)param_1[0x19],param_1[0x1c])
  ;
  param_1[0x12] = lVar17;
  lVar17 = (**(code **)(*(longlong *)param_1[0x19] + 0x70))((longlong *)param_1[0x19],param_1[0x1c])
  ;
  param_1[0x13] = lVar17;
  uVar10 = FUN_01cc7250(param_1[0x19],param_1[0x1c]);
  FUN_01d2c610(param_1,uVar10);
  if (((param_1[0x19] != 0) && (param_1[0x1f] != 0)) && (param_1[0x20] != 0)) {
    uVar10 = *(undefined4 *)(param_1[0x1f] + 0xe8);
    uVar1 = *(undefined4 *)(param_1[0x20] + 0xec);
    uVar2 = *(undefined4 *)(param_1[0x1f] + 0xec);
    uVar3 = *(undefined4 *)(param_1[0x20] + 0xe8);
    FUN_00498350(local_88,uVar10,uVar1,uVar2,CONCAT44(uVar12,uVar3));
    (**(code **)(*param_1 + 0xb0))(param_1,local_88);
    (**(code **)(*(longlong *)param_1[0x19] + 0x18))
              ((longlong *)param_1[0x19],param_1[0x1c],param_4,0);
    *(undefined8 *)PTR_DAT_02005620 = 0;
    *(undefined8 *)PTR_DAT_020041f8 = 0;
    if ((*(longlong *)PTR_DAT_02001e00 == 0) || (param_3 != *(longlong *)PTR_DAT_02001e00)) {
      cVar9 = '\0';
    }
    else {
      cVar9 = *(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xa18) + 0x80);
    }
    local_b8 = 0x7fffffff;
    iVar11 = 0x7fffffff;
    if ((cVar9 == '\0') || (*(char *)(param_1[0x1c] + 0x2b) != '\0')) {
      do {
        do {
          cVar9 = (**(code **)(*(longlong *)param_1[0x19] + 0x30))
                            ((longlong *)param_1[0x19],local_60,&local_68,0);
          if (cVar9 == '\0') goto code_r0x01ab3e0f;
        } while ((*(double *)(param_1[0xf] + 0xa0) != 0.0) &&
                (*(double *)(param_1[0xf] + 0xa0) < local_60[0]));
        local_60[0] = local_60[0] + (double)param_1[0x1e];
        iVar13 = FUN_01cd60f0(param_1[0x1f],local_60[0]);
        if ((local_b8 != iVar13) ||
           (iVar13 = FUN_01cd60f0(param_1[0x20],local_68), iVar11 != iVar13)) {
          local_b8 = FUN_01cd60f0(param_1[0x1f],local_60[0]);
          iVar11 = FUN_01cd60f0(param_1[0x20],local_68);
          FUN_01d2c460(param_1,local_b8,iVar11);
        }
      } while ((*(char *)((longlong)param_1 + 0x5d) == '\0') ||
              (local_60[0] < *(double *)(param_1[0x1f] + 0xc0) ||
               local_60[0] == *(double *)(param_1[0x1f] + 0xc0)));
code_r0x01ab3e0f:
      if (*(double *)(param_1[0xf] + 0xa0) != 0.0) {
        uVar21 = *(undefined8 *)(param_1[0xf] + 0xa0);
        (**(code **)(*(longlong *)param_1[0x19] + 0x10))((longlong *)param_1[0x19],param_1[0x1c],0);
        uVar20 = (**(code **)(*(longlong *)param_1[0x19] + 0x48))((longlong *)param_1[0x19],uVar21);
        uVar12 = FUN_01cd60f0(param_1[0x1f],uVar21);
        uVar14 = FUN_01cd60f0(param_1[0x20],uVar20);
        FUN_01d2c460(param_1,uVar12,uVar14);
      }
    }
    else {
      lVar17 = param_1[0x1f];
      iVar11 = FUN_01cd60f0(lVar17,*(undefined8 *)(lVar17 + 0xb8));
      dVar18 = (double)FUN_01cd62b0(lVar17,iVar11 + 1);
      uVar12 = FUN_01cd60f0(lVar17,*(undefined8 *)(lVar17 + 0xb8));
      dVar19 = (double)FUN_01cd62b0(lVar17,uVar12);
      for (dVar22 = *(double *)(lVar17 + 0xb8); dVar22 < *(double *)(param_1[0x1f] + 0xc0);
          dVar22 = dVar22 + (dVar18 - dVar19)) {
        uVar21 = (**(code **)(*(longlong *)param_1[0x19] + 0x48))((longlong *)param_1[0x19],dVar22);
        uVar12 = FUN_01cd60f0(param_1[0x1f],dVar22);
        uVar14 = FUN_01cd60f0(param_1[0x20],uVar21);
        FUN_01d2c460(param_1,uVar12,uVar14);
      }
    }
    if ((char)param_1[0x15] != '\0') {
      uVar21 = FUN_01ab2a30(param_1);
      (**(code **)(*param_1 + 0xf0))(param_1,uVar21,param_1[0x12],&local_6c,local_70);
      uVar21 = FUN_01ab2a60(param_1);
      puVar23 = local_78;
      (**(code **)(*param_1 + 0xf0))(param_1,uVar21,param_1[0x13],&local_74,puVar23);
      iVar11 = *(int *)(param_1[0x1f] + 0xec);
      if (local_74 < iVar11) {
        iVar11 = local_74;
      }
      iVar13 = *(int *)(param_1[0x1f] + 0xe8);
      if (iVar13 < local_6c) {
        iVar13 = local_6c;
      }
      uVar12 = FUN_0040c840((double)(((iVar11 - iVar13) - (int)param_1[0x18]) + -2) /
                            (double)(int)param_1[0x17]);
      *(undefined4 *)((longlong)param_1 + 0xbc) = uVar12;
      local_ac = 2;
      while (((int *)param_1[10])[(longlong)local_ac * 2 + -2] == *(int *)param_1[10]) {
        local_ac = local_ac + 1;
      }
      piVar6 = (int *)param_1[10];
      bVar7 = *piVar6 < piVar6[(longlong)local_ac * 2 + -2];
      local_b8 = *piVar6;
      local_ac = 2;
      if (1 < (int)param_1[9]) {
        iVar11 = (int)param_1[9] + -1;
        local_a8 = local_b8;
        local_a4 = piVar6[1];
        do {
          iVar13 = *(int *)(param_1[10] + -8 + (longlong)local_ac * 8);
          iVar4 = *(int *)(param_1[10] + -4 + (longlong)local_ac * 8);
          if ((bool)(bVar7 & iVar13 < local_b8)) {
            bVar7 = false;
            local_b8 = local_b8 + *(int *)((longlong)param_1 + 0xbc);
          }
          else if ((local_b8 < iVar13) && (!bVar7)) {
            bVar7 = true;
            local_b8 = local_b8 - *(int *)((longlong)param_1 + 0xbc);
          }
          while( true ) {
            iVar8 = local_b8;
            uVar12 = (undefined4)((ulonglong)puVar23 >> 0x20);
            uVar16 = iVar13 - local_b8 >> 0x1f;
            iVar5 = *(int *)((longlong)param_1 + 0xbc);
            if ((int)((iVar13 - local_b8 ^ uVar16) - uVar16) < iVar5) break;
            if (local_b8 < iVar13) {
              local_b8 = local_b8 + iVar5;
            }
            else if (iVar13 < local_b8) {
              local_b8 = local_b8 - iVar5;
            }
            plVar15 = (longlong *)
                      FUN_01d2dd40(&PTR_FUN_01d2a288,CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1));
            *(char *)(plVar15 + 10) = (char)param_1[0x15];
            *(int *)((longlong)plVar15 + 0x5c) = (int)param_1[0x18];
            (**(code **)(*(longlong *)plVar15[9] + 0x10))((longlong *)plVar15[9],param_1[0xc]);
            uVar14 = FUN_0040c770((double)((local_b8 - local_a8) * (iVar4 - local_a4)) /
                                  (double)(iVar13 - local_a8) + (double)local_a4);
            local_90 = FUN_00498310(local_b8,uVar14);
            (**(code **)(*plVar15 + 200))(plVar15,&local_90);
            puVar23 = (undefined1 *)CONCAT44(uVar12,uVar3);
            FUN_00498350(local_88,uVar10,uVar1,uVar2,puVar23);
            (**(code **)(*plVar15 + 0xb0))(plVar15,local_88);
            (**(code **)(*plVar15 + 0x50))(plVar15,(char)param_1[2]);
            (**(code **)(*(longlong *)param_1[0x16] + 0x80))
                      ((longlong *)param_1[0x16],L"Marker",plVar15);
          }
          local_ac = local_ac + 1;
          iVar11 = iVar11 + -1;
          local_a8 = iVar13;
          local_a4 = iVar4;
        } while (iVar11 != 0);
      }
    }
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  }
  return;
}


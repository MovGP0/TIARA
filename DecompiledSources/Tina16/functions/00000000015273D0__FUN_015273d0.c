/* Ghidra address: 015273d0 */
/* Ghidra symbol: FUN_015273d0 */


byte FUN_015273d0(longlong param_1,double param_2)

{
  double dVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  ushort *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  short sVar16;
  uint uVar17;
  byte local_81;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49 [25];
  
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_81 = 0;
  DAT_0210ed50 = 0;
  sVar16 = *(short *)(param_1 + 0x10);
  if (sVar16 != 0) {
    plVar13 = (longlong *)(param_1 + 0x18);
    do {
      lVar11 = *plVar13;
      uVar6 = FUN_01d03160(*(undefined8 *)(lVar11 + 0x550));
      *(double *)PTR_DAT_02001328 = param_2;
      dVar1 = *(double *)PTR_DAT_02004660;
      uVar8 = (ulonglong)uVar6;
      if (uVar8 < 0x7d) {
        if (uVar8 == 0x23) {
LAB_0152753c:
          pcVar9 = (char *)FUN_01cfde70(*(undefined8 *)(lVar11 + 0x550),1,1,&local_4a,&local_4b,
                                        local_49);
          cVar4 = *pcVar9;
          if (cVar4 != *(char *)(lVar11 + 0x561)) {
            local_81 = 1;
            pbVar2 = (byte *)*plVar13;
            iVar15 = 1;
            for (uVar17 = (uint)*pbVar2; uVar17 != 0; uVar17 = uVar17 - 1) {
              pbVar2[(longlong)iVar15 + 0x587] =
                   *(byte *)(param_1 + 0x14ad8 +
                            (ulonglong)*(ushort *)(pbVar2 + (longlong)iVar15 * 2 + 0x41f6));
              iVar15 = iVar15 + 1;
            }
            if (uVar6 == 0x460) {
              FUN_01aa77b0(pbVar2);
            }
            *(char *)(lVar11 + 0x561) = cVar4;
          }
        }
        else {
          if (uVar8 == 0x34) goto LAB_015274e7;
          if (uVar8 == 0x3b) {
            uVar7 = FUN_01aa16f0(*(undefined8 *)(lVar11 + 0x550));
            DAT_0210ed50 = FUN_014faae0(lVar11,*(undefined1 *)(lVar11 + 0x561),uVar7);
            local_81 = local_81 | DAT_0210ed50;
          }
        }
      }
      else if (uVar8 - 0x7d < 2) {
LAB_015274e7:
        DAT_0210ed50 = FUN_014fa4b0(lVar11);
        local_81 = local_81 | DAT_0210ed50;
      }
      else if (uVar8 - 0x88 < 2) {
        puVar10 = (ushort *)
                  FUN_01cfde70(*(undefined8 *)(lVar11 + 0x550),1,1,&local_4a,&local_4b,local_49);
        uVar6 = *puVar10;
        if (uVar6 != *(byte *)(lVar11 + 0x561)) {
          local_81 = 1;
          FUN_014fb3e0(*plVar13,param_2 + dVar1);
          *(char *)(lVar11 + 0x561) = (char)uVar6;
        }
      }
      else {
        if (uVar8 == 0x460) goto LAB_0152753c;
        if (uVar8 == 0x5dd) {
          uVar12 = FUN_01d01370(*(undefined8 *)(lVar11 + 0x550));
          puVar10 = (ushort *)FUN_01cfde70(uVar12,1,1,&local_4a,&local_4b,local_49);
          uVar6 = *puVar10;
          if (uVar6 != *(byte *)(lVar11 + 0x561)) {
            local_81 = 1;
            FUN_01aa7660(*plVar13,param_2 + dVar1);
            *(char *)(lVar11 + 0x561) = (char)uVar6;
          }
        }
      }
      plVar13 = plVar13 + 1;
      sVar16 = sVar16 + -1;
    } while (sVar16 != 0);
  }
  iVar15 = -1;
  bVar3 = false;
  lVar11 = FUN_019a4600();
  do {
    iVar15 = iVar15 + 1;
    if (iVar15 < *(int *)(lVar11 + 0x10)) {
      FUN_00b94e60(lVar11,iVar15);
      uVar12 = FUN_00b94e60(lVar11,iVar15);
      cVar4 = FUN_0198a580(uVar12);
      if (cVar4 == '\x04') {
        uVar12 = FUN_00b94e60(lVar11,iVar15);
        sVar16 = FUN_01d03160(uVar12);
        plVar13 = (longlong *)FUN_00b94e60(lVar11,iVar15);
        (**(code **)(*plVar13 + 0x288))(plVar13,&local_58);
        if (sVar16 == 0x2900) {
          lVar14 = FUN_00b94e60(lVar11,iVar15);
          cVar4 = FUN_0173d820(*(undefined8 *)(lVar14 + 0x198));
          lVar14 = FUN_00b94e60(lVar11,iVar15);
          cVar5 = FUN_0173d860(*(undefined8 *)(lVar14 + 0x198));
          if (cVar4 != cVar5) {
            local_81 = 1;
          }
        }
      }
    }
    else {
      bVar3 = true;
    }
  } while (!bVar3);
  if (local_81 != 0) {
    FUN_01aacbb0(param_1,0,param_2,1);
  }
  FUN_00414560(&local_68,3);
  return local_81;
}


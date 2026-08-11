/* Ghidra address: 01cfe040 */
/* Ghidra symbol: FUN_01cfe040 */


void FUN_01cfe040(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  short sVar9;
  uint uVar10;
  longlong lVar11;
  double *pdVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  int local_a8;
  int local_a4;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 local_5a;
  char local_59;
  undefined1 local_58 [15];
  undefined1 local_49 [33];
  
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  FUN_01d03160(param_1);
  local_a8 = 1;
  for (iVar17 = (uint)*(ushort *)(param_1 + 0xf2) + (uint)*(ushort *)(param_1 + 0xf4); iVar17 != 0;
      iVar17 = iVar17 + -1) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x168) + (longlong)local_a8 * 99);
    cVar6 = FUN_01cffd90(param_1,*(undefined8 *)(pbVar1 + 0x5b));
    if ((*(ushort *)(param_1 + 0xf4) == 0) ||
       (local_a8 != (uint)*(ushort *)(param_1 + 0xf2) + (uint)*(ushort *)(param_1 + 0xf4))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    plVar4 = *(longlong **)(pbVar1 + 0x5b);
    sVar9 = FUN_01d03160(plVar4);
    if (sVar9 != 0x4b0) {
      uVar7 = FUN_01d38290(*(undefined8 *)(pbVar1 + 0x5b),1);
      *PTR_DAT_02002ce0 = uVar7;
    }
    sVar9 = FUN_01d03160(plVar4);
    uVar10 = FUN_01cfd2d0();
    uVar10 = uVar10 & 0xff;
    local_a4 = 0;
    if (-1 < (int)(uVar10 - 1)) {
      do {
        local_59 = (**(code **)(*plVar4 + 0x2d0))(plVar4,local_a4,local_58);
        if (local_59 == '\b') {
          sVar15 = 3;
          if (cVar6 == '\0') {
            sVar15 = 2;
          }
          cVar8 = FUN_01d3d440(sVar9);
          if (cVar8 != '\0') {
            sVar15 = sVar15 + -1;
          }
          if (local_a4 == sVar15 + -1) {
            puVar14 = (undefined1 *)FUN_01cfde70(plVar4,(int)sVar15,0,&local_59,&local_5a,local_49);
            *puVar14 = 0;
          }
          sVar15 = 4;
          if (cVar6 == '\0') {
            sVar15 = 3;
          }
          cVar8 = FUN_01d3d440(sVar9);
          if (cVar8 != '\0') {
            sVar15 = sVar15 + -1;
          }
          if (local_a4 == sVar15 + -1) {
            puVar14 = (undefined1 *)FUN_01cfde70(plVar4,(int)sVar15,0,&local_59,&local_5a,local_49);
            *puVar14 = 0;
          }
        }
        else if (local_59 == '\t') {
          lVar11 = FUN_01cfde70(plVar4,local_a4 + 1,0,&local_59,&local_5a,local_49);
          *(undefined2 *)(lVar11 + 0x1f) = 0xffff;
        }
        if (!bVar5) {
          uVar7 = FUN_01d3d4f0(*pbVar1);
          *(undefined1 *)(plVar4 + 0x2b) = uVar7;
          cVar8 = FUN_01d3d4f0(CONCAT62((int6)((ulonglong)plVar4 >> 0x10),(ushort)*pbVar1));
          if (cVar8 == '\0') {
            if (local_59 == '\x04') {
              cVar8 = FUN_01d3d400(sVar9);
              if (cVar8 != '\0') {
                puVar14 = (undefined1 *)
                          FUN_01cfde70(plVar4,local_a4 + 1,3,&local_59,&local_5a,local_49);
                *puVar14 = 1;
                *puVar14 = 1;
              }
              dVar18 = 0.0;
              dVar19 = 0.0;
              if ((sVar9 != 0x889) &&
                 (dVar18 = (double)*(ushort *)(pbVar1 + 0x47) * 1e-09, sVar9 != 0x45d)) {
                dVar19 = (double)*(ushort *)(pbVar1 + 0x49) * 1e-09;
              }
              iVar16 = local_a4 + 1;
              pdVar12 = (double *)FUN_01cfde70(plVar4,iVar16,1,&local_59,&local_5a,local_49);
              *pdVar12 = dVar18;
              if (sVar9 == 0x45d) {
                puVar13 = (undefined2 *)FUN_01cfde70(plVar4,iVar16,3,&local_59,&local_5a,local_49);
                *puVar13 = 1;
              }
              else {
                pdVar12 = (double *)FUN_01cfde70(plVar4,iVar16,2,&local_59,&local_5a,local_49);
                *pdVar12 = dVar19;
              }
              if (((sVar9 == 0x3ef) || (sVar9 == 0x44f)) || (sVar9 == 0x889)) {
                if ((sVar9 == 0x3ef) || (sVar9 == 0x44f)) {
                  dVar18 = (double)*(ushort *)(pbVar1 + 0x4f) * 1e-09;
                  dVar19 = (double)*(ushort *)(pbVar1 + 0x51) * 1e-09;
                }
                if (sVar9 == 0x889) {
                  dVar18 = (double)*(ushort *)(pbVar1 + 0x47) * 1e-09;
                  dVar19 = (double)*(ushort *)(pbVar1 + 0x49) * 1e-09;
                }
                iVar16 = local_a4 + 1;
                pdVar12 = (double *)FUN_01cfde70(plVar4,iVar16,3,&local_59,&local_5a,local_49);
                *pdVar12 = dVar18;
                pdVar12 = (double *)FUN_01cfde70(plVar4,iVar16,4,&local_59,&local_5a,local_49);
                *pdVar12 = dVar19;
                if (sVar9 == 0x889) {
                  uVar2 = *(ushort *)(pbVar1 + 0x4b);
                  uVar3 = *(ushort *)(pbVar1 + 0x4d);
                  pdVar12 = (double *)FUN_01cfde70(plVar4,iVar16,5,&local_59,&local_5a,local_49);
                  *pdVar12 = (double)uVar2 * 1e-09;
                  pdVar12 = (double *)FUN_01cfde70(plVar4,iVar16,6,&local_59,&local_5a,local_49);
                  *pdVar12 = (double)uVar3 * 1e-09;
                }
              }
            }
            else if (local_59 == '\b') {
              sVar15 = 5;
              if (cVar6 == '\0') {
                sVar15 = 4;
              }
              cVar8 = FUN_01d3d440(sVar9);
              if (cVar8 != '\0') {
                sVar15 = sVar15 + -1;
              }
              if (local_a4 == sVar15 + -1) {
                puVar14 = (undefined1 *)
                          FUN_01cfde70(plVar4,(int)sVar15,0,&local_59,&local_5a,local_49);
                *puVar14 = 1;
              }
            }
          }
          else {
            cVar8 = FUN_01d3d530(sVar9);
            if ((cVar8 != '\0') || (cVar8 = FUN_01d3d590(sVar9), cVar8 != '\0')) {
              (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x2d0))
                        (*(longlong **)(pbVar1 + 0x5b),4,&local_68);
              *local_68 = 0;
            }
          }
        }
        local_a4 = local_a4 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_a8 = local_a8 + 1;
  }
  FUN_00414560(&local_80,3);
  return;
}


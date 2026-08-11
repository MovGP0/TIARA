/* Ghidra address: 014fa200 */
/* Ghidra symbol: FUN_014fa200 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014fa200(longlong param_1,double param_2,byte param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  double dVar11;
  uint local_1a4;
  longlong local_1a0;
  int local_194;
  undefined1 local_188 [32];
  longlong local_168 [8];
  ulonglong local_128;
  undefined8 local_120;
  undefined8 local_118;
  
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))
            (*(longlong **)(param_1 + 0x550),&local_120);
  local_194 = -1;
  bVar2 = false;
  lVar6 = FUN_019a4600();
  do {
    local_194 = local_194 + 1;
    if (local_194 < *(int *)(lVar6 + 0x10)) {
      FUN_00b94e60(lVar6,local_194);
      uVar7 = FUN_00b94e60(lVar6,local_194);
      cVar3 = FUN_0198a580(uVar7);
      if (cVar3 == '\x04') {
        uVar7 = FUN_00b94e60(lVar6,local_194);
        sVar4 = FUN_01d03160(uVar7);
        uVar7 = FUN_00b94e60(lVar6,local_194);
        cVar3 = FUN_014f9c20(uVar7);
        if (cVar3 != '\0') {
          uVar7 = FUN_00b94e60(lVar6,local_194);
          FUN_01aa13f0(local_188,uVar7,1);
          FUN_004169a0(&local_128,local_188);
          iVar5 = FUN_00416db0(local_120,local_128);
          if (iVar5 == 0) {
            lVar1 = *(longlong *)PTR_DAT_020050e8;
            iVar5 = 1;
            for (uVar10 = (uint)*(ushort *)(lVar1 + 0x10); uVar10 != 0; uVar10 = uVar10 - 1) {
              local_1a0 = *(longlong *)(lVar1 + 0x10 + (longlong)iVar5 * 8);
              lVar8 = FUN_00b94e60(lVar6,local_194);
              if (*(longlong *)(local_1a0 + 0x550) == lVar8) break;
              iVar5 = iVar5 + 1;
            }
            if (sVar4 == 0xf0) {
LAB_014fa3a3:
              local_1a4 = (uint)param_3;
            }
            else if (sVar4 == 0xf1) {
              local_1a4 = FUN_014fadf0(param_3);
            }
            else if (sVar4 == 0xf2) goto LAB_014fa3a3;
            _DAT_0210ebf0 = param_1;
            FUN_01aa1440(*(undefined8 *)(param_1 + 0x550),1,local_168);
            dVar11 = (double)FUN_01aa17e0(local_168,param_3);
            if (param_4 == '\0') {
              if (sVar4 == 0xf2) {
                FUN_014fa850(local_1a0,local_1a4);
              }
              else {
                plVar9 = (longlong *)FUN_004095c0(0x10);
                *(uint *)(plVar9 + 1) = local_1a4;
                *plVar9 = local_1a0;
                FUN_01aa3d90(param_1,param_2 + dVar11,plVar9);
                if (*PTR_DAT_02002d10 != '\0') break;
              }
            }
          }
        }
      }
    }
    else {
      bVar2 = true;
    }
  } while (!bVar2);
  FUN_00414560(&local_128,3);
  return;
}


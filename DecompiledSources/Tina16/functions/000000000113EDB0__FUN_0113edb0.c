/* Ghidra address: 0113edb0 */
/* Ghidra symbol: FUN_0113edb0 */


void FUN_0113edb0(undefined8 param_1,byte param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint local_70;
  
  uVar8 = 1 << (param_2 & 0x1f);
  uVar11 = uVar8;
  bVar12 = param_2;
  for (uVar13 = (uint)param_2; uVar13 != 0; uVar13 = uVar13 - 1) {
    bVar12 = bVar12 - 1;
    uVar11 = uVar11 >> 1;
    local_70 = 0;
    uVar5 = uVar11;
    uVar7 = uVar11;
    if (0 < (int)uVar8) {
      do {
        for (; uVar6 = uVar7, uVar5 != 0; uVar5 = uVar5 - 1) {
          iVar9 = FUN_0113ed70(param_1,local_70 >> (bVar12 & 0x1f),param_2 - bVar12);
          dVar16 = ((double)(iVar9 << (bVar12 & 0x1f)) * 6.283185307179586) / (double)(int)uVar8;
          dVar14 = (double)FUN_0040bcd0(dVar16);
          dVar16 = (double)FUN_0040bdd0(dVar16);
          dVar15 = *(double *)(param_3 + (longlong)(int)uVar6 * 0x10) * dVar14 +
                   *(double *)(param_3 + 8 + (longlong)(int)uVar6 * 0x10) * dVar16;
          dVar14 = *(double *)(param_3 + 8 + (longlong)(int)uVar6 * 0x10) * dVar14 -
                   *(double *)(param_3 + (longlong)(int)uVar6 * 0x10) * dVar16;
          *(double *)(param_3 + (longlong)(int)uVar6 * 0x10) =
               *(double *)(param_3 + (longlong)(int)local_70 * 0x10) - dVar15;
          lVar10 = (longlong)(int)local_70;
          *(double *)(param_3 + 8 + (longlong)(int)uVar6 * 0x10) =
               *(double *)(param_3 + 8 + lVar10 * 0x10) - dVar14;
          *(double *)(param_3 + (longlong)(int)local_70 * 0x10) =
               *(double *)(param_3 + lVar10 * 0x10) + dVar15;
          *(double *)(param_3 + 8 + (longlong)(int)local_70 * 0x10) =
               *(double *)(param_3 + 8 + lVar10 * 0x10) + dVar14;
          uVar7 = uVar6 + 1;
          local_70 = local_70 + 1;
        }
        uVar5 = uVar11;
        uVar7 = uVar6 + uVar11;
        local_70 = uVar6;
      } while ((int)uVar6 < (int)uVar8);
    }
  }
  local_70 = 0;
  if (-1 < (int)(uVar8 - 1)) {
    do {
      iVar9 = FUN_0113ed70(param_1,local_70,param_2);
      if ((int)local_70 < iVar9) {
        puVar1 = (undefined8 *)(param_3 + (longlong)(int)local_70 * 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        puVar1 = (undefined8 *)(param_3 + (longlong)(int)local_70 * 0x10);
        puVar2 = (undefined8 *)(param_3 + (longlong)iVar9 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1 = (undefined8 *)(param_3 + (longlong)iVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
      }
      local_70 = local_70 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}


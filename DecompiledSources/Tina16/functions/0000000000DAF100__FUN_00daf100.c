/* Ghidra address: 00daf100 */
/* Ghidra symbol: FUN_00daf100 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00daf100(longlong param_1,double param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  int local_29c;
  double local_290 [7];
  double local_258;
  undefined1 local_250 [56];
  double local_218;
  double local_210 [60];
  
  local_29c = 0;
  pdVar1 = local_290;
  do {
    dVar15 = (double)FUN_01b08a30(param_1,local_29c);
    *pdVar1 = dVar15 + _DAT_01ed4188;
    local_29c = local_29c + 1;
    pdVar1 = pdVar1 + 1;
  } while (local_29c != 7);
  param_2 = param_2 + _DAT_01ed4188;
  if (*(char *)(param_1 + 0x886) == '\x01') {
    if (*(char *)(param_1 + 0xb) == '\x01') {
      FUN_01b08a10(param_1,0,1.0 / param_2);
      FUN_01b08a10(param_1,1,-1.0 / param_2);
    }
    else if (*(char *)(param_1 + 0xb) == '\x02') {
      FUN_01b08a10(param_1,0,(1.0 / param_2) / 0.5);
      FUN_01b08a10(param_1,1,0x3ff0000000000000);
    }
    param_2 = param_2 / (local_290[1] * 2.0);
    *(double *)(param_1 + 0x278) = param_2 + 1.0;
    *(double *)(param_1 + 0x280) = -param_2;
  }
  else if ((*(char *)(param_1 + 0x886) == '\x02') && ((byte)(*(char *)(param_1 + 0xb) - 1U) < 6)) {
    FUN_01b0f5c0(param_1);
    FUN_0040d200(&local_258,0x200,0);
    FUN_01b08a10(param_1,1,-1.0 / param_2);
    dVar15 = 0.0;
    iVar5 = *(byte *)(param_1 + 0xb) + 1;
    pdVar1 = &local_258;
    do {
      *pdVar1 = 1.0;
      pdVar1 = pdVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar6 = (uint)*(byte *)(param_1 + 0xb);
    if (uVar6 != 0) {
      pdVar1 = &local_218;
      do {
        *pdVar1 = 0.0;
        pdVar1 = pdVar1 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = (uint)*(byte *)(param_1 + 0xb);
    local_29c = 1;
    if (uVar6 != 0) {
      pdVar1 = local_210;
      do {
        dVar15 = dVar15 + local_290[local_29c + -1];
        dVar16 = 1.0;
        pdVar4 = pdVar1;
        for (uVar12 = (uint)*(byte *)(param_1 + 0xb); uVar12 != 0; uVar12 = uVar12 - 1) {
          dVar16 = (dVar16 * dVar15) / param_2;
          *pdVar4 = dVar16;
          pdVar4 = pdVar4 + 8;
        }
        local_29c = local_29c + 1;
        pdVar1 = pdVar1 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = (uint)*(byte *)(param_1 + 0xb);
    local_29c = 1;
    if (uVar6 != 0) {
      puVar7 = local_250;
      pdVar1 = local_210;
      pdVar4 = &local_218;
      do {
        iVar5 = local_29c + 1;
        if (iVar5 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
          iVar11 = ((uint)*(byte *)(param_1 + 0xb) - iVar5) + 1;
          pdVar9 = (double *)(puVar7 + (longlong)iVar5 * 0x40);
          puVar13 = local_250 + (longlong)iVar5 * 0x40 + -8;
          do {
            *pdVar9 = *pdVar9 / *pdVar1;
            iVar5 = local_29c + 1;
            if (iVar5 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
              iVar10 = ((uint)*(byte *)(param_1 + 0xb) - iVar5) + 1;
              pdVar8 = (double *)(puVar13 + (longlong)iVar5 * 8);
              pdVar2 = pdVar4 + iVar5;
              do {
                *pdVar8 = *pdVar8 - *pdVar9 * *pdVar2;
                pdVar2 = pdVar2 + 1;
                pdVar8 = pdVar8 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            puVar13 = puVar13 + 0x40;
            pdVar9 = pdVar9 + 8;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        local_29c = local_29c + 1;
        pdVar4 = pdVar4 + 8;
        pdVar1 = pdVar1 + 9;
        puVar7 = puVar7 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = (uint)*(byte *)(param_1 + 0xb);
    local_29c = 1;
    if (uVar6 != 0) {
      puVar7 = local_250;
      do {
        iVar5 = local_29c + 1;
        if (iVar5 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
          iVar11 = ((uint)*(byte *)(param_1 + 0xb) - iVar5) + 1;
          pdVar1 = (double *)(puVar7 + (longlong)iVar5 * 0x40);
          do {
            dVar15 = (double)FUN_01b08a00(param_1,iVar5);
            dVar16 = (double)FUN_01b08a00(param_1,local_29c);
            FUN_01b08a10(param_1,iVar5,dVar15 - *pdVar1 * dVar16);
            iVar5 = iVar5 + 1;
            pdVar1 = pdVar1 + 8;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        local_29c = local_29c + 1;
        puVar7 = puVar7 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    dVar15 = (double)FUN_01b08a00(param_1,*(undefined1 *)(param_1 + 0xb));
    FUN_01b08a10(param_1,*(undefined1 *)(param_1 + 0xb),
                 dVar15 / *(double *)
                           (local_250 +
                           (ulonglong)*(byte *)(param_1 + 0xb) * 8 +
                           (ulonglong)*(byte *)(param_1 + 0xb) * 0x40 + -8));
    local_29c = *(byte *)(param_1 + 0xb) - 1;
    if (-1 < local_29c) {
      puVar7 = local_250 + (longlong)local_29c * 0x40 + -8;
      pdVar1 = (double *)(local_250 + (longlong)local_29c * 0x48 + -8);
      do {
        iVar5 = local_29c + 1;
        if (iVar5 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
          iVar11 = ((uint)*(byte *)(param_1 + 0xb) - iVar5) + 1;
          pdVar4 = (double *)(puVar7 + (longlong)iVar5 * 8);
          do {
            dVar15 = (double)FUN_01b08a00(param_1,local_29c);
            dVar16 = (double)FUN_01b08a00(param_1,iVar5);
            FUN_01b08a10(param_1,local_29c,dVar15 - *pdVar4 * dVar16);
            iVar5 = iVar5 + 1;
            pdVar4 = pdVar4 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        dVar15 = (double)FUN_01b08a00(param_1,local_29c);
        FUN_01b08a10(param_1,local_29c,dVar15 / *pdVar1);
        local_29c = local_29c + -1;
        pdVar1 = pdVar1 + -9;
        puVar7 = puVar7 + -0x40;
      } while (local_29c != -1);
    }
    FUN_0040d200(param_1 + 0x278,0x38,0);
    FUN_0040d200(&local_258,0x200,0);
    *(undefined8 *)(param_1 + 0x278) = 0x3ff0000000000000;
    iVar5 = *(byte *)(param_1 + 0xb) + 1;
    pdVar1 = &local_258;
    do {
      *pdVar1 = 1.0;
      pdVar1 = pdVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    dVar15 = 0.0;
    iVar5 = *(byte *)(param_1 + 0xb) + 1;
    pdVar1 = local_290;
    pdVar4 = &local_218;
    do {
      dVar15 = dVar15 + *pdVar1;
      dVar16 = 1.0;
      pdVar9 = pdVar4;
      for (uVar6 = (uint)*(byte *)(param_1 + 0xb); uVar6 != 0; uVar6 = uVar6 - 1) {
        dVar16 = (dVar16 * dVar15) / param_2;
        *pdVar9 = dVar16;
        pdVar9 = pdVar9 + 8;
      }
      pdVar4 = pdVar4 + 1;
      pdVar1 = pdVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_29c = 0;
    iVar5 = *(byte *)(param_1 + 0xb) + 1;
    pdVar1 = &local_258;
    pdVar4 = &local_258;
    pdVar9 = &local_258;
    do {
      iVar11 = local_29c + 1;
      if (iVar11 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
        iVar10 = ((uint)*(byte *)(param_1 + 0xb) - iVar11) + 1;
        pdVar8 = pdVar1 + (longlong)iVar11 * 8;
        puVar7 = local_250 + (longlong)iVar11 * 0x40 + -8;
        do {
          *pdVar8 = *pdVar8 / *pdVar4;
          iVar11 = local_29c + 1;
          if (iVar11 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
            iVar14 = ((uint)*(byte *)(param_1 + 0xb) - iVar11) + 1;
            pdVar2 = (double *)(puVar7 + (longlong)iVar11 * 8);
            pdVar3 = pdVar9 + iVar11;
            do {
              *pdVar2 = *pdVar2 - *pdVar8 * *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar2 = pdVar2 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          puVar7 = puVar7 + 0x40;
          pdVar8 = pdVar8 + 8;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_29c = local_29c + 1;
      pdVar9 = pdVar9 + 8;
      pdVar4 = pdVar4 + 9;
      pdVar1 = pdVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_29c = 0;
    iVar5 = *(byte *)(param_1 + 0xb) + 1;
    pdVar1 = &local_258;
    do {
      iVar11 = local_29c + 1;
      if (iVar11 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
        iVar10 = ((uint)*(byte *)(param_1 + 0xb) - iVar11) + 1;
        pdVar4 = pdVar1 + (longlong)iVar11 * 8;
        do {
          *(double *)(param_1 + 0x278 + (longlong)iVar11 * 8) =
               *(double *)(param_1 + 0x278 + (longlong)iVar11 * 8) -
               *pdVar4 * *(double *)(param_1 + 0x278 + (longlong)local_29c * 8);
          iVar11 = iVar11 + 1;
          pdVar4 = pdVar4 + 8;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_29c = local_29c + 1;
      pdVar1 = pdVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(double *)(param_1 + 0x278 + (ulonglong)*(byte *)(param_1 + 0xb) * 8) =
         *(double *)(param_1 + 0x278 + (ulonglong)*(byte *)(param_1 + 0xb) * 8) /
         *(double *)
          (local_250 +
          (ulonglong)*(byte *)(param_1 + 0xb) * 8 + (ulonglong)*(byte *)(param_1 + 0xb) * 0x40 + -8)
    ;
    local_29c = *(byte *)(param_1 + 0xb) - 1;
    if (-1 < local_29c) {
      puVar7 = local_250 + (longlong)local_29c * 0x40 + -8;
      pdVar1 = (double *)(local_250 + (longlong)local_29c * 0x48 + -8);
      do {
        iVar5 = local_29c + 1;
        if (iVar5 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
          iVar11 = ((uint)*(byte *)(param_1 + 0xb) - iVar5) + 1;
          pdVar4 = (double *)(puVar7 + (longlong)iVar5 * 8);
          do {
            *(double *)(param_1 + 0x278 + (longlong)local_29c * 8) =
                 *(double *)(param_1 + 0x278 + (longlong)local_29c * 8) -
                 *pdVar4 * *(double *)(param_1 + 0x278 + (longlong)iVar5 * 8);
            iVar5 = iVar5 + 1;
            pdVar4 = pdVar4 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        *(double *)(param_1 + 0x278 + (longlong)local_29c * 8) =
             *(double *)(param_1 + 0x278 + (longlong)local_29c * 8) / *pdVar1;
        local_29c = local_29c + -1;
        pdVar1 = pdVar1 + -9;
        puVar7 = puVar7 + -0x40;
      } while (local_29c != -1);
    }
  }
  return;
}


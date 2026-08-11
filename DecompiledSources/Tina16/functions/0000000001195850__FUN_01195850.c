/* Ghidra address: 01195850 */
/* Ghidra symbol: FUN_01195850 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01195850(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar7 = 8;
  ppuVar5 = &PTR_DAT_01f298a8;
  puVar4 = (undefined8 *)PTR_DAT_020013a0;
  do {
    FUN_00414ad0(ppuVar5,*puVar4);
    ppuVar5 = ppuVar5 + 1;
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0x100;
  puVar2 = &DAT_02041c90;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768);
  local_50 = 0;
  if (-1 < iVar7 + -1) {
    do {
      (&DAT_02041c90)[*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x7cc + (longlong)local_50 * 4)] = 1;
      local_50 = local_50 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00526500(0x4000000000000000,(double)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  iVar7 = FUN_0040c770();
  FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0xffffff);
  local_48 = *(int *)PTR_DAT_02003348;
  local_44 = (DAT_0204209c + 0xf) * 2;
  local_40 = local_48 + iVar7 * 0x14 + 0x2d;
  local_3c = ((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) + 1) * 0x14 + 10) * 2 + local_44;
  FUN_005fdf50(param_2,&local_48);
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x808080);
  *(undefined4 *)PTR_DAT_020012c0 = 0xfffffff1;
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0);
  FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 0x14,DAT_0204209c + 0xf);
  FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 0x14,
               DAT_0204209c + (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) + 1) * 0x14 + 0x14);
  local_50 = 0;
  if (-1 < *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764)) {
    iVar9 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) + 1;
    do {
      FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x808080);
      iVar3 = local_50 * 0x14;
      FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 0xf,DAT_0204209c + iVar3 + 0x23
                  );
      iVar1 = iVar7 * 0x14;
      FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + iVar1 + 0x1e,
                   DAT_0204209c + iVar3 + 0x23);
      FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + iVar1 + 0x1e,
                   DAT_0204209c + iVar3 + 0x23);
      FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + iVar1 + 0x19,
                   DAT_0204209c + iVar3 + 0x1f);
      FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + iVar1 + 0x1e,
                   DAT_0204209c + iVar3 + 0x23);
      FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + iVar1 + 0x19,
                   DAT_0204209c + iVar3 + 0x27);
      FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 0x14,
                   DAT_0204209c + iVar3 + 0x14);
      FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 0x10,
                   DAT_0204209c + iVar3 + 0x19);
      FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 0x14,
                   DAT_0204209c + iVar3 + 0x14);
      FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 0x18,
                   DAT_0204209c + iVar3 + 0x19);
      FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xff);
      FUN_01196220(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + iVar1 + 0x20,
                   DAT_0204209c + iVar3 + *(int *)PTR_DAT_020012c0 + 0x2a,&DAT_01196194);
      local_50 = local_50 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_50 = 0;
  if (-1 < *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764)) {
    iVar9 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) + 1;
    ppuVar5 = &PTR_DAT_01f298a0;
    do {
      FUN_01196220(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + 5,
                   DAT_0204209c + (5 - *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764)) * -0x14 +
                   local_50 * -0x14 + *(int *)PTR_DAT_020012c0 + 0x85,*ppuVar5);
      local_50 = local_50 + 1;
      ppuVar5 = ppuVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x808080);
  local_50 = 0;
  if (-1 < iVar7 + -1) {
    do {
      FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + local_50 * 0x14 + 0x28,
                   DAT_0204209c + 0x19);
      FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + local_50 * 0x14 + 0x28,
                   DAT_0204209c + (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) + 1) * 0x14 + 0xf
                  );
      local_50 = local_50 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00526500(0x4000000000000000,(double)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  iVar7 = FUN_0040c770();
  local_50 = 0;
  if (-1 < iVar7 + -1) {
    piVar6 = &DAT_02041c90;
    do {
      FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x8000);
      DAT_01f298e8 = 0;
      DAT_01f298ec = 0;
      _DAT_01f298f0 = 0;
      _DAT_01f298f4 = 0;
      _DAT_01f298f8 = 0;
      iVar9 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
      local_4c = 0;
      if (-1 < iVar9 + -1) {
        puVar2 = &DAT_01f298e8;
        iVar3 = local_50;
        do {
          FUN_00526500(0x4000000000000000,
                       (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_4c) + -1));
          iVar1 = FUN_0040c770();
          if (iVar3 / iVar1 < 1) {
            *puVar2 = 0;
          }
          else {
            iVar3 = iVar3 - iVar1;
            *puVar2 = 1;
          }
          local_4c = local_4c + 1;
          puVar2 = puVar2 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar9 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
      local_4c = 0;
      if (-1 < iVar9 + -1) {
        piVar8 = &DAT_01f298e8;
        do {
          if (*piVar8 == 0) {
            FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + local_50 * 0x14 + 0x14,
                         DAT_0204209c + local_4c * 0x14 + 0x23);
            FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + (local_50 + 1) * 0x14 +
                         0x14,DAT_0204209c + local_4c * 0x14 + 0x23);
          }
          else {
            FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + local_50 * 0x14 + 0x14,
                         DAT_0204209c + local_4c * 0x14 + 0x19);
            FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + (local_50 + 1) * 0x14 +
                         0x14,DAT_0204209c + local_4c * 0x14 + 0x19);
          }
          local_4c = local_4c + 1;
          piVar8 = piVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xff);
      if (*piVar6 == 0) {
        FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + local_50 * 0x14 + 0x14,
                     DAT_0204209c + *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * 0x14 + 0x23);
        FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + (local_50 + 1) * 0x14 + 0x14,
                     DAT_0204209c + *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * 0x14 + 0x23);
      }
      else {
        FUN_011961a0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + local_50 * 0x14 + 0x14,
                     DAT_0204209c + *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * 0x14 + 0x19);
        FUN_011961e0(*(int *)(*(longlong *)PTR_DAT_02001d60 + 0x718) + (local_50 + 1) * 0x14 + 0x14,
                     DAT_0204209c + *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * 0x14 + 0x19);
      }
      local_50 = local_50 + 1;
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}


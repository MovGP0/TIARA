/* Ghidra address: 00ab76e0 */
/* Ghidra symbol: FUN_00ab76e0 */


void FUN_00ab76e0(longlong param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_4c [4];
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  int local_2c;
  
  local_64 = 0;
  local_5c = 0;
  local_2c = 0;
  psVar13 = *(short **)(param_1 + 0x98);
  if ((param_2 == 1) && (*psVar13 == 8)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
    iVar14 = param_2;
    if (param_2 - 1U < 0x80000000) {
      do {
        sVar2 = *psVar13;
        if ((((sVar2 != 2) && (sVar2 != 4)) && (sVar2 != 8)) &&
           ((psVar13 != *(short **)(param_1 + 0x90) || (**(short **)(param_1 + 0x90) != 0x20)))) {
          bVar15 = false;
          break;
        }
        psVar13 = psVar13 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  cVar5 = '\0';
  if (!bVar15) {
    do {
      iVar6 = FUN_00a949e0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x118),
                           (int)((*(longlong *)(param_1 + 0x98) -
                                 *(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) / 2)
                           + local_5c,
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x6c),&local_38);
      local_60 = FUN_00a94860(local_38,&local_2c);
      iVar14 = local_60;
      if (local_60 < local_64) {
        iVar14 = local_64;
      }
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x24);
      if (iVar8 <= local_2c) {
        iVar8 = local_2c;
      }
      *(int *)(*(longlong *)(param_1 + 0x88) + 0x24) = iVar8;
      local_5c = local_5c + iVar6;
      local_64 = iVar14;
    } while (local_5c < param_2);
    cVar5 = *(char *)(local_38 + 0x5c);
  }
  uVar11 = 0;
  iVar14 = 0;
  if (!bVar15) {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xb4);
    uVar11 = 0;
    iVar14 = 0;
    if (local_64 < iVar6) {
      if (cVar5 == '\x01') {
        iVar14 = iVar6 - local_64;
      }
      else if (cVar5 == '\x02') {
        uVar4 = (longlong)(iVar6 - local_64) / 2;
        uVar11 = uVar4 & 0xffffffff;
        iVar14 = (iVar6 - local_64) - (int)uVar4;
      }
      else {
        uVar11 = (ulonglong)(uint)(iVar6 - local_64);
      }
    }
    else if (-1 < iVar6) {
      uVar4 = (longlong)(iVar6 - local_64) / 2;
      uVar11 = uVar4 & 0xffffffff;
      iVar14 = (iVar6 - local_64) - (int)uVar4;
    }
  }
  local_5c = 0;
  do {
    iVar6 = FUN_00ac50d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xf8)
                         ,(int)((*(longlong *)(param_1 + 0x98) -
                                *(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) / 2)
                          + local_5c,&local_40);
    local_5c = local_5c + iVar6;
    if ((local_5c < param_2) && (iVar6 = FUN_00ac4ef0(local_40), *(char *)(local_40 + 0x60) == '\0')
       ) {
      *(undefined4 *)(local_40 + 0xc0) = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x78);
      cVar5 = FUN_004113d0(local_40,&PTR_FUN_00a83768);
      if ((cVar5 != '\0') && (*(longlong *)(local_40 + 0x1c8) != 0)) {
        *(undefined4 *)(*(longlong *)(local_40 + 0x1c8) + 0xc0) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x78);
      }
      if (*(byte *)(local_40 + 0x4c) < 8) {
        bVar15 = ((int)CONCAT71((int7)((ulonglong)local_40 >> 8),1) <<
                  (*(byte *)(local_40 + 0x4c) & 0x1f) & 0xcU) != 0;
      }
      else {
        bVar15 = false;
      }
      if (!bVar15) {
        cVar5 = *(char *)(local_40 + 0xa8);
        if (cVar5 == '\x01') {
          if (iVar14 <= iVar6 - local_64) {
            iVar14 = iVar6 - local_64;
          }
        }
        else if (cVar5 == '\x02') {
          if (local_64 == 0) {
            uVar12 = FUN_00a94a50(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x118),
                                  (*(longlong *)(param_1 + 0x98) -
                                  *(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) / 2
                                 );
            local_64 = FUN_00a94860(uVar12,&local_2c);
            *(int *)(*(longlong *)(param_1 + 0x88) + 0x24) = local_2c;
          }
          local_60 = (iVar6 - local_64) / 2;
          if (iVar14 <= local_60) {
            iVar14 = local_60;
          }
          if ((int)uVar11 <= (iVar6 - local_64) - local_60) {
            uVar11 = (ulonglong)(uint)((iVar6 - local_64) - local_60);
          }
        }
        else if (((byte)(cVar5 - 3U) < 2) &&
                (uVar7 = iVar6 - (local_64 - *(int *)(*(longlong *)(param_1 + 0x88) + 0x24)),
                (int)uVar11 <= (int)uVar7)) {
          uVar11 = (ulonglong)uVar7;
        }
      }
    }
    local_5c = local_5c + 1;
  } while (local_5c < param_2);
  local_5c = 0;
  do {
    iVar6 = FUN_00ac50d0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x100),
                         (int)((*(longlong *)(param_1 + 0x98) -
                               *(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) / 2) +
                         local_5c,&local_48);
    local_5c = local_5c + iVar6;
    if ((local_5c < param_2) && (iVar6 = FUN_00ac4ef0(local_48), (char)local_48[0xc] == '\0')) {
      cVar5 = (char)local_48[0x15];
      if (cVar5 == '\x01') {
        if (iVar14 <= iVar6 - local_64) {
          iVar14 = iVar6 - local_64;
        }
      }
      else {
        iVar8 = (int)uVar11;
        if (cVar5 == '\x02') {
          iVar6 = (**(code **)(*local_48 + 0xc0))(local_48);
          local_60 = (iVar6 - local_64) / 2;
          iVar9 = local_60 + (int)local_48[0x17];
          if (iVar14 <= iVar9) {
            iVar14 = iVar9;
          }
          iVar6 = (**(code **)(*local_48 + 0xc0))
                            (local_48,(longlong)(iVar6 - local_64) % 2 & 0xffffffff);
          uVar7 = ((iVar6 - local_64) - local_60) + *(int *)((longlong)local_48 + 0xb4);
          if (iVar8 <= (int)uVar7) {
            uVar11 = (ulonglong)uVar7;
          }
        }
        else if (cVar5 == '\x03') {
          uVar7 = iVar6 - (local_64 - *(int *)(*(longlong *)(param_1 + 0x88) + 0x24));
          if (iVar8 <= (int)uVar7) {
            uVar11 = (ulonglong)uVar7;
          }
        }
        else if ((cVar5 == '\x04') && (iVar8 <= iVar6 - local_64)) {
          uVar11 = (ulonglong)(uint)(iVar6 - local_64);
        }
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x60);
      cVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
      if (cVar5 == '\0') {
        *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x78);
      }
    }
    local_5c = local_5c + 1;
  } while (local_5c < param_2);
  local_5c = 0;
  do {
    iVar6 = FUN_00a949e0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x118),
                         (int)((*(longlong *)(param_1 + 0x98) -
                               *(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) / 2) +
                         local_5c,*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x6c),
                         &local_38);
    local_5c = local_5c + iVar6;
    FUN_00a93f70(local_38,*(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x78));
  } while (local_5c < param_2);
  *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8) = *(undefined8 *)(param_1 + 0x98);
  *(int *)(*(longlong *)(param_1 + 0x88) + 0x18) = local_64;
  *(int *)(*(longlong *)(param_1 + 0x88) + 0x20) = param_2;
  if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xe0) + -1 +
                (*(longlong *)(param_1 + 0x98) -
                *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) / 2 +
               (longlong)param_2) == '\x02') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x50) = 1;
  }
  iVar6 = FUN_00a73fa0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xa8),
                       *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x78));
  local_60 = FUN_00a73eb0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xa8),
                          *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x78));
  if (*(longlong *)(param_1 + 0x98) ==
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) {
    local_60 = local_60 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 300);
  }
  local_78 = 1;
  iVar8 = FUN_00ab6950(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x60),
                       *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x68),
                       *(undefined8 *)(param_1 + 0x98),param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x50) != '\0') {
    uVar12 = FUN_00a94980(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x118),
                          (int)((*(longlong *)(param_1 + 0x98) -
                                *(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xd8)) / 2)
                          + param_2 + -1,local_4c);
    FUN_00a4df80(uVar12,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x68));
    iVar9 = FUN_005fdff0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x68),&LAB_00ab8314);
    iVar8 = iVar8 + iVar9;
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x124);
  if (iVar9 <= iVar8) {
    iVar9 = iVar8;
  }
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x124) = iVar9;
  cVar5 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x120);
  if (cVar5 == '\x01') {
    *(int *)(*(longlong *)(param_1 + 0x88) + 0x28) =
         local_60 - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x70);
  }
  else if (cVar5 == '\x02') {
    *(int *)(*(longlong *)(param_1 + 0x88) + 0x28) =
         ((iVar6 + local_60) - iVar8) / 2 - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x70);
  }
  else if (cVar5 == '\x03') {
    *(int *)(*(longlong *)(param_1 + 0x88) + 0x28) =
         (iVar6 - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x70)) - iVar8;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x88) + 0x28) =
         local_60 - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x70);
    if (*(char *)(param_1 + 0x87) == '\0') {
      *(int *)(*(longlong *)(param_1 + 0x88) + 0x3c) = (iVar6 - local_60) - iVar8;
      uVar10 = FUN_00ab7670(auStack_98);
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x38) = uVar10;
    }
  }
  *(int *)(*(longlong *)(param_1 + 0x88) + 0x30) = iVar6 - local_60;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  *piVar1 = *piVar1 + (int)uVar11;
  *(int *)(*(longlong *)(param_1 + 0x88) + 0x14) = iVar14;
  FUN_004ae7e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0xf0),
               *(undefined8 *)(param_1 + 0x88));
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)param_2 * 2;
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x88) =
       *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x60) + 0x88) + local_64 + iVar14 +
       *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  iVar6 = local_64 + iVar14 + (int)uVar11;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x78);
  *piVar1 = *piVar1 + iVar6;
  iVar14 = *(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x80) < iVar6) {
    iVar14 = iVar6;
  }
  *(int *)(*(longlong *)(param_1 + 0x88) + 0x1c) = iVar14;
  return;
}


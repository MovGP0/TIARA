/* Ghidra address: 016603b0 */
/* Ghidra symbol: FUN_016603b0 */


void FUN_016603b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  int local_37c;
  int local_78 [8];
  longlong local_58 [3];
  longlong local_40;
  int local_34;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_40 = 0;
  local_58[0] = 0;
  FUN_00419260(local_30,&DAT_0165e2c0,1,(longlong)*(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0));
  local_34 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0);
  local_37c = 0;
  if (-1 < iVar6 + -1) {
    do {
      piVar8 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                      (longlong)local_37c * 0x70);
      if ((*piVar8 != -1) && (*(longlong *)(piVar8 + 8) != 0)) {
        FUN_0165fa20(auStack_3b8,local_37c);
      }
      local_37c = local_37c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00419260(local_58,&DAT_0165e308,1,(longlong)local_34);
  FUN_00419260(&local_40,&DAT_0165e2c0,1,(longlong)local_34);
  local_37c = 0;
  iVar6 = local_34;
  if (-1 < local_34 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
              (longlong)*(int *)(local_30[0] + (longlong)local_37c * 4) * 0x70;
      *(int *)(lVar1 + 0x44) = local_37c;
      *(int *)(lVar1 + 0x48) = local_37c;
      if (~*(ulonglong *)(lVar1 + 8) < 10000000) {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x48 +
                ~*(ulonglong *)(lVar1 + 8) * 0x70) = local_37c;
      }
      if (~*(ulonglong *)(lVar1 + 0x10) < 10000000) {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x48 +
                ~*(ulonglong *)(lVar1 + 0x10) * 0x70) = local_37c;
      }
      local_37c = local_37c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_37c = 0;
  iVar6 = local_34;
  if (-1 < local_34 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
              (longlong)*(int *)(local_30[0] + (longlong)local_37c * 4) * 0x70;
      *(int *)(lVar1 + 0x4c) =
           ((*(int *)(lVar1 + 0x48) - *(int *)(lVar1 + 0x44)) * 100) / (*(int *)(lVar1 + 0x38) + 3);
      *(undefined4 *)(lVar1 + 0x28) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
      local_37c = local_37c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00409a70(local_30[0],local_40,(longlong)(local_34 * 4));
  if (1 < local_34) {
    FUN_0165fbc0(auStack_3b8,0,local_34 + -1);
  }
  local_37c = 0;
  iVar6 = local_34;
  if (-1 < local_34 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
              (longlong)*(int *)(local_40 + (longlong)local_37c * 4) * 0x70;
      iVar2 = *(int *)(lVar1 + 0x44);
      if (iVar2 < *(int *)(lVar1 + 0x48)) {
        if (1000 < *(int *)(lVar1 + 0x4c)) break;
        uVar4 = 1;
        iVar10 = *(int *)(lVar1 + 0x48) + -1;
        if (iVar2 <= iVar10) {
          iVar10 = (iVar10 - iVar2) + 1;
          do {
            bVar3 = (byte)uVar4 | *(byte *)(local_58[0] + iVar2);
            uVar4 = (uint)bVar3;
            if (bVar3 == 0xff) break;
            iVar2 = iVar2 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if ((char)uVar4 != -1) {
          iVar2 = 0;
          for (; ((byte)uVar4 & 1) == 1; uVar4 = uVar4 >> 1) {
            iVar2 = iVar2 + 1;
          }
          iVar10 = *(int *)(lVar1 + 0x44);
          iVar11 = *(int *)(lVar1 + 0x48) + -1;
          if (iVar10 <= iVar11) {
            iVar11 = (iVar11 - iVar10) + 1;
            do {
              *(byte *)(local_58[0] + iVar10) =
                   *(byte *)(local_58[0] + iVar10) | (byte)(1 << ((byte)iVar2 & 0x1f));
              iVar10 = iVar10 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          *(int *)(lVar1 + 0x30) = iVar2;
          lVar5 = (longlong)(int)~*(uint *)(local_40 + (longlong)local_37c * 4);
          iVar10 = *(int *)(lVar1 + 0x44) + 1;
          if (iVar10 <= *(int *)(lVar1 + 0x48)) {
            iVar11 = (*(int *)(lVar1 + 0x48) - iVar10) + 1;
            do {
              lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                      (longlong)*(int *)(local_30[0] + (longlong)iVar10 * 4) * 0x70;
              if (*(longlong *)(lVar1 + 8) == lVar5) {
                *(int *)(lVar1 + 0x28) = iVar2;
                *(bool *)(lVar1 + 0x69) =
                     iVar10 != *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x48
                                       + (longlong)*(int *)(local_40 + (longlong)local_37c * 4) *
                                         0x70);
              }
              if (*(longlong *)(lVar1 + 0x10) == lVar5) {
                *(int *)(lVar1 + 0x2c) = iVar2;
                *(bool *)(lVar1 + 0x6a) =
                     iVar10 != *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x48
                                       + (longlong)*(int *)(local_40 + (longlong)local_37c * 4) *
                                         0x70);
              }
              iVar10 = iVar10 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
      local_37c = local_37c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  local_37c = 0;
  piVar8 = local_78;
  do {
    *piVar8 = local_37c;
    local_37c = local_37c + 1;
    piVar8 = piVar8 + 1;
  } while (local_37c != 8);
  local_37c = 0;
  iVar2 = local_34;
  if (-1 < local_34 + -1) {
    do {
      piVar8 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                      (longlong)*(int *)(local_30[0] + (longlong)local_37c * 4) * 0x70);
      if (*piVar8 != -1) {
        iVar10 = piVar8[10];
        if (iVar10 == -1) {
          piVar8[10] = local_78[0];
        }
        else {
          if (*(char *)((longlong)piVar8 + 0x69) == '\0') {
            iVar11 = local_78[iVar10];
            local_78[iVar10] = local_78[0];
            local_78[0] = iVar11;
          }
          else {
            piVar8[0xd] = local_78[iVar10];
          }
          piVar8[10] = local_78[0];
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (piVar8[0xb] != -1) {
          piVar8[0xb] = local_78[piVar8[0xb]];
          piVar8[4] = 0;
          piVar8[5] = 0;
        }
        iVar10 = piVar8[0xc];
        if (iVar10 == -1) {
          if (*(longlong *)(piVar8 + 8) == 0) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          iVar11 = local_78[iVar10];
          local_78[iVar10] = local_78[0];
          local_78[0] = iVar11;
          piVar8[0xc] = local_78[iVar10];
          piVar8[6] = 0;
          piVar8[7] = 0;
        }
      }
      local_37c = local_37c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00419260(*(longlong *)(param_1 + 0x5d0) + 0x13ad0,&DAT_0165baa8,1,
               (longlong)(iVar6 * 8 + DAT_0210f878));
  local_58[2] = (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ad0) + (longlong)DAT_0210f878) -
                *(ulonglong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ad0) %
                (ulonglong)(longlong)DAT_0210f878;
  local_58[1] = 0;
  local_37c = 0;
  pcVar9 = &DAT_01f7d77d;
  pcVar7 = &DAT_01f7d770;
  do {
    if (*pcVar9 == 'I') {
      FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0x41);
    }
    FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),*pcVar7 + 'P');
    FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),*pcVar9);
    FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),*pcVar7 + -0x48);
    FUN_0165e150(*(undefined8 *)(param_1 + 0x5d0),local_58[2] + 0x80 + (longlong)(local_37c << 8));
    local_37c = local_37c + 1;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  } while (local_37c != 0xd);
  iVar2 = 0;
  local_37c = 0;
  iVar6 = local_34;
  if (-1 < local_34 + -1) {
    do {
      piVar8 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                      (longlong)*(int *)(local_30[0] + (longlong)local_37c * 4) * 0x70);
      if (*piVar8 != -1) {
        if (~*(ulonglong *)(piVar8 + 2) < 10000000) {
          *(undefined8 *)(piVar8 + 2) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x18 +
                ~*(ulonglong *)(piVar8 + 2) * 0x70);
        }
        if (~*(ulonglong *)(piVar8 + 4) < 10000000) {
          *(undefined8 *)(piVar8 + 4) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x18 +
                ~*(ulonglong *)(piVar8 + 4) * 0x70);
        }
        if ((piVar8[0xc] == -1) && (*(longlong *)(piVar8 + 8) == 0)) {
          *(longlong *)(piVar8 + 6) = local_58[2] + iVar2 * 8;
          iVar2 = iVar2 + 1;
        }
        if (*(longlong *)(piVar8 + 8) != 0) {
          *(longlong *)(piVar8 + 6) = *(longlong *)(piVar8 + 8);
        }
        if (*(longlong *)(piVar8 + 2) == 0) {
          if (*(char *)((longlong)piVar8 + 0x69) != '\0') {
            FUN_016601f0(auStack_3b8,piVar8[10],piVar8[0xd]);
          }
        }
        else {
          FUN_01660270(auStack_3b8,piVar8[10],*(longlong *)(piVar8 + 2));
        }
        if (*piVar8 != 0xf) {
          if (piVar8[0xb] == -1) {
            local_398 = *(undefined8 *)(piVar8 + 4);
            FUN_016602d0(auStack_3b8,*piVar8,piVar8[10],0xffffffff);
          }
          else {
            local_398 = 0;
            FUN_016602d0(auStack_3b8,*piVar8,piVar8[10],piVar8[0xb]);
          }
        }
        if (*(longlong *)(piVar8 + 6) != 0) {
          FUN_016602a0(auStack_3b8,piVar8[10],*(longlong *)(piVar8 + 6));
        }
      }
      local_37c = local_37c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = -0xd;
  pcVar7 = &DAT_01f7d789;
  pcVar9 = &DAT_01f7d77c;
  do {
    if (*pcVar7 == 'I') {
      FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),0x41);
    }
    FUN_0165dfb0(*(undefined8 *)(param_1 + 0x5d0),*pcVar9 + 'X');
    pcVar9 = pcVar9 + -1;
    pcVar7 = pcVar7 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0);
  FUN_00419430(local_30,&DAT_0165e2c0);
  FUN_00419430(local_58,&DAT_0165e308);
  FUN_00419430(&local_40,&DAT_0165e2c0);
  FUN_00419430(local_58,&DAT_0165e308);
  FUN_00419430(&local_40,&DAT_0165e2c0);
  FUN_00419430(local_30,&DAT_0165e2c0);
  return;
}


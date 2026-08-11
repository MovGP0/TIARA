/* Ghidra address: 00aaf690 */
/* Ghidra symbol: FUN_00aaf690 */


int FUN_00aaf690(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined7 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  uint local_78;
  int local_70;
  int local_68;
  char local_51;
  int local_50;
  int local_4c;
  longlong local_40;
  int local_38 [6];
  
  local_40 = 0;
  local_51 = 0 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x130);
  if ((bool)local_51) {
    local_4c = *(int *)(*(longlong *)(param_1 + 0x70) + 0x130);
  }
  else {
    iVar13 = FUN_00a73fa0(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x88));
    local_4c = FUN_00a73eb0(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x88));
    local_4c = iVar13 - local_4c;
  }
  local_4c = local_4c - *(int *)(*(longlong *)(param_1 + 0x70) + 0x138);
  FUN_00aad150(*(undefined8 *)(param_1 + 0x70));
  FUN_00aae210(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0xa0));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xf8);
  iVar13 = 0;
  if (lVar2 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar2 + -8);
  }
  uVar11 = 0;
  iVar4 = 0;
  if (-1 < iVar13 + -1) {
    do {
      uVar11 = uVar11 + *(int *)(lVar2 + (longlong)iVar4 * 4);
      iVar4 = iVar4 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if ((0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + 0x468)) &&
     (uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + 0x468),
     (int)uVar11 <= (int)uVar1)) {
    uVar11 = uVar1;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xf0);
  iVar13 = 0;
  if (lVar2 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar2 + -8);
  }
  iVar4 = 0;
  iVar5 = 0;
  if (iVar13 - 1U < 0x80000000) {
    do {
      iVar4 = iVar4 + *(int *)(lVar2 + (longlong)iVar5 * 4);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if ((0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + 0x470)) &&
     (iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + 0x470),
     iVar13 <= iVar4)) {
    iVar4 = iVar13;
  }
  if (local_4c < (int)uVar11) {
    FUN_004192a0(*(longlong *)(param_1 + 0x70) + 0x158);
  }
  else {
    local_38[2] = 0;
    iVar12 = 0;
    iVar5 = 0;
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
    if (-1 < iVar13 + -1) {
      do {
        if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x110) + (longlong)iVar5) ==
             '\x02') &&
           (local_38[2] = local_38[2] + 1,
           0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xe0) + (longlong)iVar5 * 4)))
        {
          iVar12 = iVar12 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    FUN_004192a0(*(longlong *)(param_1 + 0x70) + 0x158,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xf8),&DAT_00a8b940);
    local_38[1] = 0;
    iVar5 = 0;
    uVar3 = 0;
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
    uVar8 = uVar3;
    if (-1 < iVar13 + -1) {
      do {
        uVar8 = (ulonglong)(int)uVar3;
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x110) + uVar8) == '\x01') {
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x158) + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xf0) + uVar8 * 4);
          local_38[1] = local_38[1] + 1;
        }
        iVar5 = iVar5 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x158) + uVar8 * 4);
        uVar3 = (ulonglong)((int)uVar3 + 1);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    if (local_4c < iVar5) {
      local_88 = local_38[1];
      FUN_00aaeea0(auStack_a8,CONCAT71((int7)(uVar8 >> 8),1),iVar5,local_4c);
    }
    else {
      if ((0 < iVar12) && (0 < local_4c)) {
        FUN_00419260(&local_40,&DAT_00a8b940,1,
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x128));
        FUN_00aaf360(auStack_a8,&local_40,local_4c);
        local_68 = 0;
        iVar5 = 0;
        iVar13 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
        if (-1 < iVar13 + -1) {
          do {
            if (0 < *(int *)(local_40 + (longlong)iVar5 * 4)) {
              local_68 = local_68 + 1;
            }
            iVar5 = iVar5 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        iVar13 = 0;
        if (local_40 != 0) {
          iVar13 = (int)*(undefined8 *)(local_40 + -8);
        }
        local_70 = 0;
        iVar5 = 0;
        if (iVar13 - 1U < 0x80000000) {
          do {
            local_70 = local_70 + *(int *)(local_40 + (longlong)iVar5 * 4);
            iVar5 = iVar5 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        local_88 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128) + -1;
        local_80 = local_4c;
        local_78 = uVar11;
        FUN_00aaf4b0(auStack_a8,*(longlong *)(param_1 + 0x70) + 0x158,local_40);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x158);
      iVar13 = 0;
      if (lVar2 != 0) {
        iVar13 = (int)*(undefined8 *)(lVar2 + -8);
      }
      iVar5 = 0;
      uVar3 = 0;
      uVar8 = uVar3;
      if (-1 < iVar13 + -1) {
        do {
          uVar8 = (ulonglong)(int)uVar3;
          iVar5 = iVar5 + *(int *)(lVar2 + uVar8 * 4);
          uVar3 = (ulonglong)((int)uVar3 + 1);
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (local_4c < iVar5) {
        local_88 = local_38[2];
        FUN_00aaeea0(auStack_a8,CONCAT71((int7)(uVar8 >> 8),2),iVar5,local_4c);
      }
      else if ((local_51 == '\0') && (iVar4 <= local_4c)) {
        FUN_004192a0(*(longlong *)(param_1 + 0x70) + 0x158);
      }
      else if (iVar5 < local_4c) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x110);
        iVar13 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
        cVar7 = '\0';
        piVar9 = local_38;
        do {
          *piVar9 = 0;
          cVar7 = cVar7 + '\x01';
          piVar9 = piVar9 + 1;
        } while (cVar7 != '\x04');
        piVar6 = (int *)0x0;
        piVar9 = piVar6;
        if (-1 < iVar13 + -1) {
          do {
            piVar9 = local_38 + *(byte *)(lVar2 + (int)piVar6);
            *piVar9 = *piVar9 + 1;
            piVar6 = (int *)(ulonglong)((int)piVar6 + 1);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        if (local_38[0] < 1) {
          if (local_38[3] < 1) {
            uVar10 = (undefined7)((ulonglong)piVar9 >> 8);
            if (local_38[2] < 1) {
              local_88 = local_38[1];
              FUN_00aaeea0(auStack_a8,CONCAT71(uVar10,1),iVar5,local_4c);
            }
            else {
              local_88 = local_38[2];
              FUN_00aaeea0(auStack_a8,CONCAT71(uVar10,2),iVar5,local_4c);
            }
          }
          else {
            iVar13 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x128);
            local_88 = 0;
            iVar4 = 0;
            if (iVar13 - 1U < 0x80000000) {
              do {
                if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x110) + (longlong)iVar4
                             ) == '\x03') {
                  local_88 = local_88 +
                             *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x158) +
                                     (longlong)iVar4 * 4);
                }
                iVar4 = iVar4 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xe8);
            iVar13 = 0;
            if (lVar2 != 0) {
              iVar13 = (int)*(undefined8 *)(lVar2 + -8);
            }
            local_80 = 0;
            iVar4 = 0;
            if (iVar13 - 1U < 0x80000000) {
              do {
                local_80 = local_80 + *(int *)(lVar2 + (longlong)iVar4 * 4);
                iVar4 = iVar4 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            local_88 = local_88 + (local_4c - iVar5);
            local_78 = local_78 & 0xffffff00;
            FUN_00aad6f0(*(undefined8 *)(param_1 + 0x70),*(longlong *)(param_1 + 0x70) + 0x158,0,
                         *(int *)(*(longlong *)(param_1 + 0x70) + 0x128) + -1);
          }
        }
        else {
          local_88 = local_38[0];
          FUN_00aaeea0(auStack_a8,0,iVar5,local_4c);
        }
      }
    }
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x158);
  iVar13 = 0;
  if (lVar2 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar2 + -8);
  }
  local_50 = 0;
  iVar4 = 0;
  if (iVar13 - 1U < 0x80000000) {
    do {
      local_50 = local_50 + *(int *)(lVar2 + (longlong)iVar4 * 4);
      iVar4 = iVar4 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  local_50 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x138) + local_50;
  FUN_00419430(&local_40,&DAT_00a8b940);
  return local_50;
}


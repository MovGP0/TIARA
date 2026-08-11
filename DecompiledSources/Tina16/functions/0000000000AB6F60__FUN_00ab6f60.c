/* Ghidra address: 00ab6f60 */
/* Ghidra symbol: FUN_00ab6f60 */


int FUN_00ab6f60(longlong param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5
                ,int param_6,longlong param_7,undefined8 param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  longlong local_res18;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int *local_c0;
  undefined4 *local_b8;
  longlong local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  char local_7a;
  char local_79;
  undefined4 local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [3];
  
  local_88 = 0;
  *param_9 = 0;
  local_a0 = *(undefined4 *)(*(longlong *)(param_7 + 0x18) + 0x10);
  uVar1 = *(undefined4 *)(*(longlong *)(param_7 + 0x20) + 0x10);
  local_a8 = param_1;
  local_9c = param_4;
  local_98 = param_2;
  local_90 = param_3;
  lVar8 = FUN_00a716a0(param_3,8);
  if ((lVar8 == 0) || ((longlong)local_9c <= (lVar8 - local_90) / 2)) {
    local_79 = '\0';
  }
  else {
    local_79 = '\x01';
  }
  if ((local_79 == '\0') || (local_9c = (int)((lVar8 - local_90) / 2), local_9c != 0)) {
    iVar5 = FUN_00a73eb0(param_7,param_6);
    if (param_3 == *(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xd8)) {
      iVar5 = iVar5 + *(int *)(*(longlong *)(local_a8 + 0x60) + 300);
    }
    local_40 = FUN_00a73fa0(param_7,param_6);
    local_40 = local_40 - iVar5;
    if ((((param_3 != *(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xd8)) ||
         (*(int *)(*(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xf8) + 0x10) != 0)) ||
        (*(int *)(*(longlong *)(*(longlong *)(local_a8 + 0x60) + 0x100) + 0x10) != 0)) ||
       ((iVar5 = FUN_00a949e0(*(undefined8 *)(*(longlong *)(local_a8 + 0x60) + 0x118),0,
                              *(undefined4 *)(*(longlong *)(local_a8 + 0x60) + 0x6c),&local_60),
        iVar5 != *(int *)(*(longlong *)(local_a8 + 0x60) + 0x6c) ||
        (lVar8 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(local_a8 + 0x60) + 0x118),0),
        local_40 < local_9c * *(int *)(lVar8 + 0x50))))) {
      local_6c = 0xffffffff;
      local_3c[0] = 0;
      local_44 = 0;
      local_48 = 0;
      local_res18 = param_3;
      do {
        while( true ) {
          iVar6 = FUN_00a949e0(*(undefined8 *)(*(longlong *)(local_a8 + 0x60) + 0x118),
                               (local_res18 - *(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xd8))
                               / 2,*(undefined4 *)(*(longlong *)(local_a8 + 0x60) + 0x6c),&local_60)
          ;
          iVar5 = local_9c - local_3c[0];
          if (iVar6 < local_9c - local_3c[0]) {
            iVar5 = iVar6;
          }
          lVar8 = *(longlong *)(local_60 + 0x38);
          if (lVar8 != local_88) {
            local_88 = lVar8;
            FUN_00a4df80(lVar8,local_98);
          }
          iVar6 = FUN_00ac50d0(*(undefined8 *)(*(longlong *)(local_a8 + 0x60) + 0xf8),
                               (local_res18 - *(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xd8))
                               / 2,&local_50);
          iVar7 = FUN_00ac50d0(*(undefined8 *)(*(longlong *)(local_a8 + 0x60) + 0x100),
                               (local_res18 - *(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xd8))
                               / 2,&local_58);
          if ((iVar6 != 0) && (iVar7 != 0)) break;
          if (iVar6 != 0) {
            local_50 = local_58;
          }
          iVar6 = 1;
          iVar5 = 1;
          local_7a = '\x01';
          local_c8 = &local_40;
          local_c0 = local_3c;
          local_b8 = &local_6c;
          cVar4 = FUN_00ab6d20(auStack_e8,local_50,&local_44,&local_48);
          if (cVar4 != '\x01') {
            if (cVar4 != '\x02') goto LAB_00ab742b;
            goto code_r0x00ab7491;
          }
          local_res18 = local_90;
          local_3c[0] = 0;
          local_44 = 0;
        }
        local_7a = '\0';
        if (iVar6 <= iVar5) {
          iVar5 = iVar6;
        }
        if (iVar7 <= iVar5) {
          iVar5 = iVar7;
        }
        uVar9 = FUN_005ffa40(local_98);
        local_c8 = &local_68;
        iVar6 = FUN_00a71700(uVar9,local_res18,iVar5,local_40 - local_44);
        if (((0 < iVar6) &&
            (*(char *)(*(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xe0) + -1 +
                       (local_90 - *(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xd8)) / 2 +
                       (longlong)local_3c[0] + (longlong)iVar6) == '\x02')) &&
           (iVar7 = FUN_005fdff0(local_98,&DAT_00ab7668), local_40 < local_44 + local_68 + iVar7)) {
          iVar6 = iVar6 + -1;
        }
LAB_00ab742b:
        if (local_9c <= local_3c[0] + iVar6) {
          local_3c[0] = local_9c;
code_r0x00ab7491:
          iVar5 = local_48;
          iVar6 = local_3c[0];
          if ((local_79 != '\0') && (local_3c[0] == local_9c)) {
            iVar6 = local_3c[0] + 1;
          }
          local_c8 = (int *)CONCAT44(local_c8._4_4_,local_48);
          FUN_00a73cb0(param_7,local_a0,uVar1,param_6);
          iVar13 = 0;
          uVar10 = 0;
          iVar7 = *(int *)(*(longlong *)(*(longlong *)(local_a8 + 0x60) + 0xf8) + 0x10);
          if (-1 < iVar7 + -1) {
            do {
              iVar11 = (int)uVar10;
              lVar8 = FUN_00ac50c0(*(undefined8 *)(*(longlong *)(local_a8 + 0x60) + 0xf8),uVar10);
              if (*(byte *)(lVar8 + 0x60) < 8) {
                bVar14 = ((int)CONCAT71((int7)(uVar10 >> 8),1) << (*(byte *)(lVar8 + 0x60) & 0x1f) &
                         0x60U) != 0;
              }
              else {
                bVar14 = false;
              }
              if (bVar14) {
                iVar2 = *(int *)(lVar8 + 0xc0);
                iVar3 = *(int *)(lVar8 + 0xb4);
                if (param_6 + iVar3 < iVar2) {
                  if (iVar2 < param_6 + iVar5 + iVar3) {
                    iVar13 = (param_6 + iVar5 + iVar3) - iVar2;
                  }
                  *(int *)(lVar8 + 0xc0) = *(int *)(lVar8 + 0xc0) + iVar13;
                }
              }
              uVar10 = (ulonglong)(iVar11 + 1);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          iVar13 = 0;
          iVar7 = *(int *)(*(longlong *)(*(longlong *)(local_a8 + 0x60) + 0x100) + 0x10);
          uVar12 = 0;
          if (iVar7 + -1 < 0) {
            return iVar6;
          }
          do {
            uVar10 = (ulonglong)uVar12;
            lVar8 = FUN_00ac1a90(*(undefined8 *)(*(longlong *)(local_a8 + 0x60) + 0x100),uVar10);
            if (*(byte *)(lVar8 + 0x60) < 8) {
              bVar14 = ((int)CONCAT71((int7)(uVar10 >> 8),1) << (*(byte *)(lVar8 + 0x60) & 0x1f) &
                       0x60U) != 0;
            }
            else {
              bVar14 = false;
            }
            if (bVar14) {
              iVar11 = *(int *)(lVar8 + 0xc0);
              iVar2 = *(int *)(lVar8 + 0xb4);
              if (param_6 + iVar2 < iVar11) {
                if (iVar11 < param_6 + iVar5 + iVar2) {
                  iVar13 = (param_6 + iVar5 + iVar2) - iVar11;
                }
                *(int *)(lVar8 + 0xc0) = *(int *)(lVar8 + 0xc0) + iVar13;
              }
            }
            uVar12 = uVar12 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return iVar6;
        }
        local_3c[0] = local_3c[0] + iVar6;
        iVar7 = local_48;
        if (local_7a == '\0') {
          if (iVar6 < iVar5) goto code_r0x00ab7491;
          local_44 = local_44 + local_68;
          iVar7 = local_64;
          if (local_64 < local_48) {
            iVar7 = local_48;
          }
        }
        local_48 = iVar7;
        local_res18 = local_res18 + (longlong)iVar6 * 2;
      } while( true );
    }
    if (local_79 != '\0') {
      local_9c = local_9c + 1;
    }
  }
  else {
    local_9c = 1;
  }
  return local_9c;
}


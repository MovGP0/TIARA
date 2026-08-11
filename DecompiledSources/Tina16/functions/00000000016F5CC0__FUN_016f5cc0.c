/* Ghidra address: 016f5cc0 */
/* Ghidra symbol: FUN_016f5cc0 */


void FUN_016f5cc0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  char local_31;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  cVar4 = FUN_00f5cdb0(param_1[0x14],&local_31,0);
  if ((cVar4 == '\0') || (local_31 != '\0')) {
    lVar3 = param_1[0x61];
    iVar10 = *(int *)((longlong)param_1 + 0x31c);
    uVar6 = FUN_01b077e0(param_1);
    FUN_017c5220(&local_30,*(undefined4 *)((longlong)param_1 + 0x31c));
    FUN_01b07850(param_1,param_1[0x23],uVar6);
    FUN_017c51f0(param_1[0x37],local_30,*(undefined4 *)((longlong)param_1 + 0x31c));
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x5d) = 0;
    local_58 = 0;
    while (local_58 < (int)param_1[0x5b]) {
      local_58 = local_58 + 1;
      lVar2 = *(longlong *)(param_1[0x56] + -8 + (longlong)local_58 * 8);
      sVar5 = (**(code **)(**(longlong **)(lVar2 + 0x128) + 0xf8))(*(longlong **)(lVar2 + 0x128));
      *(short *)(lVar2 + 0x13a) = sVar5;
      cVar4 = FUN_0198a580(*(undefined8 *)(lVar2 + 0x128));
      if (cVar4 == '\x04') {
        FUN_0043e1a0(&local_40,*(undefined8 *)(*(longlong *)(lVar2 + 0x128) + 0x98));
        FUN_0043e1a0(&local_48,L"AVGComp");
        cVar4 = FUN_005b8520(local_40,local_48);
        if (cVar4 != '\0') {
          FUN_016f5520(param_1,lVar2);
          FUN_016eef40(lVar2,param_1);
        }
      }
      if (*(char *)(lVar2 + 0x113) == '\0') {
        if (*(char *)(lVar2 + 0x112) != '\0') {
          *(int *)(param_1 + 0x5c) = (int)param_1[0x5c] + 1;
        }
      }
      else {
        *(int *)((longlong)param_1 + 0x2dc) = *(int *)((longlong)param_1 + 0x2dc) + 1;
      }
      if (sVar5 == 0x40b) {
        *(int *)((longlong)param_1 + 0x2e4) = *(int *)((longlong)param_1 + 0x2e4) + 1;
      }
      else if (sVar5 == 0x40a) {
        *(int *)(param_1 + 0x5d) = (int)param_1[0x5d] + 1;
      }
    }
    if (*(int *)((longlong)param_1 + 0x2dc) < 1) {
      if (param_1[0x57] != 0) {
        FUN_004095f0(param_1[0x57]);
        param_1[0x57] = 0;
      }
    }
    else {
      FUN_00409620(param_1 + 0x57,(longlong)(*(int *)((longlong)param_1 + 0x2dc) * 8));
    }
    if ((int)param_1[0x5c] < 1) {
      if (param_1[0x58] != 0) {
        FUN_004095f0(param_1[0x58]);
        param_1[0x58] = 0;
      }
    }
    else {
      FUN_00409620(param_1 + 0x58,(longlong)((int)param_1[0x5c] * 8));
    }
    if (*(int *)((longlong)param_1 + 0x2e4) < 1) {
      if (param_1[0x59] != 0) {
        FUN_004095f0(param_1[0x59]);
        param_1[0x59] = 0;
      }
    }
    else {
      FUN_00409620(param_1 + 0x59,(longlong)(*(int *)((longlong)param_1 + 0x2e4) * 8));
    }
    if ((int)param_1[0x5d] < 1) {
      if (param_1[0x5a] != 0) {
        FUN_004095f0(param_1[0x5a]);
        param_1[0x5a] = 0;
      }
    }
    else {
      FUN_00409620(param_1 + 0x5a,(longlong)((int)param_1[0x5d] * 8));
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    iVar9 = 0;
    while (local_58 < (int)param_1[0x5b]) {
      local_58 = local_58 + 1;
      lVar2 = *(longlong *)(param_1[0x56] + -8 + (longlong)local_58 * 8);
      sVar5 = (**(code **)(**(longlong **)(lVar2 + 0x128) + 0xf8))(*(longlong **)(lVar2 + 0x128));
      *(longlong *)(*(longlong *)(lVar2 + 0x128) + 0x570) = lVar2;
      if (*(char *)(lVar2 + 0x113) == '\0') {
        if (*(char *)(lVar2 + 0x112) != '\0') {
          local_50 = local_50 + 1;
          *(longlong *)(param_1[0x58] + -8 + (longlong)local_50 * 8) = lVar2;
        }
      }
      else {
        local_54 = local_54 + 1;
        *(longlong *)(param_1[0x57] + -8 + (longlong)local_54 * 8) = lVar2;
      }
      if (sVar5 == 0x40b) {
        local_4c = local_4c + 1;
        *(longlong *)(param_1[0x59] + -8 + (longlong)local_4c * 8) = lVar2;
      }
      else if (sVar5 == 0x40a) {
        iVar9 = iVar9 + 1;
        *(longlong *)(param_1[0x5a] + -8 + (longlong)iVar9 * 8) = lVar2;
      }
    }
    FUN_017c99b0(param_1);
    iVar9 = (int)param_1[0x61];
    iVar1 = *(int *)((longlong)param_1 + 0x31c);
    if (iVar9 != (int)lVar3) {
      FUN_017c58c0(param_1[0x1b],iVar9);
      (**(code **)(*param_1 + 0x18))(param_1,iVar9);
      FUN_017c52b0(param_1 + 0x2d,iVar9);
      FUN_017c52b0(param_1 + 0x2e,iVar9);
    }
    if (iVar1 != iVar10) {
      FUN_017c53f0(param_1 + 0x37,param_1 + 0x3f,param_1 + 0x30,param_1 + 0x31,param_1 + 0x32,
                   param_1 + 0x33,iVar1);
    }
    if ((iVar9 != (int)lVar3) || (iVar1 != iVar10)) {
      FUN_017c51f0(uVar6,param_1[0x23],*(undefined4 *)((longlong)param_1 + 0x30c));
      iVar10 = (int)param_1[0x5b];
      local_58 = 1;
      if (0 < iVar10) {
        do {
          lVar3 = *(longlong *)(param_1[0x56] + -8 + (longlong)local_58 * 8);
          if (*(char *)(lVar3 + 6) != '\0') {
            uVar7 = FUN_016f5ca0(uVar6,*(undefined4 *)(lVar3 + 0x88));
            uVar8 = FUN_016f5ca0(param_1[0x23],*(undefined4 *)(lVar3 + 0x78));
            FUN_00409a70(uVar7,uVar8,(ulonglong)*(byte *)(lVar3 + 6) << 3);
          }
          if (*(char *)(lVar3 + 7) != '\0') {
            uVar7 = FUN_016f5ca0(uVar6,*(undefined4 *)(lVar3 + 0x8c));
            uVar8 = FUN_016f5ca0(param_1[0x23],*(undefined4 *)(lVar3 + 0x7c));
            FUN_00409a70(uVar7,uVar8,(ulonglong)*(byte *)(lVar3 + 7) << 3);
          }
          if (*(char *)(lVar3 + 8) != '\0') {
            uVar7 = FUN_016f5ca0(uVar6,*(undefined4 *)(lVar3 + 0x90));
            uVar8 = FUN_016f5ca0(param_1[0x23],*(undefined4 *)(lVar3 + 0x80));
            FUN_00409a70(uVar7,uVar8,(ulonglong)*(byte *)(lVar3 + 8) << 3);
          }
          if (*(short *)(lVar3 + 10) != 0) {
            uVar7 = FUN_016f5ca0(local_30,*(undefined4 *)(lVar3 + 0x94));
            uVar8 = FUN_016f5ca0(param_1[0x37],*(undefined4 *)(lVar3 + 0x84));
            FUN_00409a70(uVar7,uVar8,(ulonglong)*(ushort *)(lVar3 + 10) << 3);
          }
          local_58 = local_58 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      FUN_017c51f0(param_1[0x37],param_1[0x38],*(undefined4 *)((longlong)param_1 + 0x31c));
    }
    FUN_01b07800(param_1,uVar6);
    FUN_01b07800(param_1,local_30);
    FUN_016f66e0(param_1);
    FUN_017d9ab0(param_1[0x1b],0);
  }
  FUN_00414560(&local_48,2);
  return;
}


/* Ghidra address: 00a280f0 */
/* Ghidra symbol: FUN_00a280f0 */


void FUN_00a280f0(short *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  short *psVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  short *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = param_4;
  FUN_00414480(param_2);
  FUN_00414480(local_68);
  FUN_00414480(local_60);
  FUN_00414480(param_5);
  FUN_00414480(param_6);
  FUN_00414480(param_7);
  psVar1 = local_78;
  iVar4 = 0;
  if (local_78 != (short *)0x0) {
    iVar4 = *(int *)(local_78 + -2);
  }
  if (0 < iVar4) {
    local_1c = FUN_004170c0(&DAT_00a286a8,local_78,1);
    if (local_1c == 0) {
      if (*local_78 == 0x2f) {
        FUN_00414ad0(local_70,L"http");
        local_1c = 1;
        iVar4 = 0;
        if (psVar1 != (short *)0x0) {
          iVar4 = *(int *)(psVar1 + -2);
        }
        if ((1 < iVar4) && (local_78[1] != 0x2f)) {
          uVar6 = 0;
          if (psVar1 != (short *)0x0) {
            uVar6 = *(undefined4 *)(psVar1 + -2);
          }
          FUN_00416dc0(param_7,local_78,1,uVar6);
          goto LAB_00a28665;
        }
      }
      else {
        FUN_00416dc0(&local_38,local_78,1,5);
        FUN_0043e1a0(&local_30,local_38);
        iVar4 = FUN_00416db0(local_30,L"http:");
        if (iVar4 == 0) {
          FUN_00414ad0(local_70,L"http");
          local_1c = 6;
          iVar4 = 0;
          if (psVar1 != (short *)0x0) {
            iVar4 = *(int *)(psVar1 + -2);
          }
          if ((6 < iVar4) && (local_78[6] != 0x2f)) {
            uVar6 = 0;
            if (psVar1 != (short *)0x0) {
              uVar6 = *(undefined4 *)(psVar1 + -2);
            }
            FUN_00416dc0(param_7,local_78,6,uVar6);
            goto LAB_00a28665;
          }
        }
        else {
          FUN_00416dc0(&local_48,local_78,1,7);
          FUN_0043e1a0(&local_40,local_48);
          iVar4 = FUN_00416db0(local_40,L"mailto:");
          if (iVar4 == 0) {
            FUN_00414ad0(local_70,L"mailto");
            local_1c = FUN_004170c0(&DAT_00a28724,local_78,1);
          }
          else {
            FUN_00416dc0(&local_58,local_78,1,5);
            FUN_0043e1a0(&local_50,local_58);
            iVar4 = FUN_00416db0(local_50,L"data:");
            if (iVar4 == 0) {
              FUN_00414ad0(local_70,L"data");
              local_1c = FUN_004170c0(&DAT_00a28724,local_78,1);
            }
            else {
              local_1c = 1;
              cVar3 = FUN_00a288a0(local_78,&local_1c);
              if (cVar3 != '\0') {
                FUN_00416dc0(local_70,local_78,1,local_1c + -1);
              }
            }
          }
        }
      }
    }
    else {
      FUN_00416dc0(local_70,local_78,1,local_1c + -1);
      local_1c = local_1c + 2;
    }
    uVar6 = 0;
    if (psVar1 != (short *)0x0) {
      uVar6 = *(undefined4 *)(psVar1 + -2);
    }
    FUN_00416dc0(&local_28,local_78,local_1c + 1,uVar6);
    local_1c = FUN_004170c0(&DAT_00a28764,local_28,1);
    if (local_1c == 0) {
      local_1c = 0;
      if (local_28 != 0) {
        local_1c = *(int *)(local_28 + -4);
      }
      local_1c = local_1c + 1;
    }
    uVar6 = 0;
    if (local_28 != 0) {
      uVar6 = *(undefined4 *)(local_28 + -4);
    }
    FUN_00416dc0(param_7,local_28,local_1c,uVar6);
    FUN_00416dc0(&local_28,local_28,1,local_1c + -1);
    local_1c = FUN_00a27f20(auStack_98,&DAT_00a28724,local_28,0xffffffff);
    lVar2 = local_28;
    iVar4 = 0;
    if (local_28 != 0) {
      iVar4 = *(int *)(local_28 + -4);
    }
    if (iVar4 < local_1c) {
      local_1c = 0;
    }
    iVar5 = FUN_00a27f20(auStack_98,&LAB_00a28774,local_28,0xffffffff);
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + -4);
    }
    if (iVar4 < iVar5) {
      iVar5 = 0;
    }
    if ((local_1c == 0) && (iVar5 == 0)) {
      FUN_00414ad0(param_5,local_28);
    }
    else {
      if (iVar5 < local_1c) {
        uVar6 = 0;
        if (local_28 != 0) {
          uVar6 = *(undefined4 *)(local_28 + -4);
        }
        FUN_00416dc0(param_6,local_28,local_1c + 1,uVar6);
        FUN_00416dc0(param_5,local_28,iVar5 + 1,(local_1c - iVar5) + -1);
        if (iVar5 == 0) goto LAB_00a28665;
        FUN_00416dc0(&local_28,local_28,1,iVar5 + -1);
      }
      else {
        uVar6 = 0;
        if (local_28 != 0) {
          uVar6 = *(undefined4 *)(local_28 + -4);
        }
        FUN_00416dc0(param_5,local_28,iVar5 + 1,uVar6);
        FUN_00416dc0(&local_28,local_28,1,iVar5 + -1);
      }
      local_1c = FUN_004170c0(&DAT_00a28724,local_28,1);
      if (local_1c == 0) {
        FUN_00414ad0(local_68,local_28);
      }
      else {
        FUN_00416dc0(local_68,local_28,1,local_1c + -1);
        uVar6 = 0;
        if (local_28 != 0) {
          uVar6 = *(undefined4 *)(local_28 + -4);
        }
        FUN_00416dc0(local_60,local_28,local_1c + 1,uVar6);
      }
    }
  }
LAB_00a28665:
  FUN_00414560(&local_58,7);
  return;
}


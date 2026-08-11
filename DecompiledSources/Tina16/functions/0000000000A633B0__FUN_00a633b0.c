/* Ghidra address: 00a633b0 */
/* Ghidra symbol: FUN_00a633b0 */


void FUN_00a633b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_60;
  int local_54;
  int local_50;
  int local_4c;
  char local_46;
  char local_45;
  int local_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_19;
  int local_18;
  ushort local_12;
  undefined8 local_10;
  
  local_70 = auStack_98;
  local_10 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_12 = 0;
  local_18 = 0;
  local_19 = '\0';
  FUN_00a62d70(param_1,0);
LAB_00a63425:
  FUN_00a63b40(param_1,0);
  uVar5 = FUN_00414480(&local_30);
  cVar3 = FUN_00a62fc0(param_1,uVar5);
  if (cVar3 != '\0') {
    FUN_00a63b40(param_1,0);
    if ((*(short *)(param_1 + 0x10) == 0x3a) || (*(short *)(param_1 + 0x10) == 0x3d)) {
      FUN_00a62d70(param_1,1);
      FUN_00a63b40(param_1,1);
      local_44 = 0;
      FUN_00414480(&local_38);
      do {
        if (((*(short *)(param_1 + 0x10) == 0x3b) && (local_12 == 0)) ||
           (cVar3 = FUN_00a63140(*(short *)(param_1 + 0x10),param_2,param_3), cVar3 != '\0'))
        goto code_r0x00a63665;
        uVar2 = *(ushort *)(param_1 + 0x10);
        if (uVar2 < 0x28) {
          if (uVar2 == 0x27) {
LAB_00a6350e:
            if (local_12 == uVar2) {
              FUN_00a63280(auStack_98);
              local_18 = local_18 + -1;
              if (local_18 < 1) {
                local_19 = '\0';
                local_18 = 0;
              }
            }
            else {
              FUN_00a63210(auStack_98,uVar2);
              local_18 = local_18 + 1;
              local_19 = '\x01';
            }
          }
          else if (uVar2 == 10) {
            if (local_19 != '\0') {
              FUN_00a63370(auStack_98);
              goto code_r0x00a63665;
            }
          }
          else if (uVar2 == 0x21) {
            if (local_19 == '\0') goto code_r0x00a63560;
          }
          else if (uVar2 == 0x22) goto LAB_00a6350e;
        }
        else if (uVar2 == 0x28) {
          if (local_19 == '\0') {
            FUN_00a63210(auStack_98,0x29);
          }
        }
        else if ((uVar2 == 0x29) && (local_12 == 0x29)) {
          FUN_00a63280(auStack_98);
        }
        local_50 = 0;
        if (local_38 != 0) {
          local_50 = *(int *)(local_38 + -4);
        }
        FUN_004169f0(&local_38,local_50 + 1);
        local_60 = FUN_00414de0(&local_38);
        local_54 = 0;
        if (local_38 != 0) {
          local_54 = *(int *)(local_38 + -4);
        }
        uVar1 = *(undefined2 *)(param_1 + 0x10);
        *(undefined2 *)(local_60 + -2 + (longlong)local_54 * 2) = uVar1;
        FUN_00a62d70(param_1,CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),1));
      } while( true );
    }
  }
  goto LAB_00a63720;
code_r0x00a63560:
  local_4c = 0;
  if (local_38 != 0) {
    local_4c = *(int *)(local_38 + -4);
  }
  local_44 = local_4c + 1;
code_r0x00a63665:
  local_45 = '\0';
  if (0 < local_44) {
    FUN_00a62d70(param_1,0);
    FUN_00a63b40(param_1,0);
    uVar5 = FUN_00414480(&local_40);
    cVar3 = FUN_00a62fc0(param_1,uVar5);
    if (cVar3 != '\0') {
      FUN_00a63b40(param_1,0);
      FUN_00414480(&local_28);
      FUN_0043e600(&local_28,local_40);
      iVar4 = FUN_00416db0(local_28,L"important");
      local_45 = iVar4 == 0;
      FUN_00414480(&local_28);
      if (local_45 != '\0') {
        FUN_004169f0(&local_38,local_44 + -1);
      }
    }
  }
  FUN_00a63dd0(param_1,local_30,local_38,local_45);
LAB_00a63720:
  local_46 = FUN_00a63140(*(undefined2 *)(param_1 + 0x10),param_2,param_3);
  while (uVar2 = *(ushort *)(param_1 + 0x10), uVar2 != 0) {
    if (local_46 == '\x01') {
      if (local_19 == '\0') {
        if (uVar2 == local_12) {
          FUN_00a63280(auStack_98);
        }
joined_r0x00a6377f:
        if (local_12 == 0) break;
      }
    }
    else if (local_46 == '\x02') {
      if (local_19 == '\0') goto joined_r0x00a6377f;
    }
    else if (uVar2 < 0x29) {
      if (uVar2 == 0x28) {
        if (local_19 == '\0') {
          FUN_00a63210(auStack_98,0x29);
        }
      }
      else {
        if (uVar2 == 0) break;
        if (uVar2 == 10) {
          if (local_19 != '\0') {
            FUN_00a63370(auStack_98);
            break;
          }
        }
        else if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
          if (local_12 == uVar2) {
            FUN_00a63280(auStack_98);
            local_18 = local_18 + -1;
            if (local_18 < 1) {
              local_19 = '\0';
              local_18 = 0;
            }
          }
          else {
            FUN_00a63210(auStack_98,uVar2);
            local_18 = local_18 + 1;
            local_19 = '\x01';
          }
        }
        else {
LAB_00a638d6:
          if (uVar2 == local_12) {
            FUN_00a63280(auStack_98);
          }
        }
      }
    }
    else if (uVar2 == 0x3b) {
      if (local_12 == 0) {
        FUN_00a62d70(param_1);
        break;
      }
    }
    else if (uVar2 == 0x5b) {
      if (local_19 == '\0') {
        FUN_00a63210(auStack_98,0x5d);
      }
    }
    else {
      if (uVar2 != 0x7b) goto LAB_00a638d6;
      if (local_19 == '\0') {
        FUN_00a63210(auStack_98,0x7d);
      }
    }
    FUN_00a62d70(param_1,1);
    local_46 = FUN_00a63140(*(undefined2 *)(param_1 + 0x10),param_2,param_3);
  }
  if (local_46 != '\0') {
    FUN_00414560(&local_40,4);
    FUN_00414480(&local_10);
    return;
  }
  goto LAB_00a63425;
}


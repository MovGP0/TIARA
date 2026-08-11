/* Ghidra address: 00ac2090 */
/* Ghidra symbol: FUN_00ac2090 */


longlong FUN_00ac2090(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  int local_74;
  undefined1 *local_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_40;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_a8;
  local_40 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar2 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_70;
  }
  local_70 = puVar2;
  local_88 = param_5;
  local_80 = param_6;
  FUN_00ac4c80(local_res8,0,param_3,param_4);
  local_30 = -1;
  local_34 = -1;
  *(undefined4 *)(local_res8 + 0xe0) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xdc) = 0xffffffff;
  local_74 = *(int *)(param_5 + 0x10) + -1;
  local_2c = 0;
  iVar3 = *(int *)(param_5 + 0x10);
  if (-1 < local_74) {
    do {
      local_74 = iVar3;
      local_50 = FUN_004aeac0(param_5,local_2c);
      bVar1 = *(byte *)(local_50 + 8);
      if (bVar1 < 0x22) {
        if (bVar1 == 0x21) {
          uVar4 = (int)*(uint *)(local_50 + 0x18) >> 0x1f;
          local_54 = (*(uint *)(local_50 + 0x18) ^ uVar4) - uVar4;
          local_58 = local_54;
          if (0x28 < local_54) {
            local_58 = 0x28;
          }
          local_30 = local_58;
        }
        else if (bVar1 == 3) {
          FUN_00414480(&local_28);
          local_68 = *(undefined8 *)(local_50 + 0x28);
          FUN_0043ea00(&local_28,local_68);
          FUN_00414480(local_20);
          FUN_0043e5a0(local_20,local_28);
          FUN_00414b50(&local_40,local_20[0]);
          FUN_00414480(local_20);
          FUN_00414480(&local_28);
          iVar3 = FUN_00416db0(local_40,&DAT_00ac268c);
          if (iVar3 == 0) {
            *(undefined1 *)(local_res8 + 0xa8) = 1;
          }
          else {
            iVar3 = FUN_00416db0(local_40,L"MIDDLE");
            if ((iVar3 == 0) || (iVar3 = FUN_00416db0(local_40,L"ABSMIDDLE"), iVar3 == 0)) {
              *(undefined1 *)(local_res8 + 0xa8) = 2;
            }
            else {
              iVar3 = FUN_00416db0(local_40,L"LEFT");
              if (iVar3 == 0) {
                *(undefined1 *)(local_res8 + 0xa8) = 0;
                *(undefined1 *)(local_res8 + 0x60) = 5;
              }
              else {
                iVar3 = FUN_00416db0(local_40,L"RIGHT");
                if (iVar3 == 0) {
                  *(undefined1 *)(local_res8 + 0xa8) = 0;
                  *(undefined1 *)(local_res8 + 0x60) = 6;
                }
              }
            }
          }
        }
        else if (bVar1 == 0x1e) {
          iVar3 = FUN_004170c0(&DAT_00ac267c,*(undefined8 *)(local_50 + 0x28),1);
          if (iVar3 == 0) {
            *(undefined4 *)(local_res8 + 0xe0) = *(undefined4 *)(local_50 + 0x18);
          }
          else {
            iVar3 = *(int *)(local_50 + 0x18);
            if ((-1 < iVar3) && (iVar3 < 0x65)) {
              *(int *)(local_res8 + 0xe0) = iVar3;
              *(undefined1 *)(local_res8 + 0xbd) = 1;
            }
          }
        }
      }
      else if (bVar1 == 0x5d) {
        uVar4 = (int)*(uint *)(local_50 + 0x18) >> 0x1f;
        local_5c = (*(uint *)(local_50 + 0x18) ^ uVar4) - uVar4;
        local_60 = local_5c;
        if (0x28 < local_5c) {
          local_60 = 0x28;
        }
        local_34 = local_60;
      }
      else if (bVar1 == 0x5e) {
        iVar3 = FUN_004170c0(&DAT_00ac267c,*(undefined8 *)(local_50 + 0x28),1);
        if (iVar3 == 0) {
          *(undefined4 *)(local_res8 + 0xdc) = *(undefined4 *)(local_50 + 0x18);
        }
        else {
          iVar3 = *(int *)(local_50 + 0x18);
          if ((-1 < iVar3) && (iVar3 < 0x65)) {
            *(int *)(local_res8 + 0xdc) = iVar3;
            *(undefined1 *)(local_res8 + 0xbc) = 1;
          }
        }
      }
      local_2c = local_2c + 1;
      local_74 = local_74 + -1;
      iVar3 = local_74;
    } while (local_74 != 0);
  }
  if (-1 < local_34) {
    *(int *)(local_res8 + 0xb4) = local_34;
    *(int *)(local_res8 + 0xb8) = local_34;
  }
  if (local_30 < 0) {
    *(undefined4 *)(local_res8 + 0xb0) = *(undefined4 *)(local_res8 + 0xac);
    if (*(char *)(*(longlong *)(local_res8 + 0x18) + 0x60) != '\0') {
      if (*(char *)(local_res8 + 0x60) == '\x05') {
        *(undefined4 *)(local_res8 + 0xac) = 0;
        *(undefined4 *)(local_res8 + 0xb0) = 3;
      }
      else if (*(char *)(local_res8 + 0x60) == '\x06') {
        *(undefined4 *)(local_res8 + 0xac) = 3;
        *(undefined4 *)(local_res8 + 0xb0) = 0;
      }
    }
  }
  else {
    *(int *)(local_res8 + 0xac) = local_30;
    *(int *)(local_res8 + 0xb0) = local_30;
  }
  FUN_00414480(&local_40);
  FUN_00414560(&local_28,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


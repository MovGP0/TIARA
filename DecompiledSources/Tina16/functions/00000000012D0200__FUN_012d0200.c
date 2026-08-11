/* Ghidra address: 012d0200 */
/* Ghidra symbol: FUN_012d0200 */


int FUN_012d0200(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [44];
  int local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_70 = auStack_c8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  local_10 = 0;
  local_28 = -1;
  local_2c = -1;
  local_30 = 0x7fffffff;
  local_38 = -1;
  if (*(char *)(param_1 + 0xd8) == '\x06') {
    local_70 = auStack_c8;
    FUN_004169a0(&local_48,*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) + 0xc);
  }
  else if (*(char *)(param_1 + 0xd8) == '\b') {
    local_70 = auStack_c8;
    FUN_004169a0(&local_48,*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) + 0x20c);
  }
  else {
    FUN_004169a0(&local_48,*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) + 0x40c);
  }
  local_50 = *(longlong *)(*(longlong *)(param_1 + 200) + 8);
  local_9c = *(int *)(local_50 + 0x10) + -1;
  local_24 = 0;
  iVar2 = *(int *)(local_50 + 0x10);
  if (-1 < local_9c) {
    do {
      local_9c = iVar2;
      local_20 = FUN_01d347d0(local_50,local_24);
      if (*(int *)(local_20 + 0x158) == 0) {
        if (local_48 != 0) {
          FUN_01cc0ae0(local_20,&local_78);
          cVar1 = FUN_012d0030(auStack_c8,local_78,local_48,1);
          if ((cVar1 != '\0') && (local_28 == -1)) {
            local_28 = local_24;
          }
        }
        FUN_01cc0ae0(local_20,&local_80);
        cVar1 = FUN_012d0030(auStack_c8,local_80,&DAT_012d0680,0);
        if ((cVar1 != '\0') && (local_2c == -1)) {
          local_2c = local_24;
        }
        FUN_01cc0ae0(local_20,&local_88);
        iVar2 = FUN_004170c0(&DAT_012d0694,local_88,1);
        if (0 < iVar2) {
          local_10 = 0;
          FUN_01cc0ae0(local_20,&local_10);
          FUN_01cc0ae0(local_20,&local_90);
          local_68 = FUN_004170c0(&DAT_012d0694,local_90,1);
          local_68 = local_68 + 1;
          FUN_01cc0ae0(local_20,&local_98);
          local_60 = local_98;
          local_64 = 0;
          if (local_98 != 0) {
            local_64 = *(undefined4 *)(local_98 + -4);
          }
          FUN_00416dc0(&local_40,local_10,local_68);
          FUN_00414480(&local_10);
          if (local_40 != 0) {
            iVar2 = FUN_004170c0(&LAB_012d06a4,local_40,1);
            if (0 < iVar2) {
              FUN_004170c0(&LAB_012d06a4,local_40,1);
              FUN_00416dc0(&local_40,local_40,1);
            }
            local_34 = FUN_0043fc00(local_40);
            if (local_34 < local_30) {
              local_38 = local_24;
              local_30 = local_34;
            }
          }
        }
      }
      local_24 = local_24 + 1;
      local_9c = local_9c + -1;
      iVar2 = local_9c;
    } while (local_9c != 0);
  }
  if (local_28 < 0) {
    if (local_2c < 0) {
      if (local_30 < 0x7fffffff) {
        local_14 = local_38;
      }
      else {
        local_14 = 0;
      }
    }
    else {
      local_14 = local_2c;
    }
  }
  else {
    local_14 = local_28;
  }
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_48,2);
  return local_14;
}


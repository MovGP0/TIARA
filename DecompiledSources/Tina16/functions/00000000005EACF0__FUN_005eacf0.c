/* Ghidra address: 005eacf0 */
/* Ghidra symbol: FUN_005eacf0 */


undefined1 FUN_005eacf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  undefined8 uVar4;
  HKEY hKey;
  LPCWSTR lpSubKey;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_64;
  int local_60;
  undefined8 local_48;
  undefined8 local_40;
  char local_35;
  int local_34;
  int local_30;
  undefined1 local_29;
  longlong local_28;
  undefined8 local_20;
  
  local_70 = auStack_b8;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_00414b50(&local_40,param_2);
  local_35 = FUN_005ea1f0(local_40);
  if (local_35 == '\0') {
    FUN_00416e20(&local_40,1,1);
  }
  local_20 = *(undefined8 *)(param_1 + 8);
  local_28 = FUN_005ebee0(param_1,param_2);
  if (local_28 != 0) {
    FUN_005ea700(param_1,local_28);
    cVar1 = FUN_005eb020(param_1,&local_64);
    if (cVar1 != '\0') {
      FUN_00414740(&local_48,0,local_60 + 1);
      local_34 = local_64 + -1;
      if (-1 < local_34) {
        do {
          local_30 = local_60 + 1;
          uVar4 = FUN_00416740(local_48);
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          uVar2 = thunk_FUN_03f94bd3(local_28,local_34,uVar4);
          cVar1 = FUN_005ea620(param_1,uVar2);
          if (cVar1 != '\0') {
            uVar4 = FUN_00416740(local_48);
            FUN_004167d0(&local_78,uVar4);
            FUN_005eacf0(param_1,local_78);
          }
          local_34 = local_34 + -1;
        } while (local_34 != -1);
      }
    }
    FUN_005ea700(param_1,local_20);
    thunk_FUN_0418fb4b(local_28);
  }
  if (DAT_02011f7c == '\0') {
    uVar4 = FUN_005ea6e0(param_1,local_35);
    uVar5 = FUN_00416740(local_40);
    uVar2 = thunk_FUN_040d1c8d(uVar4,uVar5);
    local_29 = FUN_005ea620(param_1,uVar2);
  }
  else {
    hKey = (HKEY)FUN_005ea6e0(param_1,local_35);
    lpSubKey = (LPCWSTR)FUN_00416740(local_40);
    LVar3 = RegDeleteKeyExW(hKey,lpSubKey,*(uint *)(param_1 + 0x2c) & 0x300,0);
    local_29 = FUN_005ea620(param_1,LVar3);
  }
  FUN_00414480(&local_78);
  FUN_00414560(&local_48,2);
  return local_29;
}


/* Ghidra address: 005eaa60 */
/* Ghidra symbol: FUN_005eaa60 */


char FUN_005eaa60(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  char local_39;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  FUN_00414b50(&local_38,param_2);
  uVar1 = FUN_005ea1f0(local_38);
  bVar5 = (byte)uVar1;
  if (bVar5 == 0) {
    FUN_00416e20(&local_38,1,1);
  }
  local_30 = 0;
  uVar6 = *(uint *)(param_1 + 0x2c) & 0x300;
  uVar3 = FUN_005ea6e0(param_1,uVar1);
  uVar4 = FUN_00416740(local_38);
  uVar2 = thunk_FUN_03ecc02e(uVar3,uVar4,0,uVar6 | 0x20019,&local_30);
  local_39 = FUN_005ea620(param_1,uVar2);
  if (local_39 == '\0') {
    uVar3 = FUN_005ea6e0(param_1,uVar1);
    uVar4 = FUN_00416740(local_38);
    uVar2 = thunk_FUN_03ecc02e(uVar3,uVar4,0,uVar6 | 0x20009,&local_30);
    local_39 = FUN_005ea620(param_1,uVar2);
    if (local_39 == '\0') {
      uVar3 = FUN_005ea6e0(param_1,uVar1);
      uVar4 = FUN_00416740(local_38);
      uVar1 = thunk_FUN_03ecc02e(uVar3,uVar4,0,uVar6 | 1,&local_30);
      local_39 = FUN_005ea620(param_1,uVar1);
      if (local_39 != '\0') {
        *(uint *)(param_1 + 0x2c) = uVar6 | 1;
        if ((bVar5 & *(longlong *)(param_1 + 8) != 0) != 0) {
          FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x20),&LAB_005eace4,local_38);
        }
        FUN_005ea6b0(param_1,local_30,local_38);
      }
    }
    else {
      *(uint *)(param_1 + 0x2c) = uVar6 | 0x20009;
      if ((bVar5 & *(longlong *)(param_1 + 8) != 0) != 0) {
        FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x20),&LAB_005eace4,local_38);
      }
      FUN_005ea6b0(param_1,local_30,local_38);
    }
  }
  else {
    *(uint *)(param_1 + 0x2c) = uVar6 | 0x20019;
    if ((bVar5 & *(longlong *)(param_1 + 8) != 0) != 0) {
      FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x20),&LAB_005eace4,local_38);
    }
    FUN_005ea6b0(param_1,local_30,local_38);
  }
  FUN_00414480(&local_38);
  return local_39;
}


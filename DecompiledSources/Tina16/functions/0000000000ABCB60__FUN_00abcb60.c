/* Ghidra address: 00abcb60 */
/* Ghidra symbol: FUN_00abcb60 */


int FUN_00abcb60(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  longlong local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_50 = auStack_78;
  local_40 = 0;
  local_20[0] = 0;
  local_24 = -1;
  puVar1 = auStack_78;
  if ((*(int *)(param_1 + 0x6c) != 0) &&
     (puVar1 = auStack_78, param_2 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c))) {
    if (param_2 < *(int *)(param_1 + 0x68)) {
      local_34 = 0;
    }
    else {
      local_34 = param_2 - *(int *)(param_1 + 0x68);
    }
    if (param_4 == '\0') {
      FUN_00414480(local_20);
      local_48 = *(undefined8 *)(param_1 + 0xd0);
      FUN_0043e600(local_20,local_48);
      FUN_00414b50(&local_40,local_20[0]);
      FUN_00414480(local_20);
    }
    else {
      local_50 = auStack_78;
      FUN_00414b50(&local_40,*(undefined8 *)(param_1 + 0xd0));
    }
    lVar2 = FUN_00416740(local_40);
    uVar3 = FUN_00416740(param_3);
    local_30 = FUN_00a71610(lVar2 + (longlong)local_34 * 2,uVar3);
    puVar1 = local_50;
    if (local_30 != 0) {
      local_24 = *(int *)(param_1 + 0x68) + (int)((local_30 - lVar2) / 2);
    }
  }
  local_50 = puVar1;
  FUN_00414480(&local_40);
  FUN_00414480(local_20);
  return local_24;
}


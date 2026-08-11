/* Ghidra address: 00afe6b0 */
/* Ghidra symbol: FUN_00afe6b0 */


void FUN_00afe6b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_40 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  puVar1 = auStack_98;
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    local_78 = param_5;
    (**(code **)(param_1 + 0x5e8))(*(undefined8 *)(param_1 + 0x5f0),param_1,param_3,param_4);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  if (*(longlong *)(param_1 + 0x820) != 0) {
    FUN_00414480(local_20);
    FUN_0043e600(local_20,param_3);
    iVar2 = FUN_0043e420(local_20[0],L"refresh");
    local_29 = iVar2 == 0;
    FUN_00414480(local_20);
    if (local_29 != '\0') {
      local_28 = FUN_004170c0(&DAT_00afe984,param_5,1);
      if (local_28 < 1) {
        FUN_009ec440(&local_58,param_5);
        local_24 = FUN_0043fc50(local_58,0xffffffff);
      }
      else {
        FUN_009ec440(&local_50,param_5);
        FUN_00416dc0(&local_48,local_50,1,local_28 + -1);
        local_24 = FUN_0043fc50(local_48,0xffffffff);
      }
      if (-1 < local_24) {
        if (local_24 == 0) {
          local_24 = 1;
        }
        FUN_0043e1a0(&local_60,param_5);
        local_28 = FUN_004170c0(L"url=",local_60,1);
        if (local_28 < 1) {
          FUN_00414480(param_1 + 0x8d8);
        }
        else {
          local_30 = 0;
          if (param_5 != 0) {
            local_30 = *(int *)(param_5 + -4);
          }
          FUN_00416dc0(param_1 + 0x8d8,param_5,local_28 + 4,(local_30 - local_28) + -3);
        }
        *(int *)(param_1 + 0x8d0) = local_24;
      }
    }
  }
  FUN_00414560(&local_60,4);
  FUN_00414480(local_20);
  return;
}


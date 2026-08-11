/* Ghidra address: 007287b0 */
/* Ghidra symbol: FUN_007287b0 */


undefined8 FUN_007287b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  bool local_45;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_88;
  local_68 = 0;
  local_40 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_38 = 0;
  if (*(longlong *)(param_1 + 0x90) == 0) {
    local_45 = false;
    local_60 = auStack_88;
  }
  else {
    local_44 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x68))
                         (*(longlong **)(param_1 + 0x90),param_1 + 0xe0);
    local_45 = (local_44 & 0x80000000) == 0;
  }
  if (local_45 != false) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffe6);
    local_4c = (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0xe0),&local_40);
    if ((local_4c & 0x80000000) == 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0));
      if (iVar1 == 0) {
        local_50 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x80))
                             (*(longlong **)(param_1 + 0x90),&local_30);
        if ((local_50 & 0x80000000) == 0) {
          FUN_00414480(&local_28);
          FUN_004167d0(&local_28,local_30);
          FUN_00414480(local_20);
          FUN_005d1ea0(local_20,local_40,local_28,1);
          FUN_00414ad0(param_1 + 0xa0,local_20[0]);
          FUN_00414480(local_20);
          FUN_00414480(&local_28);
          thunk_FUN_0398fb79(local_30);
        }
        else {
          FUN_00414480(param_1 + 0xa0);
        }
      }
      else {
        FUN_00414480(&local_38);
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))
                  (*(longlong **)(param_1 + 0xb0),&local_68,0);
        local_58 = local_68;
        FUN_005d1ea0(&local_38,local_40,local_68,1);
        FUN_00414ad0(param_1 + 0xa0,local_38);
        FUN_00414480(&local_38);
      }
    }
  }
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0xa0));
  FUN_00414480(&local_68);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414560(&local_28,2);
  return param_2;
}


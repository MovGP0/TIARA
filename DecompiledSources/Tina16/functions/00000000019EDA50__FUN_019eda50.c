/* Ghidra address: 019eda50 */
/* Ghidra symbol: FUN_019eda50 */


undefined8 FUN_019eda50(longlong param_1,int param_2,int param_3,uint param_4,undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_1a8 [48];
  undefined8 local_178 [33];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  char local_39;
  undefined8 local_30;
  longlong local_20 [2];
  
  local_50 = auStack_1a8;
  local_70 = 0;
  local_178[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar1 = (ulonglong)(param_2 - 1);
  local_39 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2d0))
                       (*(longlong **)(param_1 + 0x58),uVar1,local_20);
  if (local_39 == '\x05') {
    if (param_4 < 8) {
      bVar3 = ((int)CONCAT71((int7)(uVar1 >> 8),1) << ((byte)param_4 & 0x1f) & 0x90U) != 0;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (param_3 == 3)) {
      local_30 = *(undefined8 *)(*(longlong *)(local_20[0] + 1) + 0x10);
      FUN_016b9450(&local_58,*(undefined8 *)(*(longlong *)(local_20[0] + 1) + 0x10));
      FUN_00416880(param_5,local_58);
    }
    else {
      lVar2 = (longlong)(param_3 + -1);
      FUN_004167a0(&local_60,*(undefined8 *)(*(longlong *)(local_20[0] + 9) + lVar2 * 8));
      FUN_00b8f030(local_60);
      local_30 = *(undefined8 *)(*(longlong *)(local_20[0] + 1) + lVar2 * 8);
      FUN_016b9450(&local_68,*(undefined8 *)(*(longlong *)(local_20[0] + 1) + lVar2 * 8));
      FUN_00416880(param_5,local_68);
    }
  }
  else {
    local_30 = 0;
    FUN_00414480(param_5);
  }
  FUN_004144d0(local_178);
  FUN_00414590(&local_70,2);
  FUN_00414480(&local_60);
  FUN_004144d0(&local_58);
  return local_30;
}


/* Ghidra address: 00cd3070 */
/* Ghidra symbol: FUN_00cd3070 */


undefined8 FUN_00cd3070(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  byte *local_40;
  int local_38;
  int local_34;
  byte *local_30;
  int *local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_00414480(param_2);
  }
  else {
    local_50 = auStack_88;
    local_28 = (int *)(**(code **)PTR_DAT_02003ef0)(*(longlong *)(param_1 + 0x20));
    FUN_00414480(local_20);
    local_30 = *(byte **)(local_28 + 2);
    local_34 = *local_28;
    FUN_00414480(local_20);
    local_40 = local_30;
    local_38 = 0;
    iVar1 = local_34;
    if (-1 < local_34 + -1) {
      do {
        if (local_38 != 0) {
          FUN_00416ad0(local_20,&DAT_00cd3204);
        }
        local_68[0] = (uint)*local_40;
        local_60 = 0;
        FUN_00876cf0(&local_58,L"%.2x",local_68,0);
        FUN_00416ad0(local_20,local_58);
        local_40 = local_40 + 1;
        local_38 = local_38 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00414ad0(param_2,local_20[0]);
    FUN_00414480(local_20);
  }
  FUN_00414480(&local_58);
  FUN_00414480(local_20);
  return param_2;
}


/* Ghidra address: 00cd2ae0 */
/* Ghidra symbol: FUN_00cd2ae0 */


undefined8 FUN_00cd2ae0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  byte *local_38;
  int local_30;
  int local_2c;
  byte *local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  piVar1 = *(int **)(*(longlong *)(param_1 + 8) + 0x10);
  local_28 = *(byte **)(piVar1 + 2);
  local_2c = *piVar1;
  FUN_00414480(local_20);
  local_38 = local_28;
  local_30 = 0;
  iVar2 = local_2c;
  if (-1 < local_2c + -1) {
    do {
      if (local_30 != 0) {
        FUN_00416ad0(local_20,&DAT_00cd2c44);
      }
      local_68[0] = (uint)*local_38;
      local_60 = 0;
      FUN_00876cf0(&local_58,L"%.2x",local_68,0);
      FUN_00416ad0(local_20,local_58);
      local_38 = local_38 + 1;
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(&local_58);
  FUN_00414480(local_20);
  return param_2;
}


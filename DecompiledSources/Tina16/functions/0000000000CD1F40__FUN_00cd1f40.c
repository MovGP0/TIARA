/* Ghidra address: 00cd1f40 */
/* Ghidra symbol: FUN_00cd1f40 */


undefined8 FUN_00cd1f40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  uint local_98 [2];
  undefined1 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  byte *local_78;
  int local_68;
  int local_64;
  byte local_60 [64];
  undefined8 local_20 [2];
  
  local_80 = auStack_b8;
  local_88 = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  FUN_00cd1f00(param_1,&local_64);
  FUN_00414480(local_20);
  local_68 = 0;
  if (-1 < local_64 + -1) {
    local_78 = local_60;
    iVar1 = local_64;
    do {
      if (local_68 != 0) {
        FUN_00416ad0(local_20,&DAT_00cd20b4);
      }
      local_98[0] = (uint)*local_78;
      local_90 = 0;
      FUN_00876cf0(&local_88,L"%.2x",local_98,0);
      FUN_00416ad0(local_20,local_88);
      local_68 = local_68 + 1;
      local_78 = local_78 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(&local_88);
  FUN_00414480(local_20);
  return param_2;
}


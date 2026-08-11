/* Ghidra address: 00b27970 */
/* Ghidra symbol: FUN_00b27970 */


undefined8 FUN_00b27970(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  char local_19;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_30 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  local_19 = '\x01';
  FUN_004168b0(&local_40,param_2);
  FUN_0043ea00(&local_38,local_40);
  FUN_004168e0(&local_18,local_38);
  FUN_00b15430(&local_48,local_18,&DAT_00b27cd8,&DAT_00b27ce4);
  FUN_00414be0(&local_18,local_48);
  FUN_00b15430(&local_50,local_18,&DAT_00b27cf0,&DAT_00b27cf8);
  FUN_00414be0(&local_18,local_50);
  local_20 = 0;
  local_70 = local_18;
  if (local_18 != (undefined2 *)0x0) {
    local_20 = *(uint *)(local_18 + -2) >> 1;
  }
  if ((1 < local_20) && (local_18[1] == 0x3a)) {
    local_18[1] = *local_18;
    *local_18 = 1;
    local_24 = 0;
    if (local_18 != (undefined2 *)0x0) {
      local_24 = *(uint *)(local_18 + -2) >> 1;
    }
    if ((2 < local_24) && (local_18[2] == 3)) {
      local_10 = 0;
      FUN_00416430(&local_10,local_18,1,2);
      local_28 = 0;
      if (local_70 != (undefined2 *)0x0) {
        local_28 = *(uint *)(local_70 + -2) >> 1;
      }
      FUN_00416430(&local_58,local_18,4,local_28 - 3);
      FUN_00416020(&local_18,local_10,local_58);
      FUN_00414520(&local_10);
    }
  }
  iVar1 = FUN_00417170(&DAT_00b27d00,local_18,1);
  if (0 < iVar1) {
    local_19 = '\0';
    FUN_00b15430(&local_60,local_18,&DAT_00b27d00,&DAT_00b27cf8);
    FUN_00414be0(&local_18,local_60);
  }
  if (local_19 == '\0') {
    FUN_00b15100(param_1,local_18);
  }
  else {
    FUN_00b15100(&local_68,local_18);
    FUN_004156b0(param_1,&LAB_00b27d10,local_68);
  }
  FUN_004144d0(&local_68);
  FUN_004145c0(&local_60,4);
  FUN_00414560(&local_40,2);
  FUN_00414520(&local_18);
  return param_1;
}


/* Ghidra address: 00c6f5f0 */
/* Ghidra symbol: FUN_00c6f5f0 */


void FUN_00c6f5f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined1 *local_2b0;
  char local_2a3;
  char local_2a2;
  char local_2a1;
  undefined8 local_2a0;
  longlong local_298;
  undefined1 local_28c [524];
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 *local_68;
  undefined4 local_60;
  int local_24;
  undefined8 local_20 [2];
  
  local_2b0 = auStack_2e8;
  local_2b8 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(char *)(param_1 + 9) != '\0') {
    local_24 = 0;
    while (iVar2 = thunk_FUN_041b2403(param_2,0x1004,0,0), local_24 < iVar2) {
      local_2a3 = '\0';
      local_80 = 5;
      local_7c = local_24;
      local_78 = 0;
      local_68 = local_28c;
      local_60 = 0x104;
      thunk_FUN_041b2403(param_2,0x104b,0,&local_80);
      FUN_004167d0(&local_2b8,local_28c);
      FUN_00441920(&local_2a0,local_2b8);
      FUN_00414480(local_20);
      FUN_0044f8b0(local_20,local_res18[0]);
      local_2c8 = local_2a0;
      FUN_00416cd0(&local_298,3);
      FUN_00414480(local_20);
      if (local_298 != 0) {
        cVar1 = FUN_00b96de0(local_298);
        local_2a1 = cVar1 != '\0';
        if ((*(char *)(param_1 + 8) == '\0') && ((bool)local_2a1)) {
          thunk_FUN_041b2403(param_2,0x1008,(longlong)local_24,0);
          local_2a3 = '\x01';
        }
        if (((local_2a1 == '\0') && (local_2a2 = '\x01', *(longlong *)(param_1 + 0x10) != 0)) &&
           ((**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_1),
           local_2a2 == '\0')) {
          thunk_FUN_041b2403(param_2,0x1008,(longlong)local_24,0);
          local_2a3 = '\x01';
        }
        if (local_2a3 == '\0') {
          local_24 = local_24 + 1;
        }
      }
    }
  }
  FUN_00414480(&local_2b8);
  FUN_00414560(&local_2a0,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return;
}


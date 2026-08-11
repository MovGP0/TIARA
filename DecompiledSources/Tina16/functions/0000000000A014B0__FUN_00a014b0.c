/* Ghidra address: 00a014b0 */
/* Ghidra symbol: FUN_00a014b0 */


int FUN_00a014b0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_48 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_24 = FUN_004b5e60(param_1,param_2);
  if (local_24 == -1) {
    FUN_00414480(local_20);
    FUN_0043e600(local_20,param_2);
    FUN_00414b50(&local_30,local_20[0]);
    FUN_00414480(local_20);
    local_24 = (**(code **)(*param_1 + 0x28))(param_1);
    do {
      local_24 = local_24 + -1;
      if (local_24 < 0) break;
      (**(code **)(*param_1 + 0x18))(param_1,&local_48,local_24);
      iVar1 = FUN_004170c0(local_48,local_30,1);
    } while (iVar1 == 0);
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return local_24;
}


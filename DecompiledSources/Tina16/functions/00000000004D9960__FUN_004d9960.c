/* Ghidra address: 004d9960 */
/* Ghidra symbol: FUN_004d9960 */


void FUN_004d9960(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 *local_40;
  bool local_32;
  bool local_31;
  undefined8 *local_30;
  int local_24;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = (undefined8 *)0x0;
  local_24 = FUN_004d9830(&DAT_00497f80,param_2);
  if (local_24 < 0) {
    local_32 = true;
  }
  else {
    (**(code **)(*DAT_02011608 + 0x18))(DAT_02011608,&local_48,local_24);
    local_30 = local_48;
    if (param_1 == local_48) {
      local_31 = true;
    }
    else if ((param_1 == (undefined8 *)0x0) || (local_48 == (undefined8 *)0x0)) {
      local_31 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_1,local_48);
      local_31 = iVar1 == 0;
    }
    local_32 = local_31 == false;
  }
  if (local_32 != false) {
    local_20 = FUN_004d98b0(&DAT_00497ba8,1,param_2);
    (**(code **)(*DAT_02011608 + 0x80))(DAT_02011608,param_1,local_20);
  }
  FUN_00414480(&local_48);
  return;
}


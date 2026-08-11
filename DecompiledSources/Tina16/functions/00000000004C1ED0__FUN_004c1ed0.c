/* Ghidra address: 004c1ed0 */
/* Ghidra symbol: FUN_004c1ed0 */


undefined8 FUN_004c1ed0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_80 = auStack_b8;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 == '\x06') {
    FUN_004bea90(param_1,&local_2c,1);
    FUN_00419260(&local_38,&DAT_00406578,1,(longlong)local_2c);
    FUN_004bec10(param_1,local_38,(longlong)local_2c);
    FUN_00414480(&local_20);
    local_60 = FUN_00458d50();
    local_68 = local_38;
    if (local_38 != 0) {
      local_68 = *(longlong *)(local_38 + -8);
    }
    local_98 = (undefined4)local_68;
    FUN_0045aba0(local_60,&local_20,local_38,0);
    FUN_00414ad0(param_2,local_20);
    FUN_00414480(&local_20);
  }
  else if (cVar1 == '\f') {
    FUN_004bea90(param_1,&local_2c,4);
    FUN_00419260(&local_38,&DAT_00406578,1,(longlong)local_2c);
    FUN_004bec10(param_1,local_38,(longlong)local_2c);
    FUN_00414480(&local_28);
    local_70 = FUN_00458d50();
    local_78 = local_38;
    if (local_38 != 0) {
      local_78 = *(longlong *)(local_38 + -8);
    }
    local_98 = (undefined4)local_78;
    FUN_0045aba0(local_70,&local_28,local_38,0);
    FUN_00414ad0(param_2,local_28);
    FUN_00414480(&local_28);
  }
  else if (cVar1 == '\x12') {
    FUN_004bea90(param_1,&local_2c,4);
    FUN_00419260(&local_38,&DAT_00406578,1,(longlong)(local_2c * 2));
    FUN_004bec10(param_1,local_38,(longlong)(local_2c * 2));
    FUN_00414480(&local_10);
    local_40 = FUN_0045adf0();
    local_48 = local_38;
    if (local_38 != 0) {
      local_48 = *(longlong *)(local_38 + -8);
    }
    local_98 = (undefined4)local_48;
    FUN_0045aba0(local_40,&local_10,local_38,0);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  else if (cVar1 == '\x14') {
    FUN_004bea90(param_1,&local_2c,4);
    FUN_00419260(&local_38,&DAT_00406578,1,(longlong)local_2c);
    FUN_004bec10(param_1,local_38,(longlong)local_2c);
    FUN_00414480(&local_18);
    local_50 = FUN_0045ae90();
    local_58 = local_38;
    if (local_38 != 0) {
      local_58 = *(longlong *)(local_38 + -8);
    }
    local_98 = (undefined4)local_58;
    FUN_0045aba0(local_50,&local_18,local_38,0);
    FUN_00414ad0(param_2,local_18);
    FUN_00414480(&local_18);
  }
  else {
    FUN_004bdee0();
  }
  FUN_00419430(&local_38,&DAT_00406578);
  FUN_00414560(&local_28,4);
  return param_2;
}


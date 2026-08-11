/* Ghidra address: 00ad3070 */
/* Ghidra symbol: FUN_00ad3070 */


undefined8 FUN_00ad3070(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  undefined1 *local_30;
  undefined4 local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_34 = *(int *)(param_1 + 0xc);
  local_38 = *(int *)(param_1 + 8);
  if (local_38 < local_34) {
    local_10 = 0;
    local_30 = auStack_58;
    FUN_00a028f0(*(undefined8 *)(param_1 + 0x30),&local_10,local_38,local_34);
    local_18 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(local_18 + 0x28) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(local_18 + 0x28) + 0x18);
    }
    FUN_00ae79f0(param_2,local_10,local_1c);
    FUN_00414480(&local_10);
  }
  else {
    FUN_00414480(param_2);
  }
  return param_2;
}


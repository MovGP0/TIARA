/* Ghidra address: 015dd260 */
/* Ghidra symbol: FUN_015dd260 */


longlong FUN_015dd260(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_24;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_res18 = param_3;
  puVar1 = auStack_68;
  if (param_3 == 0) {
    FUN_004b6dc0(param_2,0);
    local_res18 = (**(code **)*param_2)(param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  if (local_res18 < 0x2711) {
    local_14 = (int)local_res18;
  }
  else {
    local_14 = 10000;
  }
  local_20 = local_res18;
  local_10 = FUN_004095c0((longlong)local_14);
  while (local_res18 != 0) {
    if (local_14 < local_res18) {
      local_24 = local_14;
    }
    else {
      local_24 = (int)local_res18;
    }
    FUN_004b84c0(param_2,local_10,(longlong)local_24);
    FUN_004b89e0(param_1,local_10,(longlong)local_24);
    local_res18 = local_res18 - local_24;
    if (local_res18 < 10000) {
      local_14 = (int)local_res18;
    }
    else {
      local_14 = 10000;
    }
  }
  FUN_004095f0(local_10,(longlong)local_14);
  return local_20;
}


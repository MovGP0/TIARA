/* Ghidra address: 004b8ba0 */
/* Ghidra symbol: FUN_004b8ba0 */


longlong FUN_004b8ba0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_30;
  int local_2c;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_20[0] = 0;
  local_res18 = param_3;
  puVar1 = auStack_68;
  if (param_3 < 1) {
    FUN_004b6dc0(param_2,0);
    local_res18 = (**(code **)*param_2)(param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_28 = local_res18;
  if (local_res18 < 0xf001) {
    local_2c = (int)local_res18;
  }
  else {
    local_2c = 0xf000;
  }
  FUN_00419260(local_20,&DAT_00406578,1,(longlong)local_2c);
  for (; local_res18 != 0; local_res18 = local_res18 - local_30) {
    if (local_2c < local_res18) {
      local_30 = local_2c;
    }
    else {
      local_30 = (int)local_res18;
    }
    lVar2 = (longlong)local_30;
    FUN_004b8420(param_2,local_20,lVar2);
    FUN_004b8a80(param_1,local_20[0],lVar2);
  }
  FUN_00419430(local_20,&DAT_00406578);
  FUN_00419430(local_20,&DAT_00406578);
  return local_28;
}


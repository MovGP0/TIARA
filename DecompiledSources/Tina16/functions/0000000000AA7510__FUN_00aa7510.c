/* Ghidra address: 00aa7510 */
/* Ghidra symbol: FUN_00aa7510 */


void FUN_00aa7510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 local_39;
  longlong local_38;
  char local_29;
  longlong local_28;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_88;
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  local_29 = '\0';
  *param_4 = 0;
  FUN_00414480(&local_10);
  FUN_0043ea00(&local_10,param_2);
  FUN_00414b50(&local_18,local_10);
  FUN_00414480(&local_10);
  local_1c = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb0))
                       (*(longlong **)(param_1 + 0x2a8),local_18);
  local_20 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0xb0))
                       (*(longlong **)(param_1 + 0x240),local_18);
  if ((local_1c == -1) && (-1 < local_20)) {
    local_39 = 0;
    local_38 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x30))
                         (*(longlong **)(param_1 + 0x240),local_20);
    cVar1 = FUN_004113d0(local_38,&PTR_FUN_00a83768);
    if (cVar1 != '\0') {
      local_39 = *(undefined1 *)(local_38 + 0x1a8);
    }
    local_28 = FUN_00a448a0(param_3,local_39);
    if (local_28 == 0) {
      local_29 = '\x01';
    }
    else {
      local_48 = *(undefined8 *)(param_1 + 0x2a8);
      FUN_00a29f70(local_48,local_18,local_28);
      FUN_00a2a110(*(undefined8 *)(param_1 + 0x2a8),local_18);
    }
  }
  if (((-1 < local_1c) || (local_28 != 0)) || (local_29 != '\0')) {
    local_68 = param_4;
    FUN_00aa7430(param_1,local_18,local_20,local_29);
  }
  FUN_00414560(&local_18,2);
  return;
}


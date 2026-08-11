/* Ghidra address: 00c7b6a0 */
/* Ghidra symbol: FUN_00c7b6a0 */


void FUN_00c7b6a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  lVar1 = (**(code **)*param_1)(param_1);
  if (lVar1 != 0) {
    local_18 = FUN_004095c0(0xcd08);
    local_10 = FUN_004095c0(0x11160);
    do {
      local_1c = (**(code **)(*param_1 + 0x18))(param_1,local_18,0xcd08);
      local_20 = FUN_00c7b690(local_18,local_10,local_1c);
      (**(code **)(*param_2 + 0x20))(param_2,local_10,local_20);
    } while (local_1c == 0xcd08);
    FUN_004095f0(local_10);
    FUN_004095f0(local_18);
  }
  return;
}


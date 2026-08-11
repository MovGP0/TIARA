/* Ghidra address: 00bbbdb0 */
/* Ghidra symbol: FUN_00bbbdb0 */


void FUN_00bbbdb0(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  
  local_50 = auStack_78;
  local_24 = 0;
  local_40 = param_1[1];
  while (local_24 < *(int *)(local_40 + 0x10)) {
    do {
      local_38 = FUN_004aeac0(local_40,local_24);
      local_24 = local_24 + 1;
      local_30 = FUN_004aeac0(local_40,local_24);
      local_24 = local_24 + 1;
      (**(code **)*param_1)(param_1,&local_38);
    } while (local_24 < *(int *)(local_40 + 0x10));
  }
  return;
}


/* Ghidra address: 00ef8bd0 */
/* Ghidra symbol: FUN_00ef8bd0 */


void FUN_00ef8bd0(undefined8 param_1,undefined8 param_2,double param_3,longlong param_4)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_40;
  int local_30;
  undefined4 local_2c;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  byte local_9;
  
  local_40 = auStack_78;
  if (*(char *)(param_4 + 0x92) == '\0') {
    FUN_00ef83a0(param_4);
    local_18 = FUN_004095c0(0x1000);
    local_28 = FUN_004095c0(0x40);
    local_20 = FUN_004095c0(0x8000);
    FUN_00ef4910(&local_20,param_4);
    FUN_00ef71d0(&local_20,&local_9,param_4);
    if (*PTR_DAT_020052b8 == '\0') {
      FUN_019b9a90(param_3 * 0.03,param_4,0);
    }
    if (*(char *)(param_4 + 0x92) == '\0') {
      FUN_00ef81f0(param_4 + 0x30);
      FUN_00ef81f0(param_4 + 0x38);
      FUN_00ef8480(auStack_78);
      local_2c = 0;
      for (local_30 = 0;
          (*(char *)(local_18 + (longlong)local_30 * 0x40) != -1 && (local_30 <= (int)(uint)local_9)
          ); local_30 = local_30 + 1) {
      }
      local_58 = param_4;
      FUN_00ef89a0(auStack_78,0,0,param_3 * 0.97);
      FUN_00ef4890(&local_20,param_4);
      if (local_18 != 0) {
        FUN_004095f0(local_18);
      }
      if (local_28 != 0) {
        FUN_004095f0(local_28);
      }
      if (local_20 != 0) {
        FUN_004095f0(local_20);
      }
    }
    else {
      FUN_00ef4890(&local_20,param_4);
    }
  }
  return;
}


/* Ghidra address: 00469800 */
/* Ghidra symbol: FUN_00469800 */


void FUN_00469800(ushort *param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  ulonglong local_20;
  ulonglong local_18;
  char local_9;
  
  local_30 = auStack_58;
  local_9 = '\0';
  local_18 = FUN_004634b0(param_1);
  local_20 = FUN_004634b0(param_2);
  if ((int)param_3 < 7) {
    if (param_3 == 6) {
      local_18 = local_18 << ((byte)local_20 & 0x3f);
      goto LAB_00469966;
    }
    if (param_3 < 3) {
      if (param_3 == 0) {
        local_18 = local_18 + local_20;
      }
      else if (param_3 == 1) {
        local_18 = local_18 - local_20;
      }
      else if (param_3 == 2) {
        local_18 = local_18 * local_20;
      }
      goto LAB_00469966;
    }
    if (param_3 == 3) {
      local_9 = '\x01';
      goto LAB_00469966;
    }
    if (param_3 == 4) {
      local_18 = (longlong)local_18 / (longlong)local_20;
      goto LAB_00469966;
    }
    if (param_3 == 5) {
      local_18 = (longlong)local_18 % (longlong)local_20;
      goto LAB_00469966;
    }
  }
  else {
    if (param_3 == 7) {
      local_18 = local_18 >> ((byte)local_20 & 0x3f);
      goto LAB_00469966;
    }
    if (param_3 == 8) {
      local_18 = local_18 & local_20;
      goto LAB_00469966;
    }
    if (param_3 == 9) {
      local_18 = local_18 | local_20;
      goto LAB_00469966;
    }
    if (param_3 == 10) {
      local_18 = local_18 ^ local_20;
      goto LAB_00469966;
    }
  }
  FUN_00460210();
LAB_00469966:
  if (local_9 == '\0') {
    if ((*param_1 & 0xbfe8) != 0) {
      FUN_00460ac0(param_1);
    }
    *(ulonglong *)(param_1 + 4) = local_18;
    *param_1 = 0x14;
  }
  else {
    FUN_00469560(param_1,param_2,param_3);
  }
  return;
}


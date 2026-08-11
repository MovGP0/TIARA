/* Ghidra address: 00978cb0 */
/* Ghidra symbol: FUN_00978cb0 */


void FUN_00978cb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int param_5,undefined1 param_6)

{
  undefined1 auStack_68 [52];
  int local_34;
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 *local_20;
  
  local_30 = auStack_68;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    local_24 = 0;
    if (-1 < param_5) {
      local_34 = param_5 + 1;
      local_20 = param_4;
      do {
        FUN_00978950(param_1,*local_20,param_6);
        local_20 = local_20 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
  }
  return;
}


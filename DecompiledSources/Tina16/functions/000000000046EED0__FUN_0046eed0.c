/* Ghidra address: 0046eed0 */
/* Ghidra symbol: FUN_0046eed0 */


char FUN_0046eed0(ushort param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  bool local_9;
  
  local_20 = auStack_48;
  if (((DAT_020115b8 == 0) || (param_1 < 0x100)) || (0x7ff < param_1)) {
    local_9 = false;
  }
  else {
    local_9 = true;
  }
  if (local_9 != false) {
    FUN_00411e10(DAT_020115c0,0xffffffff);
    local_18 = DAT_020115b8;
    if (DAT_020115b8 != 0) {
      local_18 = *(longlong *)(DAT_020115b8 + -8);
    }
    local_9 = (int)(param_1 - 0x100) < local_18;
    if (local_9) {
      *param_2 = *(longlong *)(DAT_020115b8 + (longlong)(int)(param_1 - 0x100) * 8);
      if ((*param_2 == 0) || (*param_2 == DAT_01dc4398)) {
        local_9 = false;
      }
      else {
        local_9 = true;
      }
    }
    FUN_00412130(DAT_020115c0);
  }
  return local_9;
}


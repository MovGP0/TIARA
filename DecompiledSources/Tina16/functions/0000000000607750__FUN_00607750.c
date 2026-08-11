/* Ghidra address: 00607750 */
/* Ghidra symbol: FUN_00607750 */


void FUN_00607750(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  longlong local_18;
  int local_c;
  
  local_30 = auStack_58;
  if (param_1 != 0) {
    local_18 = FUN_004afa30(DAT_01dee370);
    local_c = *(int *)(local_18 + 0x10) + -1;
    if (-1 < local_c) {
      do {
        local_20 = FUN_004aeac0(local_18,local_c);
        if ((*(longlong *)(local_20 + 0x98) != 0) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(local_20 + 0x98) + 0x60) + 0x10) == param_1))
        {
          FUN_00607910(local_20);
        }
        local_c = local_c + -1;
      } while (local_c != -1);
    }
    FUN_00412130(*(undefined8 *)(DAT_01dee370 + 0x10));
  }
  return;
}


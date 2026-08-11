/* Ghidra address: 0041c5f0 */
/* Ghidra symbol: FUN_0041c5f0 */


void FUN_0041c5f0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  int local_10;
  int local_c;
  
  local_30 = auStack_58;
  local_10 = (int)(((param_3 >> 0xd) + (param_3 >> 5)) % 0x1f);
  FUN_0041c360(param_1);
  local_20 = *(longlong *)(param_2 + (longlong)local_10 * 8);
  local_28 = local_20;
  if (local_20 != 0) {
    local_28 = *(longlong *)(local_20 + -8);
  }
  iVar1 = (int)local_28;
  local_c = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(ulonglong *)(*(longlong *)(param_2 + (longlong)local_10 * 8) + (longlong)local_c * 8) ==
          param_3) {
        *(undefined8 *)(*(longlong *)(param_2 + (longlong)local_10 * 8) + (longlong)local_c * 8) = 0
        ;
        FUN_0041c6d0(0,local_30);
        return;
      }
      local_c = local_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0041c380(param_1);
  return;
}


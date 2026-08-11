/* Ghidra address: 004b0000 */
/* Ghidra symbol: FUN_004b0000 */


void FUN_004b0000(longlong param_1)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_30 = FUN_004dccc0(*(longlong *)(param_1 + 0x18));
    iVar1 = *(int *)(local_30 + 0x10);
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_0041b800(*(longlong *)(local_30 + 8) + (longlong)local_24 * 8);
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00598070(local_30 + 8);
    local_20 = *(longlong *)(param_1 + 0x18);
    FUN_00412130(*(undefined8 *)(local_20 + 0x10));
  }
  return;
}


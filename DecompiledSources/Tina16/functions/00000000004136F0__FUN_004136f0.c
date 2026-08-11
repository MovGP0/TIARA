/* Ghidra address: 004136f0 */
/* Ghidra symbol: FUN_004136f0 */


void FUN_004136f0(void)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  code *local_20;
  longlong local_18;
  int local_10;
  int local_c;
  
  local_30 = auStack_58;
  if (PTR_DAT_0200ac90 != (undefined *)0x0) {
    local_c = *(int *)PTR_DAT_0200ac90;
    local_10 = 0;
    local_18 = *(longlong *)(PTR_DAT_0200ac90 + 8);
    if (0 < local_c) {
      do {
        local_20 = *(code **)(local_18 + (longlong)local_10 * 0x10);
        DAT_0200ac98 = local_10 + 1;
        local_10 = DAT_0200ac98;
        if ((local_20 != (code *)0x0) && (*(longlong *)local_20 != 0)) {
          (*local_20)();
        }
      } while (local_10 < local_c);
    }
  }
  return;
}


/* Ghidra address: 00413650 */
/* Ghidra symbol: FUN_00413650 */


void FUN_00413650(void)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  code *local_20;
  longlong local_18;
  int local_c;
  
  local_30 = auStack_58;
  if (PTR_DAT_0200ac90 != (undefined *)0x0) {
    local_18 = *(longlong *)(PTR_DAT_0200ac90 + 8);
    local_c = DAT_0200ac98;
    while (0 < local_c) {
      DAT_0200ac98 = local_c + -1;
      local_20 = *(code **)(local_18 + 8 + (longlong)DAT_0200ac98 * 0x10);
      local_c = DAT_0200ac98;
      if ((local_20 != (code *)0x0) && (*(longlong *)local_20 != 0)) {
        (*local_20)();
      }
    }
  }
  return;
}


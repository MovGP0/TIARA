/* Ghidra address: 01348e00 */
/* Ghidra symbol: FUN_01348e00 */


void FUN_01348e00(undefined8 param_1,longlong param_2)

{
  if (*PTR_DAT_02005828 != '\0') {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x6a0));
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x748) + 0x337) = 0;
  FUN_0165dc50(*(undefined8 *)(*(longlong *)(param_2 + 0x748) + 0x110));
  *PTR_DAT_02004fa8 = 0;
  *PTR_DAT_02003b18 = 0;
  return;
}


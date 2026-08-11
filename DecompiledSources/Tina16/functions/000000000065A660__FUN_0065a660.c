/* Ghidra address: 0065a660 */
/* Ghidra symbol: FUN_0065a660 */


void FUN_0065a660(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x80))(*(undefined8 *)(lVar1 + 0x88));
  }
  return;
}


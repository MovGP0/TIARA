/* Ghidra address: 01a847f0 */
/* Ghidra symbol: FUN_01a847f0 */


void FUN_01a847f0(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFTableMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  *(undefined1 *)(param_1 + 0x7a8) = 0x15;
  FUN_01ad6200(*(undefined8 *)(param_1 + 0x798));
  FUN_00414480(&local_10);
  return;
}


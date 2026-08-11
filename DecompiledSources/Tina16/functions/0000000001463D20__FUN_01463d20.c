/* Ghidra address: 01463d20 */
/* Ghidra symbol: FUN_01463d20 */


void FUN_01463d20(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x410,*(undefined4 *)(param_1 + 0x6b8),L"EEExprBtn");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  *(undefined1 *)(param_1 + 0x858) = 0;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x770),1);
  FUN_014635d0(param_1);
  FUN_00414480(&local_10);
  return;
}


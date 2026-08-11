/* Ghidra address: 01465000 */
/* Ghidra symbol: FUN_01465000 */


void FUN_01465000(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x406,*(undefined4 *)(param_1 + 0x6b8),L"EEPaste");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  FUN_00680a40(*(undefined8 *)(param_1 + 0x750));
  FUN_00414480(&local_10);
  return;
}


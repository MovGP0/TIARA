/* Ghidra address: 01a794b0 */
/* Ghidra symbol: FUN_01a794b0 */


void FUN_01a794b0(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x410,*(undefined4 *)(param_1 + 0x6b8),L"DFSelectBtn");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  *(undefined1 *)(param_1 + 0x7a8) = 0;
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_01ad0970(*(longlong *)(param_1 + 0x798));
  }
  FUN_00414480(&local_10);
  return;
}


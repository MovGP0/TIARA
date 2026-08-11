/* Ghidra address: 01a79f20 */
/* Ghidra symbol: FUN_01a79f20 */


void FUN_01a79f20(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x410,*(undefined4 *)(param_1 + 0x6b8),L"RightScrollBtn");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    FUN_01ae2e30(*(undefined8 *)(param_1 + 0x798));
  }
  FUN_00414480(&local_10);
  return;
}


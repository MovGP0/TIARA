/* Ghidra address: 01a7a3a0 */
/* Ghidra symbol: FUN_01a7a3a0 */


void FUN_01a7a3a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x410,*(undefined4 *)(param_1 + 0x6b8),L"DownScrollCSBtn");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    FUN_01ad1550(*(undefined8 *)(param_1 + 0x798));
    FUN_01a89e80(param_1);
  }
  FUN_00414480(&local_10);
  return;
}


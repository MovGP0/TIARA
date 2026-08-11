/* Ghidra address: 00c26550 */
/* Ghidra symbol: FUN_00c26550 */


void FUN_00c26550(longlong param_1,undefined4 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 + 0x100ecU < *(ulonglong *)(param_1 + 0xe8)) {
    FUN_0041ddd0(&local_10,PTR_PTR_020050a0);
    FUN_00c1a320(local_10);
  }
  **(undefined4 **)(param_1 + 0xe8) = param_2;
  *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 4;
  FUN_00414480(&local_10);
  return;
}


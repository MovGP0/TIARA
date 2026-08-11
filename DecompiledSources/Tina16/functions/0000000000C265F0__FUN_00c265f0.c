/* Ghidra address: 00c265f0 */
/* Ghidra symbol: FUN_00c265f0 */


int FUN_00c265f0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  while (param_3 <= param_2) {
    if (param_1 + 0x100ecU < *(ulonglong *)(param_1 + 0xe8)) {
      FUN_0041ddd0(local_20,PTR_PTR_020050a0);
      FUN_00c1a320(local_20[0]);
    }
    lVar1 = (longlong)param_2;
    **(undefined4 **)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xf0 + lVar1 * 4);
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 4;
    if (param_2 == *(int *)(param_1 + 0x40f0 + lVar1 * 4)) {
      FUN_0041ddd0(&local_28,PTR_PTR_02004688);
      FUN_00c1a320(local_28);
    }
    param_2 = *(int *)(param_1 + 0x40f0 + lVar1 * 4);
  }
  FUN_00414560(&local_28,2);
  return param_2;
}


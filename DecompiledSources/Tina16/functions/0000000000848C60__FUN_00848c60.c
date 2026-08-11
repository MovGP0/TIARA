/* Ghidra address: 00848c60 */
/* Ghidra symbol: FUN_00848c60 */


void FUN_00848c60(longlong param_1,int param_2,byte param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x538) == 0) {
    FUN_0083da60(param_1 + 0x538,*(undefined4 *)(param_1 + 0x4a4),1);
  }
  if (*(int *)(param_1 + 0x4a4) <= param_2) {
    FUN_0041ddd0(&local_10,PTR_PTR_02004318);
    FUN_0083d530(local_10);
  }
  *(uint *)(*(longlong *)(param_1 + 0x538) + (longlong)(param_2 + 1) * 4) = (uint)param_3;
  FUN_00414480(&local_10);
  return;
}


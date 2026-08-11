/* Ghidra address: 00896400 */
/* Ghidra symbol: FUN_00896400 */


void FUN_00896400(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_18 = 0;
  FUN_0089b8c0(param_1);
  if (0x3f < *(uint *)(param_1 + 0x10)) {
    FUN_0041ddd0(&local_18,PTR_DAT_02001878);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00891c50,1,local_18);
    FUN_004134c0(uVar1);
  }
  *(undefined8 *)(param_1 + 0x18 + (ulonglong)*(uint *)(param_1 + 0x10) * 8) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_0089b920(param_1);
  FUN_00414480(&local_18);
  return;
}


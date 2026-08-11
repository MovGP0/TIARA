/* Ghidra address: 013ae5b0 */
/* Ghidra symbol: FUN_013ae5b0 */


void FUN_013ae5b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_00b08760(&PTR_FUN_0142ac28,1,param_3,0);
  FUN_00f42d60(*(undefined8 *)(param_1 + 0x408),local_res10[0],uVar2);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x6d0);
  FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4e0) + 1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}


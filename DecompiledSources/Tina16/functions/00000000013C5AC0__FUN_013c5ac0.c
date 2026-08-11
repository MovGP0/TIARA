/* Ghidra address: 013c5ac0 */
/* Ghidra symbol: FUN_013c5ac0 */


void FUN_013c5ac0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_00f211b0(*(undefined8 *)(param_1 + 0x300),local_res10[0]);
  if (lVar1 != 0) {
    FUN_004aee30(*(undefined8 *)(*(longlong *)(param_1 + 0x300) + 8),lVar1);
    FUN_00410f20(lVar1);
  }
  FUN_00414480(local_res10);
  return;
}


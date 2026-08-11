/* Ghidra address: 019ae710 */
/* Ghidra symbol: FUN_019ae710 */


void FUN_019ae710(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_019ae650(param_1,local_res10[0]);
  if (lVar1 != 0) {
    FUN_004aee50(*(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 8),lVar1,0);
    FUN_00410f20(lVar1);
  }
  FUN_00414480(local_res10);
  return;
}


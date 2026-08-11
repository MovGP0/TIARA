/* Ghidra address: 01565d50 */
/* Ghidra symbol: FUN_01565d50 */


void FUN_01565d50(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = (longlong)param_2;
  FUN_00414ad0(param_1 + 0x18 + lVar1 * 8,*(undefined8 *)(param_1 + 0x28 + lVar1 * 8));
  FUN_00414ad0(param_1 + 0x28 + lVar1 * 8,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}


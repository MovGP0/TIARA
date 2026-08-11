/* Ghidra address: 015405e0 */
/* Ghidra symbol: FUN_015405e0 */


bool FUN_015405e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = FUN_01540480(param_1,local_res18[0]);
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(lVar1 + 8);
  }
  FUN_00414480(local_res18);
  return lVar1 != 0;
}


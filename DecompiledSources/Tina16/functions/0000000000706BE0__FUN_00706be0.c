/* Ghidra address: 00706be0 */
/* Ghidra symbol: FUN_00706be0 */


void FUN_00706be0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x28),&PTR_FUN_006d1510);
  FUN_00703c80(*(undefined8 *)(lVar1 + 0x588),local_res10[0],param_3,param_3,0xffffffff,0xffffffff,
               param_4);
  FUN_00414480(local_res10);
  return;
}


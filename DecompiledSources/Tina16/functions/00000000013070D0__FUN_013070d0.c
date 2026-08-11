/* Ghidra address: 013070d0 */
/* Ghidra symbol: FUN_013070d0 */


longlong FUN_013070d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5)

{
  char cVar1;
  undefined8 local_res20;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_0043f750(&local_28,param_5);
  FUN_00416ba0(local_20,local_res20,local_28);
  local_30 = FUN_0065dd00(param_2,local_20[0]);
  if ((local_30 == 0) || (cVar1 = FUN_004113d0(local_30,&PTR_FUN_00670158), cVar1 == '\0')) {
    local_30 = 0;
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_res20);
  return local_30;
}


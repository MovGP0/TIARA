/* Ghidra address: 01c7aea0 */
/* Ghidra symbol: FUN_01c7aea0 */


undefined8 *
FUN_01c7aea0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(param_3,param_2);
  FUN_0064dd90(param_4,&local_10);
  if (local_10 != 0) {
    FUN_0064dd90(param_4,&local_18);
    FUN_00416cd0(param_2,4,*param_2,&PTR_DAT_01c7af68,local_18,&DAT_01c7af7c);
  }
  FUN_00414560(&local_18,2);
  return param_2;
}


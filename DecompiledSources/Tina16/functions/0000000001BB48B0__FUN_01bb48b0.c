/* Ghidra address: 01bb48b0 */
/* Ghidra symbol: FUN_01bb48b0 */


undefined1
FUN_01bb48b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_9;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_18 = param_1;
  FUN_00414610(param_2);
  *local_res20 = 0;
  local_9 = FUN_01bb4620(auStack_38,local_18);
  FUN_00414480(&local_res10);
  return local_9;
}


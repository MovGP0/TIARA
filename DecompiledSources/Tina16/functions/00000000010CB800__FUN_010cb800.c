/* Ghidra address: 010cb800 */
/* Ghidra symbol: FUN_010cb800 */


undefined1 FUN_010cb800(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  uVar1 = FUN_00b8f030(local_res8);
  *local_res10 = uVar1;
  local_9 = 0;
  FUN_00414480(&local_res8);
  return local_9;
}


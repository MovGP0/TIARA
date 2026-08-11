/* Ghidra address: 00d57530 */
/* Ghidra symbol: FUN_00d57530 */


undefined4 * FUN_00d57530(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [56];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_00414b50(&local_10,param_2);
  FUN_00d57170(&local_28,&local_10);
  uVar1 = FUN_0043fc00(local_28);
  *param_1 = uVar1;
  FUN_00d57170(&local_30,&local_10);
  uVar1 = FUN_0043fc00(local_30);
  param_1[1] = uVar1;
  FUN_00d57170(&local_38,&local_10);
  uVar1 = FUN_0043fc00(local_38);
  param_1[2] = uVar1;
  FUN_00d57170(&local_40,&local_10);
  uVar1 = FUN_0043fc00(local_40);
  param_1[3] = uVar1;
  FUN_00414560(&local_40,4);
  FUN_00414480(&local_10);
  return param_1;
}


/* Ghidra address: 019bf120 */
/* Ghidra symbol: FUN_019bf120 */


undefined1 FUN_019bf120(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_18;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_28 = 0;
  *param_3 = 0;
  local_18 = FUN_00f34990(param_1,param_2);
  local_9 = local_18 != 0;
  if ((bool)local_9) {
    FUN_01488670(local_18,&local_28);
    FUN_00414ad0(param_3,local_28);
  }
  FUN_00414480(&local_28);
  return local_9;
}


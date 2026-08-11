/* Ghidra address: 01b20020 */
/* Ghidra symbol: FUN_01b20020 */


undefined8 * FUN_01b20020(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_1);
  plVar1 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)FUN_017ff620(param_2);
  }
  for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)FUN_017ff620(plVar1)) {
    (**(code **)(*plVar1 + 0x288))(plVar1,&local_20);
    FUN_00416cd0(param_1,3,local_20,local_res18[0],*param_1);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x288))(param_2,&local_28);
    FUN_00416ad0(param_1,local_28);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res18);
  return param_1;
}


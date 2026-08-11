/* Ghidra address: 01771530 */
/* Ghidra symbol: FUN_01771530 */


void FUN_01771530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  cVar1 = FUN_015f2cb0(*(undefined8 *)(param_1 + 0xb0));
  if (cVar1 == '\0') {
    FUN_01771620(param_1,local_res10,local_res18);
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(param_1 + 0xc0));
    (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(param_1 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))(*(longlong **)(param_1 + 0xb0),plVar2);
    FUN_00410f20(plVar2);
  }
  FUN_00414560(&local_res10,2);
  return;
}


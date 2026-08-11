/* Ghidra address: 0189dd50 */
/* Ghidra symbol: FUN_0189dd50 */


undefined8 FUN_0189dd50(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(param_1 + 0x108);
  if (plVar1 == (longlong *)0x0) {
    local_10 = FUN_0197a800(param_1,local_res10[0]);
  }
  else {
    local_10 = (**(code **)(*plVar1 + 200))(plVar1,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return local_10;
}


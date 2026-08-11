/* Ghidra address: 0184ebe0 */
/* Ghidra symbol: FUN_0184ebe0 */


undefined8 FUN_0184ebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar1 = (longlong *)FUN_0184cde0(param_1,local_res18[0]);
  if (plVar1 == (longlong *)0x0) {
    FUN_0046f180(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  FUN_00414480(local_res18);
  return param_2;
}


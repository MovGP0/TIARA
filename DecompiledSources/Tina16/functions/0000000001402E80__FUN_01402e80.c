/* Ghidra address: 01402e80 */
/* Ghidra symbol: FUN_01402e80 */


void FUN_01402e80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x3a);
  FUN_017bf050(uVar1,0,local_res10[0]);
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))(*(longlong **)(param_1 + 0x98),uVar1);
  FUN_00414480(local_res10);
  return;
}


/* Ghidra address: 0160dab0 */
/* Ghidra symbol: FUN_0160dab0 */


undefined8 FUN_0160dab0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined1 local_res10;
  undefined8 local_res18 [2];
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res18[0]);
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0160d800(auStack_48,local_res8,0);
  local_20 = local_10;
  FUN_00414480(&local_res8);
  FUN_00414480(local_res18);
  return local_20;
}


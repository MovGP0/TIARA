/* Ghidra address: 015f21c0 */
/* Ghidra symbol: FUN_015f21c0 */


void FUN_015f21c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_100c [2050];
  undefined1 local_80a [2002];
  undefined1 local_38;
  
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00442620(local_80a,local_res8);
  FUN_00442620(local_100c,local_res10);
  FUN_00427810(local_80a,local_100c,0);
  FUN_00414560(&local_res8,2);
  return;
}


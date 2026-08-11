/* Ghidra address: 014f14b0 */
/* Ghidra symbol: FUN_014f14b0 */


void FUN_014f14b0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414b50(&local_18,*(undefined8 *)PTR_DAT_02002340);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_18,1);
  if (cVar1 != '\0') {
    FUN_005eba20(local_10,local_res8,local_res10);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_18);
  FUN_00414480(&local_res8);
  return;
}


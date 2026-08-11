/* Ghidra address: 00c4da20 */
/* Ghidra symbol: FUN_00c4da20 */


longlong * FUN_00c4da20(longlong param_1,undefined2 param_2)

{
  longlong *plVar1;
  longlong local_res8 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  while (local_res8[0] != 0) {
    FUN_00416780(&local_18,param_2);
    FUN_00c4d8e0(&local_10,local_res8,local_18);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_10);
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res8);
  return plVar1;
}


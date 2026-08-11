/* Ghidra address: 010af760 */
/* Ghidra symbol: FUN_010af760 */


bool FUN_010af760(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00441a10(&local_18,*(undefined8 *)(param_1 + 0x30));
  FUN_0043e1a0(&local_10,local_18);
  iVar1 = FUN_00416db0(local_10,local_res10[0]);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return iVar1 == 0;
}


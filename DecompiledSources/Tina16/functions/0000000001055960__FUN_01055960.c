/* Ghidra address: 01055960 */
/* Ghidra symbol: FUN_01055960 */


bool FUN_01055960(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00441a10(&local_18,*param_1);
  FUN_0043e1a0(&local_10,local_18);
  iVar1 = FUN_00416db0(local_10,L".ino");
  if (iVar1 == 0) {
    FUN_004414c0(&local_20,*param_1,L".cpp");
    FUN_00414ad0(param_1,local_20);
  }
  FUN_00414560(&local_20,3);
  return iVar1 == 0;
}


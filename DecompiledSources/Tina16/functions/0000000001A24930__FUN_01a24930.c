/* Ghidra address: 01a24930 */
/* Ghidra symbol: FUN_01a24930 */


undefined8 FUN_01a24930(undefined8 param_1)

{
  int iVar1;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [1024];
  
  local_410 = 0;
  local_418 = 0;
  iVar1 = thunk_FUN_041bde6d(0,0x801c,0,0,local_408);
  if (iVar1 == 0) {
    FUN_00416830(&local_410,local_408,0x200);
  }
  FUN_00416ba0(&local_418,local_410,L"\\LTspice\\lib");
  FUN_00416ba0(param_1,local_418,&LAB_01a24a20);
  FUN_00414560(&local_418,2);
  return param_1;
}


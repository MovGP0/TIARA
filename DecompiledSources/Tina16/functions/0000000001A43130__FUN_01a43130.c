/* Ghidra address: 01a43130 */
/* Ghidra symbol: FUN_01a43130 */


bool FUN_01a43130(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e1a0(&local_10,local_res10[0]);
  iVar1 = FUN_004170c0(L"tina_ai",local_10,1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return 0 < iVar1;
}


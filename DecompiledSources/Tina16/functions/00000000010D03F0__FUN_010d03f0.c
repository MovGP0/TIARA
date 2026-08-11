/* Ghidra address: 010d03f0 */
/* Ghidra symbol: FUN_010d03f0 */


void FUN_010d03f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x150) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x78))
              (*(longlong **)(param_1 + 0x148),local_res10[0]);
  }
  else {
    FUN_00416cd0(&local_10,3,L"\\d( ",local_res10[0],&LAB_010d04dc);
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x78))(*(longlong **)(param_1 + 0x148),local_10)
    ;
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}


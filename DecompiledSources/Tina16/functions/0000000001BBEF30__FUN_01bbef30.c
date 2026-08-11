/* Ghidra address: 01bbef30 */
/* Ghidra symbol: FUN_01bbef30 */


void FUN_01bbef30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00416cd0(*(undefined8 *)(param_1 + 0xf0),5,**(undefined8 **)(param_1 + 0xf0),local_res10,
               &DAT_01bbf008,local_res18,&LAB_01bbf018);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}


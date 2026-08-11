/* Ghidra address: 004414c0 */
/* Ghidra symbol: FUN_004414c0 */


undefined8 FUN_004414c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  undefined8 local_res18;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_14 = FUN_00456870(&local_res10,&LAB_004415a4);
  if ((local_14 < 0) || (*(short *)(local_res10 + (longlong)local_14 * 2) != 0x2e)) {
    local_14 = 0x7fffffff;
  }
  FUN_00414480(&local_10);
  FUN_00416dc0(&local_10,local_res10,1,local_14);
  FUN_00416ba0(param_1,local_10,local_res18);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}


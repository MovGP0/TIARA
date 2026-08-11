/* Ghidra address: 0161ca20 */
/* Ghidra symbol: FUN_0161ca20 */


undefined8 FUN_0161ca20(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_0043f750(local_20,*(undefined4 *)(param_2 + 0xc));
  FUN_0043f750(&local_28,*(undefined1 *)(param_2 + 0x21));
  FUN_00416cd0(&local_10,3,local_20[0],&LAB_0161caf8,local_28);
  FUN_00414ad0(param_1,local_10);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return param_1;
}


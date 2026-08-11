/* Ghidra address: 00b8fe00 */
/* Ghidra symbol: FUN_00b8fe00 */


undefined8 FUN_00b8fe00(undefined8 param_1,undefined8 param_2,undefined1 param_3,char param_4)

{
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b8f7f0(param_1,param_2,param_3,param_4,&local_14);
  if ((param_4 == '\0') && (local_14 != 0)) {
    FUN_004169a0(&local_10,&DAT_01e942cf + (longlong)local_14 * 0x15);
  }
  else {
    FUN_00414480(&local_10);
  }
  FUN_00416ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}


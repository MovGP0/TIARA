/* Ghidra address: 00f81490 */
/* Ghidra symbol: FUN_00f81490 */


undefined8 FUN_00f81490(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x28));
  FUN_00416cd0(param_2,3,*(undefined8 *)(param_1 + 0x10),&LAB_00f81524,local_10);
  FUN_00414480(&local_10);
  return param_2;
}


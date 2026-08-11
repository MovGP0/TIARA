/* Ghidra address: 01a07cb0 */
/* Ghidra symbol: FUN_01a07cb0 */


undefined8 * FUN_01a07cb0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_3 == '\0') {
    FUN_00414ad0(param_2,&LAB_01a07d64);
  }
  else {
    FUN_016b9450(&local_10,*(undefined8 *)(param_1 + 0x348));
    FUN_00416880(param_2,local_10);
  }
  FUN_00414b50(param_1 + 0x340,*param_2);
  FUN_004144d0(&local_10);
  return param_2;
}


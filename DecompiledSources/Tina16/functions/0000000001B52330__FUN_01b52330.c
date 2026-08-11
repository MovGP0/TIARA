/* Ghidra address: 01b52330 */
/* Ghidra symbol: FUN_01b52330 */


undefined8 FUN_01b52330(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_10);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}


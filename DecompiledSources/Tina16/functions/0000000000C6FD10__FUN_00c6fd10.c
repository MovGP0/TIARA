/* Ghidra address: 00c6fd10 */
/* Ghidra symbol: FUN_00c6fd10 */


void FUN_00c6fd10(longlong param_1,undefined1 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  *(undefined1 *)(param_1 + 0x40) = param_2;
  FUN_00c65f70(&local_10,param_2);
  FUN_00414ad0(param_1 + 0x20,local_10);
  FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x20));
  FUN_00414480(&local_10);
  return;
}


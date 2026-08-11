/* Ghidra address: 00f97b50 */
/* Ghidra symbol: FUN_00f97b50 */


void FUN_00f97b50(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0x6e4));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_20[0]);
  if (*(char *)(param_1 + 0x6e8) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),0);
  }
  FUN_00414480(local_20);
  return;
}


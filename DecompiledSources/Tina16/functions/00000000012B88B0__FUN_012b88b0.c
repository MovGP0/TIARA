/* Ghidra address: 012b88b0 */
/* Ghidra symbol: FUN_012b88b0 */


void FUN_012b88b0(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0xa8))(*(longlong **)(param_1 + 0x6d8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6d8),&local_10);
    FUN_00414ad0(param_1 + 0x738,local_10);
    FUN_012b5de0(param_1,*(undefined8 *)(param_1 + 0x738));
  }
  FUN_00414480(&local_10);
  return;
}


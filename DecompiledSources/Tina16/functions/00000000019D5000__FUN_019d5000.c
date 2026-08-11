/* Ghidra address: 019d5000 */
/* Ghidra symbol: FUN_019d5000 */


void FUN_019d5000(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0xa8))(*(longlong **)(param_1 + 0x798));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x798),&local_10);
    FUN_019d4960(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}


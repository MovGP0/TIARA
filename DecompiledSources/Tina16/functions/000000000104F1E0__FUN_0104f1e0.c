/* Ghidra address: 0104f1e0 */
/* Ghidra symbol: FUN_0104f1e0 */


void FUN_0104f1e0(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xa8))(*(longlong **)(param_1 + 0x718));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x718),&local_10);
    FUN_01050790(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}


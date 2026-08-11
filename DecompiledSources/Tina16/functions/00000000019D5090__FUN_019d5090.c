/* Ghidra address: 019d5090 */
/* Ghidra symbol: FUN_019d5090 */


void FUN_019d5090(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0xa8))(*(longlong **)(param_1 + 0x7a0));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x7a0),&local_10);
    FUN_019d45b0(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}


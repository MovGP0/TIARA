/* Ghidra address: 012bc780 */
/* Ghidra symbol: FUN_012bc780 */


void FUN_012bc780(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0xa8))(*(longlong **)(param_1 + 0x6d0));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6d0),&local_10);
    FUN_00414ad0(param_1 + 0x700,local_10);
    FUN_012bc820(param_1,*(undefined8 *)(param_1 + 0x700));
  }
  FUN_00414480(&local_10);
  return;
}


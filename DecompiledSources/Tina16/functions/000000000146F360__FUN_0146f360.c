/* Ghidra address: 0146f360 */
/* Ghidra symbol: FUN_0146f360 */


void FUN_0146f360(longlong param_1)

{
  char cVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  FUN_00441920(&local_10,*(undefined8 *)(param_1 + 0x7f0));
  FUN_00724380(*(undefined8 *)(param_1 + 0x718),local_10);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xa8))(*(longlong **)(param_1 + 0x718));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x718),&local_20);
    FUN_0043e1a0(&local_18,local_20);
    FUN_00414ad0(param_1 + 0x7f0,local_18);
    FUN_0146fe10(param_1);
    FUN_0146f280(param_1,*(undefined8 *)(param_1 + 0x7f0));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x738),0);
  }
  FUN_00414480(&local_20);
  FUN_00414560(&local_18,2);
  return;
}


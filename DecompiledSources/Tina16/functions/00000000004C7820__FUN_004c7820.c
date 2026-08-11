/* Ghidra address: 004c7820 */
/* Ghidra symbol: FUN_004c7820 */


void FUN_004c7820(longlong param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0058d710(&local_30,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  FUN_004c6c50(param_1);
  FUN_004c7a80(*(undefined8 *)(param_1 + 0x60),&local_30);
  FUN_00460ba0(&local_30);
  return;
}


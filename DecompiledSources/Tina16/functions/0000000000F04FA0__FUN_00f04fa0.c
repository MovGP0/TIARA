/* Ghidra address: 00f04fa0 */
/* Ghidra symbol: FUN_00f04fa0 */


void FUN_00f04fa0(longlong param_1,int param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x4d8) != param_2) {
    *(int *)(param_1 + 0x4d8) = param_2;
  }
  FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x4d8));
  FUN_0064de00(param_1,local_10);
  FUN_00414480(&local_10);
  return;
}


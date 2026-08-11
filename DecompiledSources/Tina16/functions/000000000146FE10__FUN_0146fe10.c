/* Ghidra address: 0146fe10 */
/* Ghidra symbol: FUN_0146fe10 */


void FUN_0146fe10(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  FUN_00441920(&local_28,*(undefined8 *)(param_1 + 0x7f0));
  local_20 = local_28;
  local_18 = 0x11;
  FUN_00442f70(&local_10,L"Python Shell - <%s>",&local_20,0);
  FUN_0064de00(param_1,local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}


/* Ghidra address: 017ef730 */
/* Ghidra symbol: FUN_017ef730 */


void FUN_017ef730(longlong param_1)

{
  char cVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_40 = 0;
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  FUN_00441920(&local_10,*(undefined8 *)(param_1 + 0x888));
  FUN_00724380(*(undefined8 *)(param_1 + 0xb20),local_10);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0xa8))(*(longlong **)(param_1 + 0xb20));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0xb20),&local_20);
    FUN_0043e1a0(&local_18,local_20);
    FUN_00414ad0(param_1 + 0x888,local_18);
    FUN_00441920(&local_40,*(undefined8 *)(param_1 + 0x888));
    local_38 = local_40;
    local_30 = 0x11;
    FUN_00442f70(&local_28,*(undefined8 *)(param_1 + 0x880),&local_38,0);
    FUN_0064de00(param_1,local_28);
    FUN_017ef620(param_1,*(undefined8 *)(param_1 + 0x888));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x868),0);
  }
  FUN_00414480(&local_40);
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  FUN_00414560(&local_18,2);
  return;
}


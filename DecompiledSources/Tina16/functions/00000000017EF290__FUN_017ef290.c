/* Ghidra address: 017ef290 */
/* Ghidra symbol: FUN_017ef290 */


void FUN_017ef290(longlong param_1)

{
  char cVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    FUN_0177d560(*(undefined8 *)(param_1 + 0xb18),*(undefined8 *)(param_1 + 0xb10));
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb18) + 0xa8))(*(longlong **)(param_1 + 0xb18));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0xb18),&local_18);
    FUN_0043e1a0(&local_10,local_18);
    FUN_00414ad0(param_1 + 0x888,local_10);
    FUN_017ef4d0(param_1,*(undefined8 *)(param_1 + 0x888));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x868),0);
    FUN_00441920(&local_38,*(undefined8 *)(param_1 + 0x888));
    local_30 = local_38;
    local_28 = 0x11;
    FUN_00442f70(&local_20,*(undefined8 *)(param_1 + 0x880),&local_30,0);
    FUN_0064de00(param_1,local_20);
    FUN_010c2250(&local_40,0);
    FUN_00414ad0(param_1 + 0xb30,local_40);
    FUN_00f08d50(&local_48,10);
    FUN_017f0d10(param_1,local_48);
    FUN_00724270(*(undefined8 *)(param_1 + 0xb18),&local_58);
    FUN_00441640(&local_50,local_58);
    FUN_00414ad0(param_1 + 0xb10,local_50);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_50,4);
  FUN_00414480(&local_20);
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return;
}


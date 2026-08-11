/* Ghidra address: 018fbde0 */
/* Ghidra symbol: FUN_018fbde0 */


void FUN_018fbde0(longlong param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0181b940(param_1);
  FUN_0180bfe0(&local_10,6000);
  FUN_0064de00(param_1,local_10);
  FUN_0180bfe0(&local_18,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_18);
  FUN_0180bfe0(&local_20,2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_20);
  FUN_0180bfe0(&local_28,0x1771);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_28);
  FUN_0180bfe0(&local_30,0x1772);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_30);
  FUN_0180bfe0(&local_38,0x1773);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_38);
  FUN_00414560(&local_38,6);
  return;
}


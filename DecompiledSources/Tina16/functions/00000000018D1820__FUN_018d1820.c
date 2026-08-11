/* Ghidra address: 018d1820 */
/* Ghidra symbol: FUN_018d1820 */


void FUN_018d1820(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0181b940(param_1);
  FUN_0180bfe0(&local_10,5000);
  FUN_0064de00(param_1,local_10);
  FUN_0180bfe0(&local_18,0x1389);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_18);
  FUN_0180bfe0(&local_20,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_20);
  FUN_0180bfe0(&local_28,2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_28);
  FUN_00414560(&local_28,4);
  return;
}


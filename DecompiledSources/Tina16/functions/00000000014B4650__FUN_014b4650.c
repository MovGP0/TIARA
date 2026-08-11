/* Ghidra address: 014b4650 */
/* Ghidra symbol: FUN_014b4650 */


void FUN_014b4650(longlong param_1)

{
  undefined4 uVar1;
  undefined4 local_40 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_00bfaa50(*(undefined8 *)(param_1 + 0x860));
  local_30 = FUN_00bfaa40(*(undefined8 *)(param_1 + 0x860));
  local_38 = 0;
  local_28 = 0;
  local_40[0] = uVar1;
  FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x868),local_40,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x820),local_20[0]);
  FUN_00414480(local_20);
  return;
}


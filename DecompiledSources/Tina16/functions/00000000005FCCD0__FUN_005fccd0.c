/* Ghidra address: 005fccd0 */
/* Ghidra symbol: FUN_005fccd0 */


undefined8 FUN_005fccd0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_18 = *(longlong *)(param_1 + 0x18) + 0x33;
  FUN_0041dc50(&local_10,local_18);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_2;
}


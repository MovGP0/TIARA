/* Ghidra address: 0080c450 */
/* Ghidra symbol: FUN_0080c450 */


undefined8 FUN_0080c450(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_18 = (undefined8 *)(param_1 + 0x80);
  FUN_00414b50(&local_10,*local_18);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_2;
}


/* Ghidra address: 00a4a2e0 */
/* Ghidra symbol: FUN_00a4a2e0 */


void FUN_00a4a2e0(byte param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(&local_10);
  FUN_0043e600(&local_10,local_res10[0]);
  FUN_00414b50(local_res10,local_10);
  FUN_00414480(&local_10);
  FUN_00414ad0(&DAT_02013b40 + (ulonglong)param_1 * 8,local_res10[0]);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}


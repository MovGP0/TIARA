/* Ghidra address: 012e89c0 */
/* Ghidra symbol: FUN_012e89c0 */


void FUN_012e89c0(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_10);
  FUN_00414ad0(param_1 + 0x738,local_10);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_18);
  FUN_00414ad0(param_1 + 0x740,local_18);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_20);
  FUN_00414ad0(param_1 + 0x748,local_20);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_28);
  FUN_00414ad0(param_1 + 0x750,local_28);
  FUN_00414560(&local_28,4);
  return;
}


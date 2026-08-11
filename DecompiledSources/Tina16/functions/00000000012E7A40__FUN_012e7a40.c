/* Ghidra address: 012e7a40 */
/* Ghidra symbol: FUN_012e7a40 */


void FUN_012e7a40(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_10);
  FUN_00414ad0(param_1 + 0x730,local_10);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_18);
  FUN_00414ad0(param_1 + 0x720,local_18);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_20);
  FUN_00414ad0(param_1 + 0x728,local_20);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8));
  if (cVar1 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_28);
    FUN_00414ad0(param_1 + 0x728,local_28);
  }
  FUN_00414560(&local_28,4);
  return;
}


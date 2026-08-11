/* Ghidra address: 004d3c10 */
/* Ghidra symbol: FUN_004d3c10 */


void FUN_004d3c10(longlong param_1,longlong param_2)

{
  longlong local_28;
  undefined4 local_1c;
  
  FUN_004d3b70(param_1,*(undefined8 *)(param_2 + 0x10),&local_1c);
  local_28 = param_2;
  FUN_00599f70(*(longlong *)(param_1 + 0x60) + 8,local_1c,&local_28);
  return;
}


/* Ghidra address: 019ce610 */
/* Ghidra symbol: FUN_019ce610 */


void FUN_019ce610(longlong param_1,undefined4 param_2)

{
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20[0] = param_2;
  FUN_00442f70(&local_10,L"Errors: %d",local_20,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_10);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414480(&local_10);
  return;
}


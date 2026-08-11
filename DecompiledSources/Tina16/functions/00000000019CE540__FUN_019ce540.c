/* Ghidra address: 019ce540 */
/* Ghidra symbol: FUN_019ce540 */


void FUN_019ce540(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_30 [2];
  undefined1 local_28;
  undefined4 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  local_18 = 0;
  local_30[0] = param_2;
  local_20 = param_3;
  FUN_00442f70(&local_10,L"Question: %d of %d",local_30,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_10);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414480(&local_10);
  return;
}


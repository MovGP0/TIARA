/* Ghidra address: 01816d60 */
/* Ghidra symbol: FUN_01816d60 */


void FUN_01816d60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_01804390(&DAT_01802268,1);
  *(undefined1 *)(local_10 + 8) = 1;
  FUN_00414ad0(*(longlong *)(local_10 + 0x28) + 0x20,L"variables");
  FUN_01816e20(param_1,*(undefined8 *)(local_10 + 0x28));
  FUN_01804950(local_10,param_2);
  FUN_00410f20(local_10);
  return;
}


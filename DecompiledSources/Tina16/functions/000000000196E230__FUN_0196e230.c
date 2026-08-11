/* Ghidra address: 0196e230 */
/* Ghidra symbol: FUN_0196e230 */


void FUN_0196e230(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_01804390(&DAT_01802268,1);
  *(undefined1 *)(local_10 + 8) = 1;
  FUN_00414ad0(*(longlong *)(local_10 + 0x28) + 0x20,L"style");
  FUN_0196def0(param_1,*(undefined8 *)(local_10 + 0x28));
  FUN_01804950(local_10,param_2);
  FUN_00410f20(local_10);
  return;
}


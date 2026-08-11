/* Ghidra address: 0181ee20 */
/* Ghidra symbol: FUN_0181ee20 */


void FUN_0181ee20(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_0181f710(&DAT_0181dd08,1,param_2);
  *(undefined1 *)(local_10 + 8) = *(undefined1 *)(param_1 + 8);
  FUN_0181f8d0(local_10);
  FUN_0181fd10(local_10,*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(local_10);
  return;
}


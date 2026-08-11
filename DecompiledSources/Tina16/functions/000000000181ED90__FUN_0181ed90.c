/* Ghidra address: 0181ed90 */
/* Ghidra symbol: FUN_0181ed90 */


void FUN_0181ed90(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_0181ef90(&DAT_0181d978,1,param_2);
  FUN_0181e370(*(undefined8 *)(param_1 + 0x10));
  FUN_0181f180(local_10);
  FUN_0181f6b0(local_10,*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(local_10);
  return;
}


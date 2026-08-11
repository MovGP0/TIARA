/* Ghidra address: 00a62bc0 */
/* Ghidra symbol: FUN_00a62bc0 */


void FUN_00a62bc0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_00a62cc0(&PTR_FUN_00a62ac0,1,*(undefined1 *)(param_2 + 0x30));
  FUN_00a68aa0(local_10,param_1,param_2);
  FUN_00410f20(local_10);
  return;
}


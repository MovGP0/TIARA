/* Ghidra address: 018af2e0 */
/* Ghidra symbol: FUN_018af2e0 */


void FUN_018af2e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x848) + 0x558) * 100.0);
  FUN_0043f780(&local_10,uVar1);
  FUN_00416ad0(&local_10,&LAB_018af384);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_10);
  FUN_00414480(&local_10);
  return;
}


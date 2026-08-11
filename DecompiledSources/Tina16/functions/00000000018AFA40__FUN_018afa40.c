/* Ghidra address: 018afa40 */
/* Ghidra symbol: FUN_018afa40 */


void FUN_018afa40(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),local_20);
  uVar1 = FUN_0043fc50(local_20[0],*(undefined4 *)(*(longlong *)(param_1 + 0x848) + 0x528));
  FUN_018a9020(*(undefined8 *)(param_1 + 0x848),uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x848) + 600))(*(longlong **)(param_1 + 0x848));
  FUN_00414480(local_20);
  return;
}


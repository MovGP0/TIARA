/* Ghidra address: 004dc430 */
/* Ghidra symbol: FUN_004dc430 */


void FUN_004dc430(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  lVar1 = FUN_004d11f0();
  if (*(int *)((longlong)param_1 + 0x24) == *(int *)(lVar1 + 8)) {
    FUN_004dc660(param_1,2,2);
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  FUN_0041d5d0(param_1);
  return;
}


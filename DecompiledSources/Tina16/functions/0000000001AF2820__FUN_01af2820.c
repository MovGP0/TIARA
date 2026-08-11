/* Ghidra address: 01af2820 */
/* Ghidra symbol: FUN_01af2820 */


void FUN_01af2820(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  uint local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_1c = FUN_0040c770((*(double *)(param_1 + 0x20) * 100.0) / *(double *)(param_1 + 0x18));
  if (local_1c != *(byte *)(param_1 + 0x10)) {
    *(undefined1 *)(param_1 + 0x10) = (undefined1)local_1c;
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      FUN_00416ba0(&local_38,L"Progress.",*(undefined8 *)(param_1 + 0x28));
      (**(code **)(*plVar1 + 0x28))(plVar1,L"Analysis",local_38,local_1c);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_01af0e20(*(longlong *)(param_1 + 8),*(undefined1 *)(param_1 + 0x10));
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_012db1f0(*(longlong *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x10));
    }
  }
  FUN_00414480(&local_38);
  return;
}


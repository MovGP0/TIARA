/* Ghidra address: 00a06310 */
/* Ghidra symbol: FUN_00a06310 */


void FUN_00a06310(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  if (0 < *(int *)(param_2 + 0x10)) {
    piVar1 = (int *)FUN_004aeac0(param_2,0);
    if (*piVar1 == 3) {
      *(uint *)(param_1 + 0x50) =
           (uint)*(byte *)((longlong)piVar1 + 5) + (uint)*(byte *)((longlong)piVar1 + 6) * 0x100;
    }
  }
  return;
}


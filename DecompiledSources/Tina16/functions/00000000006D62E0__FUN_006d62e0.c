/* Ghidra address: 006d62e0 */
/* Ghidra symbol: FUN_006d62e0 */


void FUN_006d62e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(char *)((longlong)param_1 + 0x4c2) != '\0') && (*(int *)(param_2 + 8) == 0)) {
    plVar1 = *(longlong **)(param_2 + 0x10);
    param_1[0x9b] = *plVar1;
    param_1[0x9c] = plVar1[1];
  }
  return;
}


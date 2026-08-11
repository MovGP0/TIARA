/* Ghidra address: 018ccb30 */
/* Ghidra symbol: FUN_018ccb30 */


void FUN_018ccb30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  *(undefined1 *)(param_2 + 0x39) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x68))(*(longlong **)(param_1 + 0x60),param_2,0);
  if (*(char *)((longlong)param_2 + 0xc5) != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x18) != '\0') {
      FUN_01967a70(param_2);
    }
    (**(code **)(*param_2 + 200))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x88));
    (**(code **)(*param_2 + 0xd0))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x90));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x38);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    *(double *)(*(longlong *)(param_1 + 0x60) + 0x90) =
         *(double *)(*(longlong *)(param_1 + 0x60) + 0x90) + (double)param_2[0x16];
  }
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x70))(*(longlong **)(param_1 + 0x60),param_2);
  *(undefined1 *)(param_2 + 0x39) = 0;
  return;
}


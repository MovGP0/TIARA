/* Ghidra address: 018cd550 */
/* Ghidra symbol: FUN_018cd550 */


void FUN_018cd550(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x88) + 200))
            (*(longlong **)(param_1 + 0x88),*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x88));
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0xd0))
            (*(longlong **)(param_1 + 0x88),*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x90));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x38);
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x88));
  *(double *)(*(longlong *)(param_1 + 0x80) + 0x90) =
       *(double *)(*(longlong *)(param_1 + 0x80) + 0x90) +
       *(double *)(*(longlong *)(param_1 + 0x88) + 0xb0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10)) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x40))(*(longlong **)(param_1 + 0x80));
  }
  return;
}


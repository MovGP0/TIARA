/* Ghidra address: 014131e0 */
/* Ghidra symbol: FUN_014131e0 */


void FUN_014131e0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x90))(*(longlong **)(param_1 + 0x740));
  FUN_006eae90(*(undefined8 *)(param_1 + 0x6f0),1);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x10))
            (*(longlong **)(param_1 + 0x740),*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x510)
            );
  FUN_006eae90(*(undefined8 *)(param_1 + 0x6f0),0);
  *(undefined1 *)(param_1 + 0x760) = 1;
  FUN_00805200(param_1);
  return;
}


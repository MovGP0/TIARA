/* Ghidra address: 01474ba0 */
/* Ghidra symbol: FUN_01474ba0 */


void FUN_01474ba0(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  return;
}


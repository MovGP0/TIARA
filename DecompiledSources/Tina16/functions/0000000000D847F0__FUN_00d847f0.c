/* Ghidra address: 00d847f0 */
/* Ghidra symbol: FUN_00d847f0 */


void FUN_00d847f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 200));
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
              (*(longlong **)(param_1 + 0x28),*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0xd0))
    ;
  }
  return;
}


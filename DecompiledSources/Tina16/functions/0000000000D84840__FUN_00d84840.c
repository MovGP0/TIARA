/* Ghidra address: 00d84840 */
/* Ghidra symbol: FUN_00d84840 */


void FUN_00d84840(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0xd8))
    ;
  }
  return;
}


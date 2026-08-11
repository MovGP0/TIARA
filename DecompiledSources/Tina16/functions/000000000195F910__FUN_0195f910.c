/* Ghidra address: 0195f910 */
/* Ghidra symbol: FUN_0195f910 */


void FUN_0195f910(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x330) == 0) {
    FUN_01963420(param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x330) + 0x10))(*(longlong **)(param_1 + 0x330),param_2);
  return;
}


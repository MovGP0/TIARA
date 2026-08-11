/* Ghidra address: 01966e80 */
/* Ghidra symbol: FUN_01966e80 */


void FUN_01966e80(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    FUN_019678d0(param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x10))(*(longlong **)(param_1 + 0x2b8),param_2);
  return;
}


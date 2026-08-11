/* Ghidra address: 01980240 */
/* Ghidra symbol: FUN_01980240 */


void FUN_01980240(longlong param_1,undefined4 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x58) + 0x28) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2,1);
  }
  return;
}


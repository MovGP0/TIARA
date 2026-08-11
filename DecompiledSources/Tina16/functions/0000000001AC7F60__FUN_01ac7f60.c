/* Ghidra address: 01ac7f60 */
/* Ghidra symbol: FUN_01ac7f60 */


void FUN_01ac7f60(longlong param_1)

{
  if ((*(char *)(*(longlong *)(param_1 + 0x710) + 0xa9) != '\0') &&
     (*(char *)(param_1 + 0x758) != '\0')) {
    FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),
                 *(int *)(param_1 + 0x9c) - *(int *)(*(longlong *)(param_1 + 0x710) + 0x9c));
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),0);
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),0);
  return;
}


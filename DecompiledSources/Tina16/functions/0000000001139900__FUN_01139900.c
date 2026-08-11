/* Ghidra address: 01139900 */
/* Ghidra symbol: FUN_01139900 */


void FUN_01139900(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(*(longlong *)(param_1 + 0x7c0) + 0x328) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0xa10) + 0x148) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x70))(*(longlong **)(param_1 + 0xa18));
    FUN_01139800(param_1,param_2);
    if (*(char *)(param_1 + 0xa8a) == '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x148) = 0;
    }
  }
  return;
}


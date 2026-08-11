/* Ghidra address: 0140f220 */
/* Ghidra symbol: FUN_0140f220 */


void FUN_0140f220(longlong param_1)

{
  if ((*(char *)(param_1 + 0x7f0) != '\0') &&
     (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8) != *(int *)(param_1 + 0x7e0))) {
    *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
    FUN_0140e330(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  }
  return;
}


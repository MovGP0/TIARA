/* Ghidra address: 00cbd080 */
/* Ghidra symbol: FUN_00cbd080 */


void FUN_00cbd080(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x100);
  if ((*(longlong *)(param_2 + 0x38) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x38) + 0x124) != '\0')) {
    FUN_00c8d2f0(*(undefined8 *)(param_2 + 0x60),3);
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x120))(*(undefined8 *)(param_2 + 0x38));
    (**(code **)(**(longlong **)(param_2 + 0x60) + 0xa8))(*(undefined8 *)(param_2 + 0x60));
    FUN_00c8d2f0(*(undefined8 *)(param_2 + 0x60),4);
  }
  return;
}


/* Ghidra address: 010bb690 */
/* Ghidra symbol: FUN_010bb690 */


void FUN_010bb690(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = param_3[1];
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_3 + 2));
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
            (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_3 + 4));
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_3 + 6);
  return;
}


/* Ghidra address: 010ba610 */
/* Ghidra symbol: FUN_010ba610 */


void FUN_010ba610(longlong param_1,longlong param_2)

{
  FUN_01cf0770(param_1,param_2);
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))
            (*(longlong **)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x30));
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))
            (*(longlong **)(param_2 + 0x28),*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
  return;
}


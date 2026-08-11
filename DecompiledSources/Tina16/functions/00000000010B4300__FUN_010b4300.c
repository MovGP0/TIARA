/* Ghidra address: 010b4300 */
/* Ghidra symbol: FUN_010b4300 */


void FUN_010b4300(longlong param_1)

{
  FUN_004b9ec0(*(undefined8 *)(param_1 + 8));
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x10));
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))(*(longlong **)(param_1 + 0x20));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))(*(longlong **)(param_1 + 0x30));
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x28));
  return;
}


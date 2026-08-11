/* Ghidra address: 01512410 */
/* Ghidra symbol: FUN_01512410 */


void FUN_01512410(longlong param_1)

{
  FUN_0082a890(*(undefined8 *)(param_1 + 0x7c0),0);
  if (*(char *)(param_1 + 0x7ed) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x120))(*(longlong **)(param_1 + 0xee0));
  }
  return;
}


/* Ghidra address: 01b69340 */
/* Ghidra symbol: FUN_01b69340 */


void FUN_01b69340(longlong param_1)

{
  if (*(char *)(param_1 + 0xd6e) != '\0') {
    *(char *)(param_1 + 0xd6e) = *(char *)(param_1 + 0xd6e) + -1;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x110))
              (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(param_1 + 0xd6e));
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x108))
              (*(longlong **)(param_1 + 0xda0),param_1 + 0xd6e,param_1 + 0xd70,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcd0),*(undefined8 *)(param_1 + 0xd70));
  }
  return;
}


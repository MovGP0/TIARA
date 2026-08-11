/* Ghidra address: 01b5a5a0 */
/* Ghidra symbol: FUN_01b5a5a0 */


void FUN_01b5a5a0(longlong param_1)

{
  if (*(char *)(param_1 + 0xd1a) != '\0') {
    *(char *)(param_1 + 0xd1a) = *(char *)(param_1 + 0xd1a) + -1;
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0x110))
              (*(longlong **)(param_1 + 0xd58),*(undefined1 *)(param_1 + 0xd1a));
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0x108))
              (*(longlong **)(param_1 + 0xd58),param_1 + 0xd1a,param_1 + 0xd20,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcd8),*(undefined8 *)(param_1 + 0xd20));
  }
  return;
}


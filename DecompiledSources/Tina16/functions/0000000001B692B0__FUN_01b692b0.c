/* Ghidra address: 01b692b0 */
/* Ghidra symbol: FUN_01b692b0 */


void FUN_01b692b0(longlong param_1)

{
  if ((int)(uint)*(byte *)(param_1 + 0xd6e) < (int)(*(byte *)(param_1 + 0xd6f) - 1)) {
    *(char *)(param_1 + 0xd6e) = *(char *)(param_1 + 0xd6e) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x110))
              (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(param_1 + 0xd6e));
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x108))
              (*(longlong **)(param_1 + 0xda0),param_1 + 0xd6e,param_1 + 0xd70,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcd0),*(undefined8 *)(param_1 + 0xd70));
  }
  return;
}


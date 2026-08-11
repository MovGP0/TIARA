/* Ghidra address: 01b5a510 */
/* Ghidra symbol: FUN_01b5a510 */


void FUN_01b5a510(longlong param_1)

{
  if ((int)(uint)*(byte *)(param_1 + 0xd1a) < (int)(*(byte *)(param_1 + 0xd1b) - 1)) {
    *(char *)(param_1 + 0xd1a) = *(char *)(param_1 + 0xd1a) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0x110))
              (*(longlong **)(param_1 + 0xd58),*(undefined1 *)(param_1 + 0xd1a));
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0x108))
              (*(longlong **)(param_1 + 0xd58),param_1 + 0xd1a,param_1 + 0xd20,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcd8),*(undefined8 *)(param_1 + 0xd20));
  }
  return;
}


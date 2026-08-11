/* Ghidra address: 01b68fb0 */
/* Ghidra symbol: FUN_01b68fb0 */


void FUN_01b68fb0(longlong param_1)

{
  if (*(char *)(param_1 + 0xd98) != '\0') {
    *(char *)(param_1 + 0xd98) = *(char *)(param_1 + 0xd98) + -1;
    if (*(char *)(param_1 + 0xdb4) == '\0') {
      FUN_010c0d70(param_1 + 0xd98,param_1 + 0xd88,1,0x1e,0x3fb999999999999a);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xa0))
                (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(param_1 + 0xd98));
      (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x90))
                (*(longlong **)(param_1 + 0xda0),param_1 + 0xd98,param_1 + 0xd88,1);
    }
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc98),*(undefined8 *)(param_1 + 0xd88));
  }
  return;
}


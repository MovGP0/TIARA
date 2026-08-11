/* Ghidra address: 00d7a7f0 */
/* Ghidra symbol: FUN_00d7a7f0 */


void FUN_00d7a7f0(longlong param_1)

{
  char cVar1;
  
  FUN_00d78060(param_1);
  cVar1 = *(char *)(param_1 + 0x99);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    if (*(char *)(param_1 + 0x140) == '\x05') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    if (*(char *)(param_1 + 0x140) == '\a') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    if (*(char *)(param_1 + 0x140) == '\x04') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    if (*(char *)(param_1 + 0x140) == '\a') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
  }
  else if (cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    if (*(char *)(param_1 + 0x140) == '\x03') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    if (*(char *)(param_1 + 0x140) == '\x04') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    if (*(char *)(param_1 + 0x140) == '\x06') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    if (*(char *)(param_1 + 0x140) == '\a') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
  }
  else if (cVar1 == '\x04') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    if (*(char *)(param_1 + 0x140) == '\x05') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    if (*(char *)(param_1 + 0x140) == '\x06') {
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
  }
  return;
}


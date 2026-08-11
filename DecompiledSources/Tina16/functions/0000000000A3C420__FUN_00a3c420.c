/* Ghidra address: 00a3c420 */
/* Ghidra symbol: FUN_00a3c420 */


void FUN_00a3c420(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_00a39e90(param_1);
  cVar1 = *(char *)(lVar2 + 0x491);
  if (cVar1 == '\x03') {
    lVar2 = FUN_00a33e30(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31a70);
    if (lVar2 != 0) {
      FUN_00a33a90(*(undefined8 *)(param_1 + 0x160),lVar2);
    }
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
    if (cVar1 == '\x04') {
      *(undefined1 *)(lVar2 + 0x491) = 0;
    }
    else {
      *(undefined1 *)(lVar2 + 0x491) = 2;
    }
    if (*(longlong *)(lVar2 + 0x480) != 0) {
      FUN_004095f0(*(longlong *)(lVar2 + 0x480));
    }
    *(undefined8 *)(lVar2 + 0x480) = 0;
  }
  return;
}


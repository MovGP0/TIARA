/* Ghidra address: 009e0930 */
/* Ghidra symbol: FUN_009e0930 */


void FUN_009e0930(longlong param_1)

{
  undefined1 uVar1;
  int in_EAX;
  
  if (*(char *)(param_1 + 8) == '\0') {
    in_EAX = thunk_FUN_0418d6df(*(undefined8 *)(param_1 + 0x28),1);
  }
  if ((*(char *)(param_1 + 8) == '\0') && (in_EAX == 0x102)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}


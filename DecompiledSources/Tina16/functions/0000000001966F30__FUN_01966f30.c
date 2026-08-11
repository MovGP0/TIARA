/* Ghidra address: 01966f30 */
/* Ghidra symbol: FUN_01966f30 */


void FUN_01966f30(longlong param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x2d4);
  if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0xc1) == '\0') {
    cVar1 = FUN_01966bb0(*(undefined8 *)(param_1 + 0xb0),7);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x5f) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x5f) = 3;
  }
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x2a8);
  return;
}


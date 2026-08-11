/* Ghidra address: 01ba2e80 */
/* Ghidra symbol: FUN_01ba2e80 */


void FUN_01ba2e80(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x758) == '\0') &&
     (*(longlong *)(param_1 + 0x970) = param_2, param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x740) = 1;
    cVar1 = _HTerm_Configure(*(undefined8 *)(param_1 + 0x970),param_1 + 0x740);
    if (cVar1 != '\0') {
      _HTerm_ClearBuffer(*(undefined8 *)(param_1 + 0x970));
      *(undefined1 *)(param_1 + 0x998) = 1;
    }
  }
  return;
}


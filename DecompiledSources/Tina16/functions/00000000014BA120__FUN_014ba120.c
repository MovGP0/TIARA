/* Ghidra address: 014ba120 */
/* Ghidra symbol: FUN_014ba120 */


void FUN_014ba120(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x749) == '\0') &&
     (*(longlong *)(param_1 + 0xd58) = param_2, param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x730) = 1;
    cVar1 = _HTerm_Configure(*(undefined8 *)(param_1 + 0xd58),param_1 + 0x730);
    if (cVar1 != '\0') {
      _HTerm_ClearBuffer(*(undefined8 *)(param_1 + 0xd58));
      *(undefined1 *)(param_1 + 0x748) = 1;
    }
  }
  return;
}


/* Ghidra address: 00b60870 */
/* Ghidra symbol: FUN_00b60870 */


void FUN_00b60870(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    FUN_00b426f0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),
                 *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(param_1 + 0x44) = 1;
    cVar1 = FUN_00b5ca90(param_1);
    if (cVar1 != '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x10) = 0xec;
    }
  }
  return;
}


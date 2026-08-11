/* Ghidra address: 01c67d50 */
/* Ghidra symbol: FUN_01c67d50 */


void FUN_01c67d50(longlong param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (*(char *)(*(longlong *)(param_1 + 0x6c0) + 0xa9) == '\0') {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x6c8) + 0xa9);
    FUN_0064dbe0(*(longlong *)(param_1 + 0x6c8),0);
  }
  FUN_0064dbe0(*(longlong *)(param_1 + 0x6c0),
               *(char *)(*(longlong *)(param_1 + 0x6c0) + 0xa9) == '\0');
  if (cVar1 != '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c8),1);
  }
  return;
}


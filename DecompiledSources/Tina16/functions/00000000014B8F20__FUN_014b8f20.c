/* Ghidra address: 014b8f20 */
/* Ghidra symbol: FUN_014b8f20 */


void FUN_014b8f20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  *(bool *)(*(longlong *)(param_2 + 0x90) + 0x708) = *(char *)(param_2 + 0x67) == '\0';
  cVar1 = FUN_00440a20(*(undefined8 *)(param_2 + 0x58),1);
  if (cVar1 != '\0') {
    FUN_004412f0(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


/* Ghidra address: 01c8e8b0 */
/* Ghidra symbol: FUN_01c8e8b0 */


void FUN_01c8e8b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = PTR_DAT_02004010[0x814];
  PTR_DAT_02004010[0x814] = cVar1 == '\0';
  if (cVar1 != '\0') {
    PTR_DAT_02004010[0x815] = 0;
    *PTR_DAT_020037e8 = 0;
  }
  FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
  return;
}


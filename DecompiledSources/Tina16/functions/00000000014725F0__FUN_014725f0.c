/* Ghidra address: 014725f0 */
/* Ghidra symbol: FUN_014725f0 */


void FUN_014725f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_014736b0(param_1);
  *(bool *)(param_1 + 0x741) = cVar1 == '\0';
  if (cVar1 != '\0') {
    FUN_01472630(param_1,param_2);
  }
  return;
}


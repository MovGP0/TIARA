/* Ghidra address: 0043dce0 */
/* Ghidra symbol: FUN_0043dce0 */


char FUN_0043dce0(undefined8 param_1,short param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((ushort)(param_2 - 0x30U) < 10) {
    cVar1 = cVar1 + -0x30;
  }
  else if ((ushort)(param_2 - 0x41U) < 6) {
    cVar1 = cVar1 + -0x37;
  }
  else if ((ushort)(param_2 - 0x61U) < 6) {
    cVar1 = cVar1 + -0x57;
  }
  else {
    FUN_0043dcb0();
    cVar1 = '\0';
  }
  return cVar1;
}


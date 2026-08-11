/* Ghidra address: 00f2eb10 */
/* Ghidra symbol: FUN_00f2eb10 */


void FUN_00f2eb10(longlong param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (((((byte)(cVar1 - 1U) < 5) || ((byte)(cVar1 - 9U) < 3)) || (cVar1 == '\x10')) ||
     (cVar1 == '\x12')) {
    FUN_00f2bd20(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    FUN_00f2e820();
  }
  return;
}


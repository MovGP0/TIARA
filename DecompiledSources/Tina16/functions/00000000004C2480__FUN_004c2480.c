/* Ghidra address: 004c2480 */
/* Ghidra symbol: FUN_004c2480 */


void FUN_004c2480(longlong param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x40));
    if (cVar1 != '\0') break;
    FUN_004c25a0(*(undefined8 *)(param_1 + 0x40));
  }
  FUN_004be030(*(undefined8 *)(param_1 + 0x40),0);
  return;
}


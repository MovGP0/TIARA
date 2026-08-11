/* Ghidra address: 004c28a0 */
/* Ghidra symbol: FUN_004c28a0 */


void FUN_004c28a0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_004c23c0(*(undefined8 *)(param_1 + 0x40));
  FUN_004c8510(*(undefined8 *)(param_1 + 0x48),uVar2);
  while( true ) {
    cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x40));
    if (cVar1 != '\0') break;
    FUN_004c2a60(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  }
  FUN_004be030(*(undefined8 *)(param_1 + 0x40),0);
  FUN_004c48a0(*(undefined8 *)(param_1 + 0x48));
  return;
}


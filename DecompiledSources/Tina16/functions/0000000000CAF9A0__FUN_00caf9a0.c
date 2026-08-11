/* Ghidra address: 00caf9a0 */
/* Ghidra symbol: FUN_00caf9a0 */


void FUN_00caf9a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00cb0720(*(undefined8 *)(param_2 + 0x60));
  if (cVar1 == '\0') {
    FUN_00caf810(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),
                 *(undefined8 *)(param_2 + 0x70));
  }
  return;
}


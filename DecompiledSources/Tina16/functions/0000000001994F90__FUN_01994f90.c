/* Ghidra address: 01994f90 */
/* Ghidra symbol: FUN_01994f90 */


void FUN_01994f90(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x06') {
    *(undefined1 *)(param_1 + 0x2c + (longlong)*(short *)(param_2 + 0x2d8)) = 1;
  }
  return;
}


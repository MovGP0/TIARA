/* Ghidra address: 010c8950 */
/* Ghidra symbol: FUN_010c8950 */


void FUN_010c8950(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_010c7a10(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    if (*(double *)(param_1 + 8) <= 1e-30) {
      *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0x3ff0000000000000;
    }
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


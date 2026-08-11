/* Ghidra address: 017e9480 */
/* Ghidra symbol: FUN_017e9480 */


void FUN_017e9480(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x629) == '\0') {
    FUN_010c8670(param_2);
  }
  dVar1 = (double)FUN_0040bdd0(*(undefined8 *)(param_2 + 8));
  dVar2 = (double)FUN_0040bcd0(*(undefined8 *)(param_2 + 8));
  *(double *)(param_2 + 8) = dVar1 / dVar2;
  return;
}


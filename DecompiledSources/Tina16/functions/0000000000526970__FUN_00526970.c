/* Ghidra address: 00526970 */
/* Ghidra symbol: FUN_00526970 */


double FUN_00526970(ulonglong param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  
  cVar1 = FUN_00527350(param_1,0);
  if (cVar1 == '\0') {
    dVar2 = (double)FUN_0040af80(param_1);
    dVar3 = (double)FUN_0040af80(param_1 ^ 0x8000000000000000);
    dVar2 = (dVar2 - dVar3) / 2.0;
  }
  else {
    dVar2 = 0.0;
  }
  return dVar2;
}


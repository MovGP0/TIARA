/* Ghidra address: 00c44110 */
/* Ghidra symbol: FUN_00c44110 */


double FUN_00c44110(ulonglong param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00c42a20(param_1);
  dVar2 = (double)FUN_00c42a20(param_1 ^ 0x8000000000000000);
  return (dVar1 + dVar2) * 0.5;
}


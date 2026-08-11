/* Ghidra address: 017c59c0 */
/* Ghidra symbol: FUN_017c59c0 */


int FUN_017c59c0(double param_1,double param_2,int param_3)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_0040c2f0(0x4024000000000000);
  dVar2 = (double)FUN_0040af80(dVar2 / (double)param_3);
  iVar1 = 1;
  while (param_1 < param_2) {
    param_1 = param_1 * dVar2;
    if (param_1 < param_2) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


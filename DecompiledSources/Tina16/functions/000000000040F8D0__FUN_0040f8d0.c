/* Ghidra address: 0040f8d0 */
/* Ghidra symbol: FUN_0040f8d0 */


int FUN_0040f8d0(double *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  short sStack_1a;
  
  iVar3 = 0;
  while( true ) {
    if (*param_1 == 0.0) {
      return iVar3;
    }
    sVar1 = FUN_0040a260(param_1);
    sStack_1a = (short)((uint)(sVar1 * 0x4d10) >> 0x10);
    iVar2 = (int)sStack_1a;
    if (iVar2 == 0) break;
    iVar3 = iVar3 + iVar2;
    dVar4 = (double)FUN_00410440(*param_1,-iVar2);
    *param_1 = dVar4;
  }
  return iVar3;
}


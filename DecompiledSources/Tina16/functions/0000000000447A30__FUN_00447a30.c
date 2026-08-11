/* Ghidra address: 00447a30 */
/* Ghidra symbol: FUN_00447a30 */


int FUN_00447a30(longlong param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = FUN_00432270(param_1 + 0x3e);
    if (cVar1 == '\0') break;
    *param_2 = *param_2 * 10.0;
    *param_2 = (*param_2 + (double)*(ushort *)(param_1 + 0x3e)) - 48.0;
    FUN_004479a0(param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


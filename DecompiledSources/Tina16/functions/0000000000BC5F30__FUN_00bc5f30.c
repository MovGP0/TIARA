/* Ghidra address: 00bc5f30 */
/* Ghidra symbol: FUN_00bc5f30 */


int FUN_00bc5f30(short *param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  do {
    psVar2 = param_2;
    if (*param_1 == 0) {
      return iVar1;
    }
    for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
      if (*param_1 == *psVar2) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while( true );
}


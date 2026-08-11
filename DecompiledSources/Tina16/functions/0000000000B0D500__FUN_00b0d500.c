/* Ghidra address: 00b0d500 */
/* Ghidra symbol: FUN_00b0d500 */


short * FUN_00b0d500(short *param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  
  if ((((param_1 != (short *)0x0) && (param_2 != (short *)0x0)) && (*param_1 != 0)) &&
     (*param_2 != 0)) {
    while (*param_1 != 0) {
      if (*param_1 == *param_2) {
        iVar2 = 1;
        psVar1 = param_1;
        while( true ) {
          psVar1 = psVar1 + 1;
          if ((*psVar1 == 0) || (*psVar1 != param_2[iVar2])) break;
          iVar2 = iVar2 + 1;
        }
        if (param_2[iVar2] == 0) {
          return param_1;
        }
        param_1 = param_1 + 1;
      }
      else {
        param_1 = param_1 + 1;
      }
    }
  }
  return (short *)0x0;
}


/* Ghidra address: 00bcc200 */
/* Ghidra symbol: FUN_00bcc200 */


int FUN_00bcc200(undefined8 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  for (psVar1 = (short *)FUN_00416740(); *psVar1 != 0; psVar1 = psVar1 + 1) {
    if (*psVar1 == 9) {
      iVar2 = iVar2 + (param_2 - iVar2 % param_2);
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


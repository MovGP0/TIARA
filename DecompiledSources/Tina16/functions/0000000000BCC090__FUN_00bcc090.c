/* Ghidra address: 00bcc090 */
/* Ghidra symbol: FUN_00bcc090 */


undefined8 * FUN_00bcc090(undefined8 *param_1,longlong param_2,int param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int local_3c [3];
  
  FUN_00414ad0(param_1,param_2);
  cVar1 = FUN_00bcbec0(param_2,local_3c);
  if (cVar1 == '\0') {
    *param_4 = 0;
  }
  else {
    *param_4 = 1;
    psVar3 = (short *)(param_2 + -2 + (longlong)(local_3c[0] + 1) * 2);
    iVar5 = 0;
    do {
      if (*psVar3 == 9) {
        local_3c[0] = (local_3c[0] + param_3) - local_3c[0] % param_3;
        iVar5 = iVar5 + 1;
      }
      else {
        local_3c[0] = local_3c[0] + 1;
      }
      psVar3 = psVar3 + 1;
    } while (*psVar3 != 0);
    FUN_004169f0(param_1,local_3c[0]);
    local_3c[0] = 0;
    psVar3 = (short *)FUN_00416740(param_2);
    psVar4 = (short *)FUN_00416740(*param_1);
    do {
      if (*psVar3 == 9) {
        iVar2 = param_3 - local_3c[0] % param_3;
        local_3c[0] = local_3c[0] + iVar2;
        do {
          *psVar4 = 9;
          psVar4 = psVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          do {
            psVar3 = psVar3 + 1;
            *psVar4 = *psVar3;
            psVar4 = psVar4 + 1;
          } while (*psVar3 != 0);
          return param_1;
        }
      }
      else {
        *psVar4 = *psVar3;
        psVar4 = psVar4 + 1;
        local_3c[0] = local_3c[0] + 1;
      }
      psVar3 = psVar3 + 1;
    } while (*psVar3 != 0);
  }
  return param_1;
}


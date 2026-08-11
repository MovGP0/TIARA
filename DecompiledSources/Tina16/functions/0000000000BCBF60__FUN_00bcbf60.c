/* Ghidra address: 00bcbf60 */
/* Ghidra symbol: FUN_00bcbf60 */


undefined8 * FUN_00bcbf60(undefined8 *param_1,longlong param_2,int param_3,undefined1 *param_4)

{
  char cVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint local_3c [3];
  
  FUN_00414ad0(param_1,param_2);
  cVar1 = FUN_00bcbec0(param_2,local_3c);
  if (cVar1 == '\0') {
    *param_4 = 0;
  }
  else {
    *param_4 = 1;
    psVar2 = (short *)(param_2 + -2 + (longlong)(int)(local_3c[0] + 1) * 2);
    iVar5 = 0;
    do {
      if (*psVar2 == 9) {
        local_3c[0] = local_3c[0] + param_3 & (param_3 - 1U ^ 0x7fffffff);
        iVar5 = iVar5 + 1;
      }
      else {
        local_3c[0] = local_3c[0] + 1;
      }
      psVar2 = psVar2 + 1;
    } while (*psVar2 != 0);
    FUN_004169f0(param_1,local_3c[0]);
    local_3c[0] = 0;
    psVar2 = (short *)FUN_00416740(param_2);
    psVar3 = (short *)FUN_00416740(*param_1);
    do {
      if (*psVar2 == 9) {
        iVar4 = param_3 - (local_3c[0] & param_3 - 1U);
        local_3c[0] = local_3c[0] + iVar4;
        do {
          *psVar3 = 9;
          psVar3 = psVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          do {
            psVar2 = psVar2 + 1;
            *psVar3 = *psVar2;
            psVar3 = psVar3 + 1;
          } while (*psVar2 != 0);
          return param_1;
        }
      }
      else {
        *psVar3 = *psVar2;
        psVar3 = psVar3 + 1;
        local_3c[0] = local_3c[0] + 1;
      }
      psVar2 = psVar2 + 1;
    } while (*psVar2 != 0);
  }
  return param_1;
}


/* Ghidra address: 0119a400 */
/* Ghidra symbol: FUN_0119a400 */


int FUN_0119a400(longlong param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  longlong local_res8 [4];
  short local_1a [9];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = 8;
  psVar2 = local_1a;
  do {
    *psVar2 = 0x20;
    psVar2 = psVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  iVar1 = 0;
  if (iVar3 - 1U < 0x80000000) {
    psVar2 = local_1a;
    iVar4 = iVar3;
    do {
      *psVar2 = *(short *)(local_res8[0] + -2 + (longlong)(iVar1 + 1) * 2);
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar1 = 0;
  if (-1 < iVar3 + -1) {
    psVar2 = local_1a;
    do {
      if (*psVar2 == 0x31) {
        iVar1 = iVar1 + 1;
      }
      psVar2 = psVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_res8);
  return iVar1;
}


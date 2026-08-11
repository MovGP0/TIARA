/* Ghidra address: 0043f0c0 */
/* Ghidra symbol: FUN_0043f0c0 */


undefined8 * FUN_0043f0c0(undefined8 *param_1,short *param_2,char param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  
  iVar4 = 0;
  if (param_2 != (short *)0x0) {
    iVar4 = *(int *)(param_2 + -2);
  }
  iVar7 = 0;
  psVar6 = param_2;
  if (param_2 != (short *)0x0) {
    iVar7 = *(int *)(param_2 + -2);
  }
  for (; psVar6 < param_2 + iVar4; psVar6 = psVar6 + 1) {
    if (*psVar6 == 10) {
      if (param_3 == '\x01') {
        iVar7 = iVar7 + 1;
      }
    }
    else if (*psVar6 == 0xd) {
      if (param_3 == '\x01') {
        if (psVar6[1] == 10) {
          psVar6 = psVar6 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
      }
      else if (psVar6[1] == 10) {
        iVar7 = iVar7 + -1;
      }
    }
  }
  iVar5 = FUN_00414d00(psVar6);
  if (iVar7 == iVar5) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    FUN_00414740(param_1,0,iVar7);
    psVar6 = (short *)*param_1;
    psVar3 = param_2;
    while (psVar2 = psVar3, psVar2 < param_2 + iVar4) {
      sVar1 = *psVar2;
      if (sVar1 == 10) {
        if (param_3 == '\x01') {
          *psVar6 = 0xd;
          psVar6 = psVar6 + 1;
        }
        *psVar6 = 10;
        psVar6 = psVar6 + 1;
        psVar3 = psVar2 + 1;
      }
      else if (sVar1 == 0xd) {
        if (param_3 == '\x01') {
          *psVar6 = 0xd;
          psVar6 = psVar6 + 1;
        }
        *psVar6 = 10;
        psVar6 = psVar6 + 1;
        psVar3 = psVar2 + 1;
        if (psVar2[1] == 10) {
          psVar3 = psVar2 + 2;
        }
      }
      else {
        *psVar6 = sVar1;
        psVar6 = psVar6 + 1;
        psVar3 = psVar2 + 1;
      }
    }
  }
  return param_1;
}


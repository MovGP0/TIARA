/* Ghidra address: 00bcc2f0 */
/* Ghidra symbol: FUN_00bcc2f0 */


int FUN_00bcc2f0(longlong param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  
  pcVar1 = (code *)*param_3;
  uVar2 = param_3[1];
  if (0 < param_2) {
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = *(int *)(param_1 + -4);
    }
    if (param_2 <= iVar4) {
      psVar5 = (short *)(param_1 + -2 + (longlong)param_2 * 2);
      do {
        cVar3 = (*pcVar1)(uVar2,*psVar5);
        if (cVar3 != '\0') {
          return param_2;
        }
        psVar5 = psVar5 + 1;
        param_2 = param_2 + 1;
      } while (*psVar5 != 0);
    }
  }
  return 0;
}


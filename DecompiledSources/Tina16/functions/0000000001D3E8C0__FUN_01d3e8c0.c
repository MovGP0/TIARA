/* Ghidra address: 01d3e8c0 */
/* Ghidra symbol: FUN_01d3e8c0 */


void FUN_01d3e8c0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *param_4 = -1;
  *param_5 = -1;
  iVar5 = 0x2a;
  piVar4 = &DAT_01ffb498;
  do {
    cVar1 = FUN_01d3d530(param_1);
    if (((cVar1 != '\0') && (*piVar4 == param_1)) && (piVar4[1] + piVar4[2] != param_2)) {
      if (param_3 == param_2) {
        *param_4 = -1;
        *param_5 = param_3;
      }
      else {
        *param_4 = param_3;
        *param_5 = -1;
      }
      return;
    }
    if (*piVar4 == param_1) {
      iVar3 = piVar4[1];
      iVar2 = 1;
      if (0 < iVar3) {
        do {
          if (piVar4[(longlong)iVar2 + 2] == param_3) {
            *param_5 = -1;
            *param_4 = iVar2;
            return;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = piVar4[2];
      iVar2 = 1;
      if (0 < iVar3) {
        do {
          if (piVar4[(longlong)iVar2 + 0x18] == param_3) {
            *param_4 = -1;
            *param_5 = iVar2 + piVar4[1];
            return;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    piVar4 = piVar4 + 0x21;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


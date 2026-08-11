/* Ghidra address: 0188bac0 */
/* Ghidra symbol: FUN_0188bac0 */


void FUN_0188bac0(longlong param_1,int param_2,double param_3,double param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  bVar2 = false;
  if (param_2 != 0x100) {
    iVar4 = 0x42;
    piVar3 = &DAT_01fb1b68;
    do {
      if (*piVar3 == param_2) {
        if (param_5 == '\0') {
          iVar4 = piVar3[4];
          iVar1 = piVar3[5];
        }
        else {
          iVar4 = piVar3[5];
          iVar1 = piVar3[4];
        }
        param_4 = (double)iVar1 / 10.0;
        param_3 = (double)iVar4 / 10.0;
        bVar2 = true;
        break;
      }
      piVar3 = piVar3 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (!bVar2) {
    param_2 = 0x100;
  }
  *(char *)(param_1 + 0xa8) = param_5;
  *(int *)(param_1 + 0x68) = param_2;
  *(double *)(param_1 + 0x80) = param_3;
  *(double *)(param_1 + 0x78) = param_4;
  *(undefined8 *)(param_1 + 0x88) = 0x4014000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0x4014000000000000;
  *(undefined8 *)(param_1 + 0x98) = 0x4014000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0x4014000000000000;
  return;
}


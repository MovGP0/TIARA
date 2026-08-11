/* Ghidra address: 0188b4f0 */
/* Ghidra symbol: FUN_0188b4f0 */


undefined8 FUN_0188b4f0(int param_1,double *param_2,double *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0x42;
  piVar1 = &DAT_01fb1b68;
  do {
    if (*piVar1 == param_1) {
      *param_2 = (double)piVar1[4] / 10.0;
      *param_3 = (double)piVar1[5] / 10.0;
      return 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


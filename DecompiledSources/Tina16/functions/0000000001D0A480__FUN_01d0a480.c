/* Ghidra address: 01d0a480 */
/* Ghidra symbol: FUN_01d0a480 */


undefined8 FUN_01d0a480(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_00414ad0(param_1,&LAB_01d0a4f0);
  if ((param_2 < 0x21) || (0x7a < param_2)) {
    iVar2 = 9;
    piVar1 = &DAT_01ff1918;
    do {
      if (*piVar1 == param_2) {
        FUN_00414ad0(param_1,*(undefined8 *)(piVar1 + 2));
        return param_1;
      }
      piVar1 = piVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    FUN_00416780(param_1,param_2);
  }
  return param_1;
}


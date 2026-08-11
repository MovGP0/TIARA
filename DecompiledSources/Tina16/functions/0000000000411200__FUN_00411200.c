/* Ghidra address: 00411200 */
/* Ghidra symbol: FUN_00411200 */


int * FUN_00411200(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  do {
    piVar1 = *(int **)(param_1 + -0xc0);
    if (piVar1 != (int *)0x0) {
      iVar4 = *piVar1;
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          cVar2 = FUN_0041df30(piVar1 + (longlong)iVar3 * 10 + 2,param_2);
          if (cVar2 != '\0') {
            return piVar1 + (longlong)iVar3 * 10 + 2;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    param_1 = FUN_00410ca0(param_1);
  } while (param_1 != 0);
  return (int *)0x0;
}


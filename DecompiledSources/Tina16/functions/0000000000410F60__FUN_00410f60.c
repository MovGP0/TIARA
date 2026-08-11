/* Ghidra address: 00410f60 */
/* Ghidra symbol: FUN_00410f60 */


longlong * FUN_00410f60(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_0040d200(param_2,(longlong)*(int *)(param_1 + -0x80));
  *param_2 = param_1;
  while (param_1 != 0) {
    piVar1 = *(int **)(param_1 + -0xc0);
    if (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      iVar2 = 0;
      if (iVar3 - 1U < 0x80000000) {
        do {
          if (*(longlong *)(piVar1 + (longlong)iVar2 * 10 + 6) != 0) {
            *(longlong *)((longlong)param_2 + (longlong)piVar1[(longlong)iVar2 * 10 + 8]) =
                 *(longlong *)(piVar1 + (longlong)iVar2 * 10 + 6);
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    param_1 = FUN_00410ca0();
  }
  return param_2;
}


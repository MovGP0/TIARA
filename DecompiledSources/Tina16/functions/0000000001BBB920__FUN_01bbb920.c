/* Ghidra address: 01bbb920 */
/* Ghidra symbol: FUN_01bbb920 */


void FUN_01bbb920(longlong param_1,double *param_2,double *param_3,int param_4)

{
  int iVar1;
  double dVar2;
  
  iVar1 = 0;
  do {
    dVar2 = (*(double *)
              (*(longlong *)(param_1 + 0x38 + (longlong)iVar1 * 8) + 0x20 + (longlong)param_4 * 0x18
              ) * 1e-14) /
            *(double *)
             (*(longlong *)(param_1 + 0x38 + (longlong)iVar1 * 8) + 0x28 + (longlong)param_4 * 0x18)
    ;
    if (iVar1 == 0) {
      *param_2 = 1.0 / dVar2;
    }
    else {
      *param_3 = 1.0 / dVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 2);
  return;
}


/* Ghidra address: 017de420 */
/* Ghidra symbol: FUN_017de420 */


void FUN_017de420(undefined8 param_1,double param_2,longlong param_3,int param_4)

{
  double *pdVar1;
  
  pdVar1 = (double *)
           FUN_017dcb00(param_1,*(undefined8 *)(param_3 + -8 + (longlong)(param_4 + 1) * 8),8);
  *pdVar1 = *pdVar1 + param_2;
  return;
}


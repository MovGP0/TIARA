/* Ghidra address: 00448710 */
/* Ghidra symbol: FUN_00448710 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448710(undefined8 param_1,double *param_2)

{
  char cVar1;
  double local_20 [2];
  
  cVar1 = FUN_004483d0(param_1,local_20);
  if ((cVar1 != '\0') && ((local_20[0] < DAT_01dbe808 || (_DAT_01dbe800 < local_20[0])))) {
    cVar1 = '\0';
  }
  if (cVar1 != '\0') {
    *param_2 = local_20[0];
  }
  return;
}


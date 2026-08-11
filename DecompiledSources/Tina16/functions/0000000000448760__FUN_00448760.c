/* Ghidra address: 00448760 */
/* Ghidra symbol: FUN_00448760 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448760(undefined8 param_1,float *param_2)

{
  char cVar1;
  double local_20 [2];
  
  cVar1 = FUN_004483d0(param_1,local_20);
  if ((cVar1 != '\0') &&
     ((local_20[0] < (double)_DAT_01dbe7fc || ((double)_DAT_01dbe7f8 < local_20[0])))) {
    cVar1 = '\0';
  }
  if (cVar1 != '\0') {
    *param_2 = (float)local_20[0];
  }
  return;
}


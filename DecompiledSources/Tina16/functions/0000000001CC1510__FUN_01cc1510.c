/* Ghidra address: 01cc1510 */
/* Ghidra symbol: FUN_01cc1510 */


void FUN_01cc1510(longlong param_1,int param_2,double param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  
  pdVar1 = (double *)(param_1 + 0x48 + (longlong)param_2 * 0x11);
  puVar2 = (undefined8 *)(param_1 + 0xd0 + (longlong)param_2 * 0x10);
  if (*(char *)(pdVar1 + 2) == '\0') {
    if (param_3 < *pdVar1) {
      *pdVar1 = param_3;
      *puVar2 = *(undefined8 *)(param_1 + 0x168);
    }
    if (pdVar1[1] <= param_3 && param_3 != pdVar1[1]) {
      pdVar1[1] = param_3;
      puVar2[1] = *(undefined8 *)(param_1 + 0x168);
    }
  }
  else {
    *pdVar1 = param_3;
    pdVar1[1] = param_3;
    *(undefined1 *)(pdVar1 + 2) = 0;
    *puVar2 = *(undefined8 *)(param_1 + 0x168);
    puVar2[1] = *(undefined8 *)(param_1 + 0x168);
  }
  return;
}


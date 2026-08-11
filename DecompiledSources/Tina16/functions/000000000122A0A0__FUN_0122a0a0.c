/* Ghidra address: 0122a0a0 */
/* Ghidra symbol: FUN_0122a0a0 */


void FUN_0122a0a0(int param_1)

{
  double dVar1;
  double dVar2;
  
  if (*(int *)(PTR_DAT_020040b8 + 0xd8) == 1) {
    dVar1 = *(double *)(PTR_DAT_020040b8 + 0xb0);
    dVar2 = *(double *)(PTR_DAT_020040b8 + 0xb8);
  }
  else {
    dVar1 = (double)FUN_00c42800(*(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
    dVar2 = (double)FUN_00c42800(*(undefined8 *)(PTR_DAT_020040b8 + 0xb8));
  }
  if (*(int *)(PTR_DAT_020040b8 + 0xd8) == 0) {
    FUN_00526500(0x4024000000000000,
                 ((double)param_1 * (dVar2 - dVar1)) /
                 (double)(*(int *)(*(longlong *)(DAT_021076a0 + 0x738) + 0x98) -
                         *(int *)PTR_DAT_02001888) + dVar1);
  }
  return;
}


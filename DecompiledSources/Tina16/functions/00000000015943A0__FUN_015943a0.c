/* Ghidra address: 015943a0 */
/* Ghidra symbol: FUN_015943a0 */


void FUN_015943a0(byte param_1,short *param_2)

{
  if ((((param_2 != (short *)0x0) && (*(uint *)(param_2 + 0x12) == (uint)param_1)) &&
      (*param_2 == 0x3d7a)) && ((*(int *)(param_2 + 2) == 0x10003 && (param_2[1] == 0x60)))) {
    (&DAT_0210eeb0)[param_1] = param_2;
  }
  return;
}


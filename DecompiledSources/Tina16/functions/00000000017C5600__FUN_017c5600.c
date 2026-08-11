/* Ghidra address: 017c5600 */
/* Ghidra symbol: FUN_017c5600 */


void FUN_017c5600(longlong param_1,int param_2,int param_3,double param_4,double param_5,
                 double param_6,double *param_7,double *param_8,double *param_9,double *param_10,
                 double *param_11)

{
  double dVar1;
  double dVar2;
  
  if ((*(char *)(param_1 + 0xb) == '\x01') || (*(double *)(param_1 + 0x390) == 0.0)) {
    *param_7 = param_4 / *(double *)(param_1 + 0x10);
    *param_8 = param_5 / *(double *)(param_1 + 0x10);
    *param_9 = param_6 / *(double *)(param_1 + 0x10);
    *param_10 = *param_7 * *(double *)(*(longlong *)(param_1 + 0x168) + (longlong)param_2 * 8) +
                *param_9 * *(double *)(*(longlong *)(param_1 + 0x168) + (longlong)param_3 * 8);
    *param_11 = *param_8 * *(double *)(*(longlong *)(param_1 + 0x168) + (longlong)param_3 * 8) +
                *param_9 * *(double *)(*(longlong *)(param_1 + 0x168) + (longlong)param_2 * 8);
  }
  else {
    dVar1 = *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x398) *
            (*(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x398));
    param_6 = param_6 / dVar1;
    dVar2 = *(double *)(param_1 + 0x398) *
            (*(double *)(param_1 + 0x10) * 2.0 + *(double *)(param_1 + 0x398));
    *param_7 = dVar2 * (param_4 / dVar1);
    *param_8 = dVar2 * (param_5 / dVar1);
    *param_9 = dVar2 * param_6;
    dVar2 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x398);
    dVar2 = dVar2 * dVar2 * *(double *)(*(longlong *)(param_1 + 0x168) + (longlong)param_2 * 8) -
            *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10) *
            *(double *)(*(longlong *)(param_1 + 0x170) + (longlong)param_2 * 8);
    *param_10 = dVar2 * (param_4 / dVar1);
    *param_11 = dVar2 * param_6;
    dVar2 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x398);
    dVar2 = dVar2 * dVar2 * *(double *)(*(longlong *)(param_1 + 0x168) + (longlong)param_3 * 8) -
            *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10) *
            *(double *)(*(longlong *)(param_1 + 0x170) + (longlong)param_3 * 8);
    *param_10 = *param_10 + dVar2 * param_6;
    *param_11 = *param_11 + dVar2 * (param_5 / dVar1);
  }
  return;
}


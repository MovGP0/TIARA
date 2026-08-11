/* Ghidra address: 019d2180 */
/* Ghidra symbol: FUN_019d2180 */


void FUN_019d2180(longlong param_1,longlong param_2,double param_3)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0x78) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  for (iVar1 = 0;
      (((*(short *)(param_2 + 0x1fa4) == 0x4c &&
        (*(double *)(param_1 + 0x80) <= *(double *)(param_2 + 0x30))) ||
       ((*(short *)(param_2 + 0x1fa4) == 0x48 &&
        (*(double *)(param_1 + 0x80) <= *(double *)(param_2 + 0x20))))) && (iVar1 < 10));
      iVar1 = iVar1 + 1) {
    *(double *)(param_1 + 0x80) = *(double *)(param_1 + 0x80) * 10.0;
  }
  if (*(double *)(param_1 + 0x80) == *(double *)(param_1 + 0x78)) {
    *(undefined8 *)(param_1 + 0x80) = 0x412e848000000000;
  }
  if (1.0 < param_3) {
    *(double *)(param_1 + 0x80) = param_3;
  }
  FUN_0040d200(param_1 + 0xb0,0x650,0);
  FUN_005264b0(*(double *)(param_1 + 0x80) / *(double *)(param_1 + 0x78));
  iVar1 = FUN_0040c770();
  *(int *)(param_1 + 0x74) = iVar1 + 1;
  return;
}


/* Ghidra address: 017e8dc0 */
/* Ghidra symbol: FUN_017e8dc0 */


void FUN_017e8dc0(longlong param_1,int param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_b0;
  undefined1 local_a8 [8];
  double local_a0;
  undefined1 local_78 [8];
  double local_70;
  
  local_b0 = *(double *)(param_1 + 0x630);
  FUN_010c7a40(local_78,0);
  FUN_010c7a40(local_a8,0);
  local_70 = *(double *)(param_3 + 8) + local_b0;
  FUN_017e8660(param_1,param_2,local_78);
  local_a0 = *(double *)(param_3 + 8) - local_b0;
  FUN_017e8660(param_1,param_2,local_a8);
  *(double *)(param_3 + 8) = local_70 - local_a0;
  if (*(double *)(param_3 + 8) != 0.0) {
    FUN_0040c850(*(undefined8 *)(param_3 + 8));
    dVar1 = (double)FUN_0040c2f0();
    FUN_0040c850(local_b0);
    dVar2 = (double)FUN_0040c2f0();
    dVar3 = (double)FUN_0040c2f0(0x4024000000000000);
    if (dVar3 * 690.0 < dVar1 - dVar2) {
      FUN_017e2900(param_1,0x100);
      return;
    }
  }
  if (((0x127 < param_2) && (param_2 < 299)) && (*(char *)(param_1 + 0x629) == '\0')) {
    FUN_010c8690(&local_b0);
  }
  *(double *)(param_3 + 8) = *(double *)(param_3 + 8) / (local_b0 * 2.0);
  return;
}


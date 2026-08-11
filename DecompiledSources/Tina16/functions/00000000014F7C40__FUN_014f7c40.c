/* Ghidra address: 014f7c40 */
/* Ghidra symbol: FUN_014f7c40 */


void FUN_014f7c40(double *param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  if (*param_1 <= param_2) {
    if (param_1[3] == 0.0) {
      dVar2 = *param_1;
      dVar3 = *(double *)PTR_DAT_020011b0;
    }
    else {
      lVar1 = FUN_0040c840((param_2 - *param_1) * param_1[3]);
      dVar2 = *param_1 + (double)lVar1 / param_1[3];
      dVar3 = dVar2 + param_1[2] / param_1[3];
    }
    if (param_2 < param_1[1] || param_2 == param_1[1]) {
      if (dVar3 <= param_2) {
        *(undefined1 *)(param_1 + 6) = *(undefined1 *)((longlong)param_1 + 0x2b);
        param_1[7] = dVar2 + 1.0 / param_1[3];
        param_1[8] = dVar3;
        *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x2a);
      }
      else {
        *(undefined1 *)(param_1 + 6) = *(undefined1 *)((longlong)param_1 + 0x2a);
        param_1[7] = dVar3;
        if (*param_1 + param_1[2] / param_1[3] <= param_2) {
          param_1[8] = dVar2;
          *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x2b);
        }
        else {
          param_1[8] = *param_1;
          *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)(param_1 + 5);
        }
      }
      if (param_1[1] <= param_1[7] && param_1[7] != param_1[1]) {
        param_1[7] = param_1[1];
      }
    }
    else {
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)((longlong)param_1 + 0x29);
      if (dVar3 < param_1[1] || dVar3 == param_1[1]) {
        *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x2b);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x2a);
      }
      param_1[8] = param_1[1];
      param_1[7] = *(double *)PTR_DAT_020011b0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)(param_1 + 5);
    param_1[8] = 0.0;
    param_1[7] = *param_1;
  }
  return;
}


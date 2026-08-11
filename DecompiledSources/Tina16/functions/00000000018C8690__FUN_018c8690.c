/* Ghidra address: 018c8690 */
/* Ghidra symbol: FUN_018c8690 */


void FUN_018c8690(longlong *param_1,longlong param_2,int param_3,int *param_4,double param_5,
                 double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((1 < *(int *)(param_2 + 0x250)) && (*(char *)(param_2 + 0xc5) != '\0')) {
    if (*(double *)(param_2 + 0x290) <= (double)param_1[0x12] &&
        (double)param_1[0x12] != *(double *)(param_2 + 0x290)) {
      *(longlong *)(param_2 + 0x290) = param_1[0x12];
    }
    if (*(int *)(param_2 + 0x254) < *(int *)(param_2 + 0x250)) {
      param_1[0x12] = (longlong)param_5;
    }
    else {
      dVar1 = (double)(**(code **)(*param_1 + 0x20))(param_1);
      dVar2 = (double)(**(code **)(*param_1 + 0x98))(param_1);
      if (((0.0001 < (dVar1 - dVar2) - *(double *)(param_2 + 0x290)) ||
          (*(char *)(param_1[0x25] + 0x1a1) != '\0')) || (param_1[0x24] != 0)) {
        param_1[0x12] = *(longlong *)(param_2 + 0x290);
      }
      else {
        if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
          dVar1 = (double)(**(code **)(*param_1 + 0x20))(param_1);
          dVar2 = (double)(**(code **)(*param_1 + 0x98))(param_1);
          dVar3 = (double)(**(code **)(*param_1 + 0x90))(param_1,0);
          if ((dVar1 - dVar2) - dVar3 < (double)param_1[0x12] - (double)param_1[0x1f]) {
            FUN_018cf2f0(param_1,param_1[0x1d]);
          }
        }
        if (*(char *)((longlong)param_1 + 0xf1) == '\0') {
          if (0 < *param_4) {
            dVar1 = (double)(**(code **)(*param_1 + 0x20))(param_1);
            dVar2 = (double)(**(code **)(*param_1 + 0x98))(param_1);
            if ((param_5 - param_6) + (*(double *)(param_2 + 0x290) - param_5) < dVar1 - dVar2) {
              param_3 = *param_4;
              param_5 = param_6;
              if (*(char *)(param_2 + 0x272) != '\0') {
                FUN_018cb4f0(param_1,*(undefined8 *)(param_2 + 0x220));
                FUN_018cb4f0(param_1,*(undefined8 *)(param_2 + 0x210));
              }
            }
          }
          (**(code **)(*(longlong *)param_1[7] + 0x68))((longlong *)param_1[7],param_3);
          (**(code **)(*param_1 + 0x40))(param_1);
          (**(code **)(*(longlong *)param_1[7] + 0xa0))
                    ((longlong *)param_1[7],param_1[0x11],param_1[0x12]);
          param_1[0x12] =
               (longlong)(((double)param_1[0x12] + *(double *)(param_2 + 0x290)) - param_5);
        }
        else {
          (**(code **)(*param_1 + 0x40))(param_1);
        }
      }
      *param_4 = 0;
    }
    FUN_019694e0(param_2,*(int *)(param_2 + 0x254) + 1);
  }
  return;
}


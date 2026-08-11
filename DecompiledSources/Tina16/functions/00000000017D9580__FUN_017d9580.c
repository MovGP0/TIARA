/* Ghidra address: 017d9580 */
/* Ghidra symbol: FUN_017d9580 */


void FUN_017d9580(longlong param_1,int param_2,int param_3,double param_4,byte param_5,char param_6)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  double *local_40 [3];
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    if ((0 < param_2) && (0 < param_3)) {
      if (param_3 == *(int *)(param_1 + 8)) {
        if ((param_5 & *(byte *)(param_1 + 0x90)) != 0) {
          param_2 = (int)*(short *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 2);
        }
        if (param_6 == '\0') {
          *(double *)(*(longlong *)(param_1 + 0x1b8) + (longlong)param_2 * 8) =
               *(double *)(*(longlong *)(param_1 + 0x1b8) + (longlong)param_2 * 8) + param_4;
        }
        else {
          *(double *)(*(longlong *)(param_1 + 0x1c0) + (longlong)param_2 * 8) =
               *(double *)(*(longlong *)(param_1 + 0x1c0) + (longlong)param_2 * 8) + param_4;
        }
      }
      else {
        if (*(char *)(param_1 + 0x93) != '\0') {
          return;
        }
        if ((param_5 & *(byte *)(param_1 + 0x90)) != 0) {
          param_2 = (int)*(short *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 2);
          param_3 = (int)*(short *)(*(longlong *)(param_1 + 0x78) + (longlong)param_3 * 2);
        }
        lVar4 = (longlong)param_2;
        lVar5 = (longlong)param_3;
        sVar2 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4 * 0x18 + 8) +
                          lVar5 * 2);
        if (sVar2 < 0) {
          FUN_017d90f0(param_1,*(longlong *)(param_1 + 0x20) + lVar4 * 0x18,param_3,param_4,param_5,
                       param_6);
          FUN_017d9320(param_1,*(longlong *)(param_1 + 0x28) + lVar5 * 0x18,param_2);
        }
        else {
          cVar3 = FUN_017d9420(param_1,*(longlong *)(param_1 + 0x20) + lVar4 * 0x18,(longlong)sVar2,
                               param_4,param_6);
          if (cVar3 != '\0') {
            FUN_017d9250(param_1,*(longlong *)(param_1 + 0x20) + lVar4 * 0x18,param_3);
            FUN_017d9380(param_1,*(longlong *)(param_1 + 0x28) + lVar5 * 0x18,param_2);
          }
        }
      }
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x1224);
    *piVar1 = *piVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x18) == '\x01') && (0 < param_2)) && (0 < param_3)) {
    if ((param_3 < *(int *)(param_1 + 8)) && (*(char *)(param_1 + 0x93) == '\0')) {
      local_40[0] = (double *)thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_2,param_3);
      if (local_40[0] != (double *)0x0) {
        if (param_6 == '\x01') {
          local_40[0] = (double *)FUN_017dcb00(param_1,local_40[0],8);
        }
        *local_40[0] = *local_40[0] + param_4;
        lVar4 = *(longlong *)(param_1 + 0x10);
        if ((lVar4 != 0) && (*(char *)(*(longlong *)(lVar4 + 0x110) + 0xe) != '\0')) {
          FUN_01663140(*(undefined8 *)(lVar4 + 0x110),local_40,0,1);
        }
      }
    }
    else if (param_6 == '\0') {
      if (*(char *)(param_1 + 0x94) == '\0') {
        *(double *)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_2 * 8) =
             *(double *)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_2 * 8) + param_4;
      }
      else {
        *(double *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(param_2 * 2) * 8) =
             *(double *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(param_2 * 2) * 8) + param_4;
      }
    }
    else {
      lVar4 = (longlong)(param_2 * 2 + 1);
      *(double *)(*(longlong *)(param_1 + 0x1c8) + lVar4 * 8) =
           *(double *)(*(longlong *)(param_1 + 0x1c8) + lVar4 * 8) + param_4;
    }
  }
  return;
}


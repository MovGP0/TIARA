/* Ghidra address: 017e2d40 */
/* Ghidra symbol: FUN_017e2d40 */


void FUN_017e2d40(undefined8 param_1,char *param_2,int param_3)

{
  double dVar1;
  
  if (0 < param_3 + -0x127) {
    if ((*param_2 == '\x01') && (PTR_DAT_02003188[(longlong)(param_3 + -0x127) * 2 + -1] == '\0')) {
      FUN_017e2900(param_1,0x102);
    }
    else if ((*param_2 == '\x01') &&
            ((param_3 == 0x14e || ((0x147 < param_3 && (param_3 < 0x14e)))))) {
      FUN_017e2900(param_1,0x102);
    }
    else {
      if ((*param_2 == '\0') && (PTR_DAT_02003188[(longlong)(param_3 + -0x127) * 2 + -1] == '\x01'))
      {
        FUN_010c7c70(param_2);
      }
      if (param_3 < 0x133) {
        if (param_3 == 0x132) {
          dVar1 = (double)FUN_0040c760(*(double *)(param_2 + 8) * *(double *)(param_2 + 8) +
                                       *(double *)(param_2 + 0x10) * *(double *)(param_2 + 0x10));
          if (1e+150 < dVar1) {
            FUN_017e2900(param_1,0x100);
          }
        }
        else if (param_3 == 0x12a) {
          dVar1 = (double)FUN_0040bcd0(*(undefined8 *)(param_2 + 8));
          if (dVar1 == 0.0) {
            FUN_017e2900(param_1,0x10d);
          }
        }
        else if (param_3 == 0x12d) {
          if (690.0 < *(double *)(param_2 + 8)) {
            FUN_017e2900(param_1,0x100);
          }
        }
        else if (((param_3 == 0x130) && (*(double *)(param_2 + 8) == 0.0)) &&
                (*(double *)(param_2 + 0x10) == 0.0)) {
          FUN_017e2900(param_1,0x10d);
        }
      }
      else if (param_3 == 0x14d) {
        if (*(double *)(param_2 + 8) <= 0.0 && *(double *)(param_2 + 8) != 0.0) {
          FUN_017e2900(param_1,0x10d);
        }
      }
      else if (param_3 == 0x14e) {
        if (*(double *)(param_2 + 8) <= 0.0) {
          FUN_017e2900(param_1,0x10d);
        }
      }
      else if ((param_3 - 0x178U < 4) &&
              (*(double *)(param_2 + 8) <= 0.0 && *(double *)(param_2 + 8) != 0.0)) {
        FUN_017e2900(param_1,0x10d);
      }
    }
  }
  return;
}


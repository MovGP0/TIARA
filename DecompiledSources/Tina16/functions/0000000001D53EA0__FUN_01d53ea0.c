/* Ghidra address: 01d53ea0 */
/* Ghidra symbol: FUN_01d53ea0 */


void FUN_01d53ea0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  
  FUN_016ee1f0(param_2,param_1,0x1b8);
  dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1)
                               ,0,0);
  if (param_4 == '\x01') {
    if (dVar1 <= *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x20) / 2.0) {
      if (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x20) / 2.0 <= dVar1) {
        if (*(int *)(param_1 + 4) == 1) {
          dVar2 = *(double *)(param_1 + 0x30);
        }
        else if (*(int *)(param_1 + 4) == -1) {
          dVar2 = *(double *)(param_1 + 0x28);
        }
        else {
          dVar2 = 0.0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        dVar2 = *(double *)(param_1 + 0x28);
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = 1;
      dVar2 = *(double *)(param_1 + 0x30);
    }
    FUN_016ed320(param_2,2,dVar2 - dVar1,0x3ff0000000000000,0);
  }
  else if (param_4 == '\x06') {
    if (dVar1 <= *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x20) / 2.0) {
      if (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x20) / 2.0 <= dVar1) {
        if (*(int *)(param_1 + 4) == 1) {
          dVar2 = *(double *)(param_1 + 0x30);
        }
        else if (*(int *)(param_1 + 4) == -1) {
          dVar2 = *(double *)(param_1 + 0x28);
        }
        else {
          dVar2 = 0.0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        dVar2 = *(double *)(param_1 + 0x28);
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = 1;
      dVar2 = *(double *)(param_1 + 0x30);
    }
    FUN_016ed320(param_2,2,dVar2 - dVar1,0x3ff0000000000000,0);
  }
  else if (param_4 == '\b') {
    if (dVar1 <= *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x20) / 2.0) {
      if (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x20) / 2.0 <= dVar1) {
        if (*(int *)(param_1 + 4) == 1) {
          dVar2 = *(double *)(param_1 + 0x30);
        }
        else if (*(int *)(param_1 + 4) == -1) {
          dVar2 = *(double *)(param_1 + 0x28);
        }
        else {
          dVar2 = 0.0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        dVar2 = *(double *)(param_1 + 0x28);
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = 1;
      dVar2 = *(double *)(param_1 + 0x30);
    }
    FUN_016ed320(param_2,2,dVar2 - dVar1,0x3ff0000000000000,0);
  }
  FUN_016ea050(param_2,param_1,0x1b8);
  return;
}


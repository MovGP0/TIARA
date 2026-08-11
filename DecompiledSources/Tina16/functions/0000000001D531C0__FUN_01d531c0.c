/* Ghidra address: 01d531c0 */
/* Ghidra symbol: FUN_01d531c0 */


void FUN_01d531c0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  FUN_016ee1f0(param_2,param_1,0x28);
  dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1)
                               ,0,0);
  dVar2 = (double)FUN_01d51dc0(dVar1);
  if (*(double *)(param_1 + 0x18) < dVar2) {
    dVar2 = *(double *)(param_1 + 0x10);
  }
  else {
    dVar2 = 0.0;
  }
  if (param_4 == '\x01') {
    if (dVar1 < *(double *)(param_1 + 0x18) || dVar1 == *(double *)(param_1 + 0x18)) {
      if (-*(double *)(param_1 + 0x18) <= dVar1) {
        dVar3 = 0.0;
      }
      else {
        dVar3 = *(double *)(param_1 + 0x10) * (dVar1 + *(double *)(param_1 + 0x18));
      }
    }
    else {
      dVar3 = *(double *)(param_1 + 0x10) * (dVar1 - *(double *)(param_1 + 0x18));
    }
    FUN_016ed320(param_2,2,dVar3 - dVar2 * dVar1,dVar2,0);
  }
  else if (param_4 == '\x06') {
    if (dVar1 < *(double *)(param_1 + 0x18) || dVar1 == *(double *)(param_1 + 0x18)) {
      if (-*(double *)(param_1 + 0x18) <= dVar1) {
        dVar3 = 0.0;
      }
      else {
        dVar3 = *(double *)(param_1 + 0x10) * (dVar1 + *(double *)(param_1 + 0x18));
      }
    }
    else {
      dVar3 = *(double *)(param_1 + 0x10) * (dVar1 - *(double *)(param_1 + 0x18));
    }
    FUN_016ed320(param_2,2,dVar3 - dVar2 * dVar1,dVar2,0);
  }
  else if (param_4 == '\b') {
    if (dVar1 < *(double *)(param_1 + 0x18) || dVar1 == *(double *)(param_1 + 0x18)) {
      if (-*(double *)(param_1 + 0x18) <= dVar1) {
        dVar3 = 0.0;
      }
      else {
        dVar3 = *(double *)(param_1 + 0x10) * (dVar1 + *(double *)(param_1 + 0x18));
      }
    }
    else {
      dVar3 = *(double *)(param_1 + 0x10) * (dVar1 - *(double *)(param_1 + 0x18));
    }
    FUN_016ed320(param_2,2,dVar3 - dVar2 * dVar1,dVar2,0);
  }
  FUN_016ea050(param_2,param_1,0x28);
  return;
}


/* Ghidra address: 0082b0e0 */
/* Ghidra symbol: FUN_0082b0e0 */


void FUN_0082b0e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 0x529) == '\x03') {
    for (; (lVar1 != 0 &&
           (((*(char *)(lVar1 + 0x298) == '\x01' && (*(int *)(lVar1 + 0x2a8) == 0)) ||
            ((*(char *)(lVar1 + 0x298) == '\0' && (*(longlong *)(lVar1 + 0x2a0) == 0))))));
        lVar1 = *(longlong *)(lVar1 + 0x78)) {
    }
    if (lVar1 == 0) {
      FUN_00687f30(param_1);
    }
    else if (*(char *)(lVar1 + 0x298) == '\x01') {
      FUN_0080dac0(*(undefined8 *)PTR_DAT_02004030,*(undefined4 *)(lVar1 + 0x2a8));
    }
    else {
      FUN_0080da00(*(undefined8 *)PTR_DAT_02004030,*(undefined8 *)(lVar1 + 0x2a0));
    }
  }
  else if (*(char *)(param_1 + 0x529) == '\x06') {
    lVar1 = FUN_007f9b70(param_1,1);
    if (lVar1 == 0) {
      FUN_00687f30(param_1);
    }
    else {
      FUN_00805200(lVar1);
    }
  }
  else {
    FUN_00687f30(param_1);
  }
  return;
}


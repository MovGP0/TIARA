/* Ghidra address: 01233310 */
/* Ghidra symbol: FUN_01233310 */


void FUN_01233310(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00b90440(*(undefined8 *)(param_1 + 0x810),*(undefined8 *)(PTR_DAT_020040b8 + 0xc0));
  if (-600.0 < *(double *)(PTR_DAT_020040b8 + 0xc0) ||
      *(double *)(PTR_DAT_020040b8 + 0xc0) == -600.0) {
    if (-3.0103 < *(double *)(PTR_DAT_020040b8 + 0xc0)) {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x810),0xc00999999999999a);
      uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x810));
      *(undefined8 *)(PTR_DAT_020040b8 + 0xc0) = uVar1;
    }
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x810),0xc082c00000000000);
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(PTR_DAT_020040b8 + 0xc0) = uVar1;
  }
  return;
}


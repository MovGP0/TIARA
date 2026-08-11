/* Ghidra address: 012336d0 */
/* Ghidra symbol: FUN_012336d0 */


void FUN_012336d0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    uVar2 = *(undefined8 *)(param_1 + 0x810);
    uVar1 = FUN_00b90090(uVar2);
    FUN_00b90440(uVar2,uVar1);
    if (-600.0 < *(double *)(PTR_DAT_020040b8 + 0xc0) ||
        *(double *)(PTR_DAT_020040b8 + 0xc0) == -600.0) {
      if (-3.0103 < *(double *)(PTR_DAT_020040b8 + 0xc0)) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x810),0xc00999999999999a);
        uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x810));
        *(undefined8 *)(PTR_DAT_020040b8 + 0xc0) = uVar2;
      }
    }
    else {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x810),0xc082c00000000000);
      uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x810));
      *(undefined8 *)(PTR_DAT_020040b8 + 0xc0) = uVar2;
    }
    FUN_0122b3a0(param_1,DAT_021076a8);
  }
  return;
}


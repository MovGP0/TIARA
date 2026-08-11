/* Ghidra address: 0044e280 */
/* Ghidra symbol: FUN_0044e280 */


void FUN_0044e280(byte param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_0200c670;
  if ((param_1 != 1) && (uVar1 = DAT_0200c678, param_1 != 2)) {
    if ((byte)(param_1 - 3) < 0x1a) {
      uVar1 = FUN_0044d490(*(undefined8 *)
                            (PTR_PTR_02002300 +
                            (ulonglong)(byte)PTR_DAT_02005028[(ulonglong)param_1 * 0x10 + -0x30] * 8
                            ),1,*(undefined8 *)
                                 (PTR_DAT_02005028 + (ulonglong)param_1 * 0x10 + -0x28));
    }
    else {
      uVar1 = FUN_0044e1f0();
    }
  }
  if (param_2 == 0) {
    FUN_004134c0(uVar1);
  }
  else {
    FUN_004133b0(uVar1,param_2);
  }
  return;
}


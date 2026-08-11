/* Ghidra address: 00448970 */
/* Ghidra symbol: FUN_00448970 */


undefined8 FUN_00448970(ulonglong param_1)

{
  FUN_004488d0(param_1);
  if ((longlong)param_1 < 0) {
    FUN_004098e0(3);
  }
  return CONCAT44((int)(param_1 / DAT_01dc0598),(int)(param_1 % (ulonglong)DAT_01dc0598));
}


/* Ghidra address: 005fc880 */
/* Ghidra symbol: FUN_005fc880 */


undefined8 FUN_005fc880(longlong param_1)

{
  int iVar1;
  
  if ((DAT_01decc12 == *(char *)(param_1 + 0x12)) &&
     (iVar1 = FUN_00414f50(&DAT_01decc13,param_1 + 0x13,(ulonglong)DAT_01decc13 + 1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


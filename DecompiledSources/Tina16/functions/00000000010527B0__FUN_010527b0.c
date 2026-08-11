/* Ghidra address: 010527b0 */
/* Ghidra symbol: FUN_010527b0 */


undefined8 FUN_010527b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if (((iVar1 == DAT_0202f410) ||
      (iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8)), iVar1 == DAT_0202f418)) &&
     (iVar1 = FUN_00f8e670(*(undefined8 *)(param_1 + 0x9d8)), iVar1 == 2)) {
    return 1;
  }
  return 0;
}


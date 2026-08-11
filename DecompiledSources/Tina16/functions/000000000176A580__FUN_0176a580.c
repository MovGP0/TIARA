/* Ghidra address: 0176a580 */
/* Ghidra symbol: FUN_0176a580 */


undefined8 FUN_0176a580(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_1 + 0x38));
  if (((iVar1 == 0) &&
      (iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x40)),
      iVar1 == 0)) && (*(char *)(param_2 + 0x70) == *(char *)(param_1 + 0x70))) {
    return 1;
  }
  return 0;
}


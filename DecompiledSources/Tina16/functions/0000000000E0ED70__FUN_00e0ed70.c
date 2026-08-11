/* Ghidra address: 00e0ed70 */
/* Ghidra symbol: FUN_00e0ed70 */


undefined8 FUN_00e0ed70(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02002cd8);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02002cd0),
     iVar1 != 0)) {
    return 0;
  }
  return 1;
}


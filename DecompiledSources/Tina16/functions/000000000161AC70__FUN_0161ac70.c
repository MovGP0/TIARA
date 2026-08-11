/* Ghidra address: 0161ac70 */
/* Ghidra symbol: FUN_0161ac70 */


undefined8 FUN_0161ac70(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
      (iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10)),
      iVar1 == 0)) &&
     (iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18)),
     iVar1 == 0)) {
    return 1;
  }
  return 0;
}


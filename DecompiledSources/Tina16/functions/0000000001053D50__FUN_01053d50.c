/* Ghidra address: 01053d50 */
/* Ghidra symbol: FUN_01053d50 */


undefined8 FUN_01053d50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x9d8) == 0) {
LAB_01053d87:
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00f8e670(*(undefined8 *)(param_1 + 0x9d8));
    if (iVar1 == 2) {
      iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
      if (iVar1 != DAT_0202f414) goto LAB_01053d87;
    }
    uVar2 = 1;
  }
  return uVar2;
}


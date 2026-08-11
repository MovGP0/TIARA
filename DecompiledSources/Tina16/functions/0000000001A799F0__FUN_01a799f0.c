/* Ghidra address: 01a799f0 */
/* Ghidra symbol: FUN_01a799f0 */


void FUN_01a799f0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(longlong *)PTR_DAT_02003f68 != 0) {
    iVar1 = FUN_007fd7d0(param_1);
    FUN_00806af0(*(undefined8 *)PTR_DAT_02003f68,
                 (iVar1 + *(int *)(param_1 + 0x98)) - *(int *)(*(longlong *)PTR_DAT_02003f68 + 0x98)
                );
    uVar2 = FUN_007fd800(param_1);
    FUN_00806b40(*(undefined8 *)PTR_DAT_02003f68,uVar2);
  }
  return;
}


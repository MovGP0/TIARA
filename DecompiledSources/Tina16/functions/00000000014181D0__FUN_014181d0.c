/* Ghidra address: 014181d0 */
/* Ghidra symbol: FUN_014181d0 */


undefined8 FUN_014181d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_004170c0(L"PIC10",*(undefined8 *)(param_1 + 4000),1);
  if (((iVar1 != 1) &&
      (iVar1 = FUN_004170c0(L"PIC12",*(undefined8 *)(param_1 + 4000),1), iVar1 != 1)) &&
     (iVar1 = FUN_004170c0(L"PIC14",*(undefined8 *)(param_1 + 4000),1), iVar1 != 1)) {
    return 0;
  }
  return 1;
}


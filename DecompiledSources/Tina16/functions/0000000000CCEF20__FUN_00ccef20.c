/* Ghidra address: 00ccef20 */
/* Ghidra symbol: FUN_00ccef20 */


void FUN_00ccef20(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x1b0) == '\0') &&
     (iVar1 = (**(code **)PTR_DAT_020031f8)(*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x18)),
     0 < iVar1)) {
    return;
  }
  FUN_00cb4580(param_1,param_2);
  return;
}


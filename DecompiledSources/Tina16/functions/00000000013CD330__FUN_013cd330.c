/* Ghidra address: 013cd330 */
/* Ghidra symbol: FUN_013cd330 */


void FUN_013cd330(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x949) != '\0') &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x2b0))
                        (*(longlong **)(param_1 + 0x778)), iVar1 == 1)) {
    FUN_013cdcc0(param_1,*(undefined8 *)PTR_DAT_02004030);
    return;
  }
  FUN_013ca310(param_1,*(undefined8 *)PTR_DAT_02004030);
  return;
}


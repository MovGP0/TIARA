/* Ghidra address: 0067e0f0 */
/* Ghidra symbol: FUN_0067e0f0 */


void FUN_0067e0f0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_00652f10(param_1,param_2);
  FUN_005ff880(*(undefined8 *)(param_1 + 0x490),*(undefined8 *)(param_1 + 0xb8));
  iVar1 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x490),&LAB_0067e170);
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1;
  FUN_00423b10(param_2,0xffffffff,0xffffffff);
  if (*(char *)(param_1 + 0x390) != '\0') {
    FUN_00423b10(param_2,0xffffffff,0xffffffff);
  }
  return;
}


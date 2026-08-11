/* Ghidra address: 00743970 */
/* Ghidra symbol: FUN_00743970 */


void FUN_00743970(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00652f10(param_1,param_2);
  FUN_00423b10(param_2,-*(int *)(param_1 + 0x4a0),-*(int *)(param_1 + 0x4a0));
  iVar1 = 0;
  if (*(char *)(param_1 + 0x49b) != '\0') {
    iVar1 = *(int *)(param_1 + 0x49c);
  }
  if (*(char *)(param_1 + 0x49a) != '\0') {
    iVar1 = iVar1 + *(int *)(param_1 + 0x49c);
  }
  FUN_00423b10(param_2,-iVar1,-iVar1);
  return;
}


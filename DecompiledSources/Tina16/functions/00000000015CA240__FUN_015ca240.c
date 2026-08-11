/* Ghidra address: 015ca240 */
/* Ghidra symbol: FUN_015ca240 */


void FUN_015ca240(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_015c9e90(param_1);
  if (((cVar1 == '\0') &&
      (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x28) + 0x28))) &&
     (*(char *)(param_1 + 0x103) != '\0')) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x34,param_1);
    FUN_004134c0(uVar2);
  }
  return;
}


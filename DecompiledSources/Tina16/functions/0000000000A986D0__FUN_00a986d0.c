/* Ghidra address: 00a986d0 */
/* Ghidra symbol: FUN_00a986d0 */


void FUN_00a986d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00ac5ce0);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}


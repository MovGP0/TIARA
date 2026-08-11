/* Ghidra address: 01c118e0 */
/* Ghidra symbol: FUN_01c118e0 */


void FUN_01c118e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int local_28 [2];
  int local_20;
  
  FUN_01be6190(param_1,param_2,param_3);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_01bdf860);
  if (cVar1 != '\0') {
    FUN_0064d000(*(undefined8 *)(param_3 + 0x78),local_28);
    if (local_28[0] < *(int *)(param_1 + 0x90)) {
      FUN_0064d000(*(undefined8 *)(param_3 + 0x78),local_28);
      FUN_0064cb30(param_1,local_20 + -6);
    }
  }
  return;
}


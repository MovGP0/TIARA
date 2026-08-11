/* Ghidra address: 006d66d0 */
/* Ghidra symbol: FUN_006d66d0 */


void FUN_006d66d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_00652e80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_006ae898);
  if (cVar2 != '\0') {
    FUN_006d6750(param_1,uVar1);
  }
  return;
}


/* Ghidra address: 00a0a050 */
/* Ghidra symbol: FUN_00a0a050 */


void FUN_00a0a050(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
  if (cVar2 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    uVar1 = FUN_00a0ade0(param_1);
    (**(code **)(*param_2 + 0x10))(param_2,uVar1);
  }
  return;
}


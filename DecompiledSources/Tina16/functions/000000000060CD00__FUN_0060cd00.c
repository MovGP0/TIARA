/* Ghidra address: 0060cd00 */
/* Ghidra symbol: FUN_0060cd00 */


void FUN_0060cd00(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  
  if ((param_2 != 0) && (cVar2 = FUN_004113d0(param_2,&PTR_FUN_005fa0c8), cVar2 == '\0')) {
    FUN_004b1060(param_1,param_2);
    return;
  }
  if (param_2 == 0) {
    FUN_0060d2c0(param_1,0,0);
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x48) + 8);
    *piVar1 = *piVar1 + 1;
    FUN_00607b80(param_1[9]);
    param_1[9] = *(longlong *)(param_2 + 0x48);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

